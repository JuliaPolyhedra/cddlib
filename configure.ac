#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([cddlib], [0.94])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_INSTALL
m4_ifdef([AM_PROG_AR], [AM_PROG_AR])
AC_PROG_LN_S
AC_PROG_MAKE_SET
LT_INIT

AC_CONFIG_MACRO_DIR([m4])

# Checks for libraries.
AC_CHECK_LIB(gmp, main)

# Checks for header files.
AC_CHECK_HEADERS([limits.h stdlib.h string.h gmp.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([strchr])

AC_CONFIG_FILES([Makefile
                 lib-src-gmp/Makefile
                 lib-src/Makefile
                 src-gmp/Makefile
                 src/Makefile])
AC_OUTPUT
