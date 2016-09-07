#!/usr/bin/bash
#wget http://downloads.sourceforge.net/project/cunit/CUnit/2.1-3/CUnit-2.1-3.tar.bz2
#tar -xjf CUnit-2.1-3.tar.bz2 
cd CUnit-2.1-3
autoscan && aclocal && autoconf && autoheader && libtoolize && automake -a
./configure --prefix=/home/shena/github/install_directory
make && make install
