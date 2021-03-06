/*
* @file
* @brief pthread_condattr_setpshared() API Conformance Test
*/

/*
* COPYRIGHT (c) 1989-2009.
* On-Line Applications Research Corporation (OAR).
*
* The license and distribution terms for this file may be
* found in the file LICENSE in this distribution or at
* http://www.rtems.org/license/LICENSE.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <pthread.h>

#ifndef _POSIX_THREADS
#error "rtems is supposed to have pthread_condattr_getpshared"
#endif
#ifndef _POSIX_THREAD_PROCESS_SHARED
#error "rtems is supposed to have pthread_condattr_setpshared"
#endif

int test( void );

int test( void )
{
  pthread_condattr_t attribute;
  int                pshared;
  int                result;

  result = pthread_condattr_getpshared( &attribute, &pshared );

  return result;
}
