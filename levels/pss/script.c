#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x6, _group12_yay0SegmentRomStart, _group12_yay0SegmentRomEnd), 
	LOAD_RAW(0xd, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, 0, 6403, 23817),
		MARIO_POS(0x01, -180, 0, 8266, 14150),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 4627, 4036, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 5604, 7678, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 6582, 11320, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 7560, 14962, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 3651, 394, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 2675, -3248, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 1697, -6890, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, 719, -10532, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_SINGLE_STRAIGHT_LINE, 0, -259, -14174, -15, 0, 0, 0x00000000, bhvSingleStraightLine),
		OBJECT(MODEL_NONE, 0, 8266, 14150, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, 8266, 14150),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
