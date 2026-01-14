
# Makefile.am for ycp-ui-bindings-dummy/src
#

AM_CXXFLAGS = -DY2LOG=\"libycp\"		\
	-fmessage-length=0			\
	-DYAST2DIR=\"$(yast2dir)\"

AM_CPPFLAGS = -DLOCALEDIR=\"${localedir}\"

plugin_LTLIBRARIES = libpy2UI.la

libpy2UI_la_SOURCES =				\
	YUIComponentCreator.cc			\
	YUIComponent.cc				\
	YUINamespace.cc



pkgincludedir = $(includedir)/ycp-ui

pkginclude_HEADERS =				\
	YUIComponentCreator.h			\
	YUIComponent.h

noinst_HEADERS =				\
	YUINamespace.h


INCLUDES =					\
	-I$(includedir)

libpy2UI_la_LDFLAGS = -L$(libdir) -version-info 2:0 -Wl,--no-undefined

libpy2UI_la_LIBADD =				\
	-lpthread -ly2 -lycp -lycpvalues -ly2util

# "foo bar: baz" is wrong
# see "info '(automake)Multiple Outputs'"
DEVTOOLSBINDIR=/usr/share/YaST2/data/devtools/bin
%BuiltinCalls.h %BuiltinTable.h : Y%Namespace.h
	$(DEVTOOLSBINDIR)/generateYCPWrappers $< $*BuiltinCalls.h $*BuiltinTable.h

BUILT_SOURCES = UIBuiltinTable.h UIBuiltinCalls.h

CLEANFILES = libyui.kdoc $(BUILT_SOURCES)


#<INSTALL-HEADER-TARGET>

# Automatically inserted by insert_install_target
# DO NOT REMOVE THE TAGS!

# Install header files only if different to version already installed -
# prevent unnecessary installations to keep make dependency changes
# and thus rebuilds for dependent packages as low as possible.

install-pkgincludeHEADERS: $(pkginclude_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(pkgincludedir)
	@list='$(pkginclude_HEADERS)';							\
	for p in $$list; do								\
		if test -f "$$p"; then d= ; else d="$(srcdir)/"; fi; 			\
		if ! cmp -s $$d$$p $(DESTDIR)$(pkgincludedir)/$$p; then			\
			echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(pkgincludedir)/$$p";	\
			$(INSTALL_DATA) $$d$$p $(DESTDIR)$(pkgincludedir)/$$p;		\
	  	fi									\
	done

#</INSTALL-HEADER-TARGET>

