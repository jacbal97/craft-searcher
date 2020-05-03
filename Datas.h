#include "items.h"

extern item trap_line("trap line", nullptr);
extern item red_paint("red paint", &trap_line);
extern item leather("leather", &red_paint);
extern item red_inner_backpack("red inner backpack",&leather, &leather, &red_paint, &trap_line);
extern item bottle_of_water("battle of water", &red_inner_backpack);
extern item leaves_marigold("leaves marigold", &bottle_of_water);
extern item nut("nut", &leaves_marigold);
extern item blue_perianth("blue perianth", &nut);
extern item neon_decoction("neon decoction",&blue_perianth, &bottle_of_water, &leaves_marigold, &nut, &blue_perianth);

//head
extern item head("nazwa", &neon_decoction);