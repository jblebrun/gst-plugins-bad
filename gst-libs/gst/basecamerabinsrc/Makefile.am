
lib_LTLIBRARIES = libgstbasecamerabinsrc-@GST_MAJORMINOR@.la

CLEANFILES = $(BUILT_SOURCES)

libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_SOURCES = \
        gstcamerabin-enum.c \
        gstcamerabinpreview.c \
	gstbasecamerasrc.c

libgstbasecamerabinsrc_@GST_MAJORMINOR@includedir = $(includedir)/gstreamer-@GST_MAJORMINOR@/gst/basecamerabinsrc
libgstbasecamerabinsrc_@GST_MAJORMINOR@include_HEADERS = \
	gstcamerabin-enum.h \
	gstcamerabinpreview.h \
	gstbasecamerasrc.h

libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_CFLAGS = \
	$(GST_PLUGINS_BAD_CFLAGS) \
	$(GST_PLUGINS_BASE_CFLAGS) \
	-DGST_USE_UNSTABLE_API \
	$(GST_CFLAGS)
libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_LIBADD = \
        $(top_builddir)/gst-libs/gst/interfaces/libgstphotography-@GST_MAJORMINOR@.la \
	$(GST_PLUGINS_BASE_LIBS) -lgstinterfaces-$(GST_MAJORMINOR) \
	-lgstapp-$(GST_MAJORMINOR) $(GST_BASE_LIBS) $(GST_LIBS)

libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_LDFLAGS = $(GST_LIB_LDFLAGS) $(GST_ALL_LDFLAGS) $(GST_LT_LDFLAGS)

Android.mk: Makefile.am
	androgenizer -:PROJECT libgstbasecamerabinsrc -:STATIC libgstbasecamerabinsrc-@GST_MAJORMINOR@ \
	 -:TAGS eng debug \
         -:REL_TOP $(top_srcdir) -:ABS_TOP $(abs_top_srcdir) \
	 -:SOURCES $(libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_SOURCES) \
	 -:CFLAGS $(DEFS) $(libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_CFLAGS) \
	 -:LDFLAGS $(libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_LDFLAGS) \
	           $(libgstbasecamerabinsrc_@GST_MAJORMINOR@_la_LIBADD) \
	           -ldl \
	 -:LIBFILTER_STATIC gstphotography-@GST_MAJORMINOR@ \
	 -:HEADER_TARGET gstreamer-@GST_MAJORMINOR@/gst/basecamerabinsrc \
	 -:HEADERS $(libgstbasecamerabinsrcinclude_HEADERS) \
	 -:PASSTHROUGH LOCAL_ARM_MODE:=arm \
	> $@
