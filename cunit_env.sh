#!/bin/bash
export LD_LIBRARY_PATH=/home/shena/opensrc_install_directory/lib:$LD_LIBRARY_PATH
export PKG_CONFIG_PATH=/home/shena/opensrc_install_directory/lib/pkgconfig:$PKG_CONFIG_PATH

ulimit -c unlimited
#echo "/home/shena/github/cunit_code/coredump_%e_%p_%t" > /proc/sys/kernel/core_pattern