/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Default FAPI profile used for testing */
#define DEFAULT_TEST_FAPI_PROFILE "P_ECC"

/* Disable Vendor Extensions */
/* #undef DISABLE_VENDOR */

/* DISABLE WEAK CRYPTO ALGORITHMS */
/* #undef DISABLE_WEAK_CRYPTO */

/* "The default TCTIs configuration string" */
/* #undef ESYS_TCTI_DEFAULT_CONFIG */

/* "The default TCTI library file" */
/* #undef ESYS_TCTI_DEFAULT_MODULE */

/* Perform integration tests without EK certificate verification */
#define FAPI_TEST_EK_CERT_LESS 1

/* If lib curl has curl_url_strerror function */
/* #undef HAVE_CURL_URL_STRERROR */

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Support EVP_sm3 in openssl */
#define HAVE_EVP_SM3 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `reallocarray' function. */
#define HAVE_REALLOCARRAY 1

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

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

/* use mssim TCTI for integration tests */
/* #undef INTEGRATION_TCTI_MSSIM */

/* Support for writing to a log file is enabled */
#define LOG_FILE_ENABLED 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* "Trace log level" */
#define MAXLOGLEVEL 5

/* mbedTLS cryptographic backend */
/* #undef MBED */

/* Define if debugging is disabled */
#define NDEBUG 1

/* disable use of dlopen */
/* #undef NO_DL */

/* OpenSSL cryptographic backend */
#define OSSL 1

/* Name of package */
#define PACKAGE "tpm2-tss"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/tpm2-software/tpm2-tss/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "tpm2-tss"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "tpm2-tss 4.0.1-dirty"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "tpm2-tss"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/tpm2-software/tpm2-tss"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.1-dirty"

/* Allow usage of self generated root certificate */
/* #undef SELF_GENERATED_CERTIFICATE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* System config dir */
#define SYSCONFDIR "/usr/local/etc"

/* TCTI FOR COMMAND BASED ACCESS TO TPM2 DEVICE */
#define TCTI_CMD 1

/* TCTI FOR DEV TPM */
#define TCTI_DEVICE 1

/* TCTI FOR FUZZING */
/* #undef TCTI_FUZZING */

/* TCTI FOR MS SIMULATOR */
#define TCTI_MSSIM 1

/* TCTI HELPER FOR SPI BASED ACCESS TO TPM2 DEVICE */
#define TCTI_SPI_HELPER 1

/* TCTI FOR SWTPM */
#define TCTI_SWTPM 1

/* FAPI forced async spinning */
/* #undef TEST_FAPI_ASYNC */

/* Enable for UNIT testing */
/* #undef UNIT */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "4.0.1-dirty"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
