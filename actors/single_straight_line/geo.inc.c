#include "src/game/envfx_snow.h"

const GeoLayout single_straight_line_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, single_straight_line_Single_Straight_Line_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
