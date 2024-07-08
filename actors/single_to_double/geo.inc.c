#include "src/game/envfx_snow.h"

const GeoLayout single_to_double_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, single_to_double_Single_to_Double_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
