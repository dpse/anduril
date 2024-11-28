#pragma once

#undef DEFAULT_THERM_CEIL
#undef USE_AUX_RGB_LEDS_WHILE_ON
#undef SIMPLE_UI_ACTIVE
#undef DEFAULT_AUTOLOCK_TIME
#undef RGB_LED_LOCKOUT_DEFAULT
#undef RGB_LED_OFF_DEFAULT

#if (MCU==0x85) || (MCU==0x1634)
// sloppy temperature sensor needs bigger error margin
#define DEFAULT_THERM_CEIL 40  // try not to get hotter than this (in C)
#else
// more accurate temperature sensor can regulate higher safely
#define DEFAULT_THERM_CEIL 45  // try not to get hotter than this (in C)
#endif

#define USE_BUTTON_LED
#define USE_AUX_RGB_LEDS_WHILE_ON  25
#define USE_INDICATOR_LED_WHILE_RAMPING
#define SIMPLE_UI_ACTIVE 0
#define DEFAULT_AUTOLOCK_TIME 5
#define RGB_LED_LOCKOUT_DEFAULT 0x09
#define RGB_LED_OFF_DEFAULT 0x39