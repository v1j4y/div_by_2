# Initialize
AC_INIT([div_by_2], [5.0])
AM_PROG_AR
LT_INIT
AC_CONFIG_MACRO_DIR([m4])

# Generate the Makefile
AM_INIT_AUTOMAKE([foreign -Wall -Werror])

AC_LANG(C)

# Make sure Fortran is available
AC_PROG_FC([gfortran])

# Make sure gcc is working
AC_PROG_CC([gcc])

# Generate Makefile from Makefile.in
AC_CONFIG_FILES([Makefile])

# Done
AC_OUTPUT

echo \
"-------------------------------------------------

${PACKAGE_NAME} Version ${PACKAGE_VERSION} ${TREXIO_DEVEL}

Prefix ........:  ${prefix}
CC ............:  ${CC}
CPPFLAGS ......:  ${CPPFLAGS}
CFLAGS ........:  ${CFLAGS}
FC ............:  ${FC}
FCLAGS ........:  ${FCFLAGS}
LDFLAGS .......:  ${LDFLAGS}
LIBS ..........:  ${LIBS}

Now type 'make @<:@<target>@:>@'
where the optional <target> is:
  all           - build C library and Fortran binding
  check	        - run unit tests
  install       - install the library 
--------------------------------------------------"
