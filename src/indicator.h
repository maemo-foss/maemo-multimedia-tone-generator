/*************************************************************************
This file is part of tone-generator

Copyright (C) 2010 Nokia Corporation.

This library is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation
version 2.1 of the License.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
USA.
*************************************************************************/

#ifndef __TONEGEND_INDICATOR_H__
#define __TONEGEND_INDICATOR_H__

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <stdint.h>

#define PRESERVE_STREAM    0
#define KILL_STREAM        1

#define STD_UNKNOWN        0
#define STD_CEPT           1
#define STD_ANSI           2
#define STD_JAPAN          3
#define STD_ATNT           4
#define STD_MAX            5



int  indicator_init(int, char **);
void indicator_play(struct ausrv *, int, uint32_t, int);
void indicator_stop(struct ausrv *, int);
void indicator_set_standard(int);
void indicator_set_properties(char *);
void indicator_set_volume(uint32_t);

#endif /* __TONEGEND_INDICATOR_H__ */

/*
 * Local Variables:
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
