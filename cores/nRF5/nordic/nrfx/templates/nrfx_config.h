/*
 * Copyright (c) 2019 - 2024, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

#include <nrfx_config_common.h>
#if defined(NRF51)
    #include <nrfx_config_nrf51.h>
#elif defined(NRF52805_XXAA)
    #include <nrfx_config_nrf52805.h>
#elif defined(NRF52810_XXAA)
    #include <nrfx_config_nrf52810.h>
#elif defined(NRF52811_XXAA)
    #include <nrfx_config_nrf52811.h>
#elif defined(NRF52820_XXAA)
    #include <nrfx_config_nrf52820.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <nrfx_config_nrf52832.h>
#elif defined(NRF52833_XXAA)
    #include <nrfx_config_nrf52833.h>
#elif defined(NRF52840_XXAA)
    #include <nrfx_config_nrf52840.h>
#elif defined(NRF5340_XXAA_APPLICATION)
    #include <nrfx_config_nrf5340_application.h>
#elif defined(NRF5340_XXAA_NETWORK)
    #include <nrfx_config_nrf5340_network.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf54h20_application.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_RADIOCORE)
    #include <nrfx_config_nrf54h20_radiocore.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_PPR)
    #include <nrfx_config_nrf54h20_ppr.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf54h20_flpr.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf54h20_enga_application.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_RADIOCORE)
    #include <nrfx_config_nrf54h20_enga_radiocore.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_PPR)
    #include <nrfx_config_nrf54h20_enga_ppr.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf54h20_enga_flpr.h>
#elif defined(NRF54L15_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf54l15_application.h>
#elif defined(NRF54L15_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf54l15_flpr.h>
#elif defined(NRF54L15_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf54l15_enga_application.h>
#elif defined(NRF54L15_ENGA_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf54l15_enga_flpr.h>
#elif defined(NRF54L20_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf54l20_enga_application.h>
#elif defined(NRF54L20_ENGA_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf54l20_enga_flpr.h>
#elif defined(NRF9120_XXAA) || defined(NRF9160_XXAA)
    #include <nrfx_config_nrf91.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf9230_engb_application.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_RADIOCORE)
    #include <nrfx_config_nrf9230_engb_radiocore.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_PPR)
    #include <nrfx_config_nrf9230_engb_ppr.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_nrf9230_engb_flpr.h>
#else
    #include "nrfx_config_ext.h"
#endif

#endif // NRFX_CONFIG_H__
