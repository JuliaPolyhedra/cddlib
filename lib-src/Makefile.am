lib_LTLIBRARIES = libcdd.la

libcdd_la_SOURCES = \
cddcore.c \
cddlp.c	\
cddmp.c \
cddio.c \
cddlib.c \
cddproj.c \
setoper.c

include_HEADERS = \
cdd.h \
cddmp.h \
cddtypes.h \
setoper.h

AM_CPPFLAGS = -UGMPRATIONAL
# AM_CPPFLAGS is added before CPPFLAGS so
# if -DGMPRATIONAL is in CPPFLAGS it is not removed.
# However, AM_CFLAGS is added after CFLAGS so it has an effect
AM_CFLAGS   = -UGMPRATIONAL
AM_LDFLAGS = -version-info 0:0:0
