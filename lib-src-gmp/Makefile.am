lib_LTLIBRARIES = libcddgmp.la

libcddgmp_la_SOURCES = \
cddstd.c \
cddcore.c \
cddlp.c	\
cddmp.c \
cddio.c \
cddlib.c \
cddproj.c \
cddstd_f.c \
cddcore_f.c \
cddlp_f.c	\
cddmp_f.c \
cddio_f.c \
cddlib_f.c \
cddproj_f.c \
setoper.c

include_HEADERS = \
cddstd.h \
cdd.h \
cddmp.h \
cddtypes.h \
cddstd_f.h \
cdd_f.h \
cddmp_f.h \
cddtypes_f.h \
setoper.h

AM_CPPFLAGS = -I$(gmpincludedir) -DGMPRATIONAL
AM_LDFLAGS = -version-info 0:0:0 -no-undefined
