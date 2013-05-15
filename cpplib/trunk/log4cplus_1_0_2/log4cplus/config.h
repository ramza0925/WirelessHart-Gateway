/* include/log4cplus/config.h.  Generated by configure.  */
/* include/log4cplus/config.h.in.  Generated from configure.in by autoheader.  */
/* Module:  Log4CPLUS
 * File:    config.h.in
 * Created: 6/2001
 * Author:  Tad E. Smith
 *
 *
 * Copyright (C) The Apache Software Foundation. All rights reserved.
 *
 * This software is published under the terms of the Apache Software
 * License version 1.1, a copy of which has been included with this
 * distribution in the LICENSE.APL file.
 */



/* Define if this is a single-threaded library. */
/* #undef LOG4CPLUS_SINGLE_THREADED */

/* Name of package */
#define PACKAGE "log4cplus"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Version number of package */
#define VERSION "1.0.2"

#ifdef _WIN32
#  include <log4cplus/config-win32.h>

#elif (defined(__APPLE__) || (defined(__MWERKS__) && defined(__MACOS__)))
#  include <log4cplus/config-macosx.h>

#endif // _WIN32

#if !defined(_WIN32)
#  if !defined(LOG4CPLUS_SINGLE_THREADED)
#    define LOG4CPLUS_USE_PTHREADS
#  endif
#  define LOG4CPLUS_EXPORT

#endif // !_WIN32

#include <log4cplus/helpers/thread-config.h>

