#include "paper80.h"
#ifdef RGB_MATRIX_ENABLE

typedef union {
    uint32_t raw;
    uint8_t underground_rgb_sw :8;
} kb_cums_t;
kb_cums_t kb_cums;

led_config_t g_led_config = {
    { 
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   },
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   },
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   },
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   },
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   },
        {   NO_LED, NO_LED, NO_LED,  NO_LED,     NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED,    NO_LED,    NO_LED, NO_LED, NO_LED,  NO_LED   }
    },
    {
        /* LED Index to Physical Position */
        {218,35},{218,39},  /*3528-logo*2*/

        {183,30},{181,21},{168,20}, {155,20}, {143,20},{130,20}, {117,20},{105,20},{92,20},{80,20},{67,20},{55,20},{42,20},{37,30}, /*5050-PCB-under*14*/

        {0,20},{0,23},{0,27},{0,30},{0,33},{0,37},{0,41},{0,44},{0,48},/*PCB-left-0807*9*/

        {224,20},{224,23},{224,27},{224,30},{224,33},{224,37},{224,41},{224,44},{224,48}, /*PCB-right-0807*9*/

        {217,64},{210,64},{203,64},{197,64},{190,64},{183,64},{176,64},{170,64},{163,64},{157,64},{150,64},{144,64},{137,64},{131,64},{125,64},{119,64},{112,64},
        {105,64},{99,64},{91,64},{84,64},{78,64},{71,64},{65,64},{58,64},{52,64},{45,64},{39,64},{32,64},{26,64},{19,64},{13,64},{6,64},

        {0,64},{0,60},{0,56},{0,51},{0,19},{0,15},{0,11},{0,7},{0,3},{0,0},

        {6,0},{13,0},{19,0},{26,0},{32,0},{39,0},{45,0},{52,0},{58,0},{65,0},{71,0},{78,0},{84,0},{91,0},{99,0},{105,0},{112,0},{119,0},{125,0},{131,0},{137,0},
        {144,0},{150,0},{157,0},{163,0},{170,0},{176,0},{183,0},{190,0},{197,0},{203,0},{210,0},{217,0},{224,0},

        {224,3},{224,7},{224,11},{224,15},{224,19},{224,52},{224,56},{224,60},{224,64},
        /*all round-0807*86*/
    },
    {
      /* LED Index to Flag */
      2,2,
      2,2,2,2,2, 2,2,2,2,2,
      2,2,2,2,

      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8,8, 8,8,8,8,8,
      8,8,8,8
    }
};
bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
        RGB_MATRIX_INDICATOR_SET_COLOR(1, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
    }
    return true;
}

#endif
