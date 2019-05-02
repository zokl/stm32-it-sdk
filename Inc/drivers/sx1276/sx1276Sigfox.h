/* ==========================================================
 * sx1276Sigfox.h - Sigfox implementation on sx1276
 * Project : Disk91 SDK
 * ----------------------------------------------------------
 * Created on: 1 may 2019
 *     Author: Paul Pinault aka Disk91
 * ----------------------------------------------------------
 * Copyright (C) 2018 Disk91
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU LESSER General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * ----------------------------------------------------------
 *
 * ==========================================================
 */
#ifndef IT_SDK_DRIVERS_SX1276_SIGFOX_H_
#define IT_SDK_DRIVERS_SX1276_SIGFOX_H_

#include <it_sdk/config.h>
#if ( ITSDK_WITH_SIGFOX_LIB == __ENABLE ) && (ITSDK_SIGFOX_LIB == __SIGFOX_SX1276)
#include <it_sdk/sigfox/sigfox.h>

itsdk_sigfox_init_t sx1276_sigfox_init(itsdk_sigfox_state * sigfox_state);

/* ----------------------------------------------------------------
 * Misc defines
 */
#define SIGFOX_MCU_API_VER				"MCU_API_V1.0"
#define SIGFOX_MAX_CS_RSSI_AVG 			8
/* ----------------------------------------------------------------
 * Logging
 */

#if (ITSDK_LOGGER_MODULE & __LOG_MOD_LOWSIGFOX) > 0
#define LOG_INFO_SFXSX1276(x)		log_info x
#define LOG_WARN_SFXSX1276(x) 		log_warn x
#define LOG_ERROR_SFXSX1276(x)		log_error x
#define LOG_DEBUG_SFXSX1276(x)		log_debug x
#else
#define LOG_INFO_SFXSX1276P(x)
#define LOG_WARN_SFXSX1276(x)
#define LOG_ERROR_SFXSX1276(x)
#define LOG_DEBUG_SFXSX1276(x)
#endif

/* ----------------------------------------------------------------
 * ST LowLevel
 */
typedef enum {
  STLL_ERROR = 0,
  STLL_SUCCESS = !STLL_ERROR
} STLL_Status;

typedef enum
{
  STLL_RESET = 0,
  STLL_SET = !STLL_RESET
} STLL_flag;

typedef enum {
  STLL_ENABLE=0,
  STLL_DISABLE
} STLL_State;

typedef enum {
  HSE_SOURCE,
  HSI_SOURCE
} stll_clockType_e;

#endif // SIGFOX SX1276 ENABLE

#endif // IT_SDK_DRIVERS_SX1276_SIGFOX_H_
