#include "init.h"

void s2d_init(void) {
	gSPLoadUcode(gdl_head++, s2d_text, s2d_data);
}

void s2d_stop(void) {
	gSPLoadUcode(gdl_head++, zex_text, zex_data);
}

