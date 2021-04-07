#pragma once

#include "quantum.h"

#define LAYOUT_ortho_5x2( \
	K00, K01, \
	K02, K03, \
	K04, K05, \
	K06, K07, \
	K08, K09  \
) { \
	{ K00, K01 }, \
	{ K02, K03 }, \
	{ K04, K05 }, \
	{ K06, K07 }, \
	{ K08, K09 }  \
}
