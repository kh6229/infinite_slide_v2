#include "src/game/envfx_snow.h"

const GeoLayout double_straight_line_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, double_straight_line_Double_Straight_Line_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
