#ifndef GROUP8_H
#define GROUP8_H

#include "types.h"

// capswitch
extern const GeoLayout cap_switch_geo[];
extern const Gfx capswitch_seg5_dl_05002D88[];
extern const Gfx cap_switch_exclamation_seg5_dl_05002E00[];
extern const Gfx capswitch_seg5_dl_05003020[];
extern const Gfx cap_switch_base_seg5_dl_05003120[];
extern const Gfx capswitch_seg5_dl_05003280[];
extern const Gfx capswitch_seg5_dl_05003350[];
extern const Gfx capswitch_seg5_dl_05003370[];
extern const Gfx capswitch_seg5_dl_05003390[];
extern const Gfx capswitch_seg5_dl_050033B0[];
extern const Collision capswitch_collision_050033D0[];
extern const Collision capswitch_collision_05003448[];

// springboard
extern const GeoLayout springboard_top_geo[];
extern const GeoLayout springboard_spring_geo[];
extern const GeoLayout springboard_bottom_geo[];
extern const Gfx springboard_checkerboard_seg5_dl_050016B8[];
extern const Gfx springboard_spring_seg5_dl_05001800[];
extern const Gfx springboard_checkerboard_seg5_dl_05001900[];
extern const Collision springboard_collision_05001A28[];

#include "broken_l_end/geo_header.h"

#include "broken_l_end/collision_header.h"

#include "broken_l_mid/geo_header.h"

#include "broken_l_mid/collision_header.h"

#include "broken_l_start/geo_header.h"

#include "broken_l_start/collision_header.h"

#include "broken_r_end/geo_header.h"

#include "broken_r_end/collision_header.h"

#include "broken_r_mid/geo_header.h"

#include "broken_r_mid/collision_header.h"

#include "broken_r_start/geo_header.h"

#include "broken_r_start/collision_header.h"

#include "double_straight_line/geo_header.h"

#include "double_straight_line/collision_header.h"

#include "o_block/geo_header.h"

#include "o_block/collision_header.h"

#include "single_straight_line/geo_header.h"

#include "single_straight_line/collision_header.h"

#include "x_block/geo_header.h"

#include "x_block/collision_header.h"

#include "double_to_single/geo_header.h"

#include "double_to_single/collision_header.h"

#include "single_to_double/geo_header.h"

#include "single_to_double/collision_header.h"

#endif
