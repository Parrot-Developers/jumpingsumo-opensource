//------------------------------------------------------------------------------
// <copyright file="ar6000_api.h" company="Atheros">
//    Copyright (c) 2004-2008 Atheros Corporation.  All rights reserved.
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation;
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
//
//------------------------------------------------------------------------------
//==============================================================================
// This file contains the API to access the OS dependent atheros host driver
// by the WMI or WLAN generic modules.
//
// Author(s): ="Atheros"
//==============================================================================
#ifndef _AR6000_API_H_
#define _AR6000_API_H_

#if (defined(__linux__) || defined(LINUX)) && !defined(LINUX_EMULATION)
#include "../ar6000/ar6xapi_linux.h"
#endif

#ifdef UNDER_NWIFI
#include "../os/windows/common/include/ar6xapi_wince.h"
#endif

#ifdef ATHR_CE_LEGACY
#include "../os/wince/include/ar6xapi_wince.h"
#endif

#ifdef REXOS
#include "../os/rexos/include/common/ar6xapi_rexos.h"
#endif

#endif /* _AR6000_API_H */

