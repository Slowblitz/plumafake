/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to enable using gvfs metadata */
#define ENABLE_GVFS_METADATA 1

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Define to the Gettext package name */
#define GETTEXT_PACKAGE "pluma"

/* Warn on use of APIs added after GLib 2.36 */
#define GLIB_VERSION_MAX_ALLOWED GLIB_VERSION_2_36

/* Warn on use of APIs deprecated before GLib 2.36 */
#define GLIB_VERSION_MIN_REQUIRED GLIB_VERSION_2_36

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to enable GObject Introspection */
#define HAVE_INTROSPECTION 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the iso-codes package */
#define HAVE_ISO_CODES 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* ISO codes prefix */
#define ISO_CODES_PREFIX "/usr"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "pluma"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/mate-desktop/pluma/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "pluma"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pluma 1.19.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pluma"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://mate-desktop.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.19.0"

/* Pluma major version */
#define PLUMA_MAJOR_VERSION 1

/* Pluma micro version */
#define PLUMA_MICRO_VERSION 0

/* Pluma minor version */
#define PLUMA_MINOR_VERSION 19

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.19.0"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
