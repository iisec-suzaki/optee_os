/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2026 RICSec
 */

#ifndef PTA_VERAISON_ATTESTATION_PLATFORM_H
#define PTA_VERAISON_ATTESTATION_PLATFORM_H

#include <stdint.h>
#include <tee_api_types.h>

/*
 * Platform values of the PSA token. A platform provides them from its
 * hardware (CFG_VERAISON_ATTESTATION_PTA_PLATFORM_CLAIMS=y); otherwise
 * the fixed test values are used.
 */

/* The PSA security lifecycle state of the device */
TEE_Result platform_get_lifecycle(int *lifecycle);

#endif /* PTA_VERAISON_ATTESTATION_PLATFORM_H */
