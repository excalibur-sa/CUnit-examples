#!/usr/bin/bash
#gcc -o test -I/home/shena/opensrc_install_directory/include -L/home/shena/opensrc_install_directory/lib -lcunit run_test.c test_func.c func.c
gcc -o test  run_test.c test_func.c func.c -g `pkg-config --cflags --libs cunit`