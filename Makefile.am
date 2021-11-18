AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4 --install

src_main_c = src/main.c
include_utils_h = include/utils.h

include_HEADERS = $(include_utils_h)

bin_PROGRAMS = divby2

divby2_SOURCES = $(src_main_c) $(include_utils_h)
divby2_CPPFLAGS = "-I${top_srcdir}/include" -fPIC
divby2_LDADD = libdivby2.la

lib_LTLIBRARIES = libdivby2.la
libdivby2_la_SOURCES = $(src_main_c) $(include_utils_h) 
libdivby2_la_CPPFLAGS = "-I${abs_srcdir}/include"
libdivby2_la_LDFLAGS = -version-info 0:0:0

check_PROGRAMS = tests/test_main
tests_test_main_SOURCES = $(test_main_c) $(include_utils_h)
tests_test_main_LDADD   = libdivby2.la
tests_test_main_LDFLAGS = -no-install
tests_test_main_CPPFLAGS = "-I${top_srcdir}/include" -fPIC

TESTS = tests/test_main

sourcedir=$(datadir)/source
dist_source_DATA = $(src_main_c)
