c -*- Fortran -*-
c
c~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c
c                             Charles A. Williams
c                       Rensselaer Polytechnic Institute
c                        (C) 2004  All Rights Reserved
c
c  Copyright 2004 Rensselaer Polytechnic Institute.
c  All worldwide rights reserved.  A license to use, copy, modify and
c  distribute this software for non-commercial research purposes only
c  is hereby granted, provided that this copyright notice and
c  accompanying disclaimer is not modified or removed from the software.
c
c  DISCLAIMER:  The software is distributed "AS IS" without any express
c  or implied warranty, including but not limited to, any implied
c  warranties of merchantability or fitness for a particular purpose
c  or any warranty of non-infringement of any current or pending patent
c  rights.  The authors of the software make no representations about
c  the suitability of this software for any particular purpose.  The
c  entire risk as to the quality and performance of the software is with
c  the user.  Should the software prove defective, the user assumes the
c  cost of all necessary servicing, repair or correction.  In
c  particular, neither Rensselaer Polytechnic Institute, nor the authors
c  of the software are liable for any indirect, special, consequential,
c  or incidental damages related to the software, to the maximum extent
c  the law permits.
c
c~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c
c
      subroutine write_state(
     & state,dstate,infiel,nstatesz,numelt,                             ! elemnt
     & infmat,infmatmod,ismatmod,numat,                                 ! materl
     & infetype,                                                        ! eltype
     & delt,                                                            ! timdat
     & istatout,                                                        ! ioopts
     & idout,idsk,kw,kp)                                                ! ioinfo
c
c...  program to print stress and strain
c     Note:  at present, it is assumed that a different istatout array
c     can be passed in for the elastic and time-dependent solutions.  No
c     checking is done to determine which is being used.
c
      include "implicit.inc"
c
c...  parameter definitions
c
      include "ndimens.inc"
      include "nshape.inc"
      include "materials.inc"
      include "nconsts.inc"
      include "rconsts.inc"
c
c...  subroutine arguments
c
      integer nstatesz,numelt,numat,idout,idsk,kw,kp
      integer infiel(6,numelt),infmat(3,numat),infmatmod(5,nmatmodmax)
      integer ismatmod(nstatesmax,nmatmodmax),infetype(4,netypes)
      integer istatout(2,nstatesmax)
      double precision delt
      double precision state(nstr,nstatesz),dstate(nstr,nstatesz)
c
c...  included dimension and type statements
c
      include "labels_dim.inc"
c
c...  intrinsic functions
c
      intrinsic mod
c
c...  local variables
c
      integer matmodpt(nstatesmax,nmatmodmax)
      integer m50,i,iel,imat,ietype,ngauss,matmodel,nstate,indstate,l
      integer indstateg,nout,j,incgauss
      double precision stmp(6),tmult
c
c...  included variable definitions
c
      include "labels_def.inc"
c
cdebug      write(6,*) "Hello from write_state_f!"
c
      m50=50
c
c...  define pointer array for location of state variables for each
c     material model.
c
      do i=1,nmatmodmax
        matmodpt(1,i)=izero
        do j=2,nstatesmax
          matmodpt(j,i)=matmodpt(j-1,i)+ismatmod(j-1,i)*nstr
        end do
      end do
c
c...  loop over number of state variables
c
      do i=1,nstatesmax
        if(istatout(1,i).ne.izero) then
          nout=izero
          do iel=1,numelt
            imat=infiel(2,iel)
            ietype=infiel(3,iel)
            ngauss=infetype(1,ietype)
            matmodel=infmat(1,imat)
            nstate=infmatmod(2,matmodel)
            indstate=infiel(5,iel)+matmodpt(i,matmodel)
            incgauss=nstate*nstr
            do l=1,ngauss
              indstateg=indstate+(l-1)*incgauss
              if(ismatmod(i,matmodel).eq.izero) then
                call fill(stmp,zero,nstr)
              else
                call dcopy(nstr,state(1,indstateg),ione,stmp,ione)
              end if
              if(idout.gt.1) then
                nout=nout+1
                if(nout.eq.1.or.mod(nout,m50).eq.izero) then
                  write(kw,2000) (labels(j),j=1,nstr)
                  write(kw,*) ' '
                end if
                write(kw,3000) iel,l,(stmp(j),j=1,nstr)
              end if
              if(idsk.eq.0) write(kp,1500) iel,l,(stmp(j),j=1,nstr)
              if(idsk.eq.1) write(kp) stmp
            end do
          end do
        end if
c
c...  output increments/rates, if desired.
c
        if(istatout(2,i).ne.izero) then
          tmult=one
          if(istatout(2,i).eq.ione.and.delt.gt.zero) tmult=one/delt
          nout=izero
          do iel=1,numelt
            imat=infiel(2,iel)
            ietype=infiel(3,iel)
            ngauss=infetype(1,ietype)
            matmodel=infmat(1,imat)
            nstate=infmatmod(2,matmodel)
            indstate=infiel(5,iel)+matmodpt(i,matmodel)
            incgauss=nstate*nstr
            do l=1,ngauss
              indstateg=indstate+(l-1)*incgauss
              call fill(stmp,zero,nstr)
              if(ismatmod(i,matmodel).ne.izero) call daxpy(nstr,tmult,
     &         state(1,indstateg),ione,stmp,ione)
              if(idout.gt.1) then
                nout=nout+1
                if(nout.eq.1.or.mod(nout,m50).eq.izero) then
                  write(kw,2000) (labels(i),i=1,nstr)
                  write(kw,*) ' '
                end if
                write(kw,3000) iel,l,(stmp(i),i=1,nstr)
              end if
              if(idsk.eq.izero) write(kp,1500) iel,l,(stmp(i),i=1,nstr)
              if(idsk.eq.ione) write(kp) stmp
            end do
          end do
        end if
      end do
      return
2000  format(///1x,' s t r e s s              '///
     &' elem #  gausspt',5x,5(a4,11x),a4)
3000  format(1x,i7,1x,i7,1x,6(1pe15.6))
1500  format(2i7,6e16.7)
      end
c
c version
c $Id: write_state.f,v 1.3 2004/07/12 21:22:42 willic3 Exp $
c
c Generated automatically by Fortran77Mill on Wed May 21 14:15:03 2003
c
c End of file 
