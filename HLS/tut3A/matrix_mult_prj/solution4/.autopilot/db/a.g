#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult_prj/solution4/.autopilot/db/a.g.bc ${1+"$@"}
