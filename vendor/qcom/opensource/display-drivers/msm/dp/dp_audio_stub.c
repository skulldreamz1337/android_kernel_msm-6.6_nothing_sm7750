// SPDX-License-Identifier: GPL-2.0-only
/*
 * Stub implementation of dp_audio_get/put — DP audio routing to an
 * external display isn't needed for the phone's own built-in screen.
 * The real dp_audio.c has a missing header dependency (msm_ext_display.h)
 * not present in the public source release, so it's excluded from the
 * build entirely; this stub keeps callers in dp_display.c linking cleanly.
 */
#include "dp_audio.h"

struct dp_audio *dp_audio_get(struct platform_device *pdev,
                        struct dp_panel *panel,
                        struct dp_catalog_audio *catalog)
{
        return NULL;
}

void dp_audio_put(struct dp_audio *dp_audio)
{
}
