/* Part of libhgfs - (c) 2009, D.C. van Moolenbroek */

#ifndef __NBSD_LIBC
#define _POSIX_SOURCE 1			/* need PATH_MAX */
#endif
#define _SYSTEM 1			/* need negative error codes */

#include <minix/config.h>
#include <minix/const.h>

#include <string.h>
#include <errno.h>

#include <minix/hgfs.h>

#define PREFIX(x) __libhgfs_##x

#include "type.h"
#include "const.h"
#include "proto.h"
#include "glo.h"
