// Copyright (c) 2023 Takuya Urakawa(@hsgw 5z6p.com)
// SPDX-License-Identifier: Apache-2.0
#pragma once

// /////////
// User remixes / tweaks -- these take precidence above all else
#if __has_include("../remixes/boards/dm9records_goni.h")
#include "../remixes/boards/dm9records_goni.h"
#else
// //////////
// Standard Definitions
#define STD_LEADING_NONES
#define STD_BETWEEN_ROW_ONE_TWO_NONES KC_NO,
#define STD_TRAILING_NONES , KC_NO

#endif
