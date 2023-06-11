/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2018 Philippe Gerum  <rpm@xenomai.org>
 */

#include <evl/evl.h>
#include <uapi/evl/control.h>
#include "git_stamp.h"

#ifndef GIT_STAMP
#define git_hash  ""
#else
#define git_hash  " -- " GIT_STAMP
#endif

struct evl_version evl_get_version(void)
{
	return (struct evl_version){
		.api_level = __EVL__,
		.abi_level = EVL_ABI_PREREQ,
		.version_string = "evl." LIBVERSION git_hash,
		};
}
