#include QMK_KEYBOARD_H
// Defines names for use in layer keycodes and the keymap

enum {
    _BASE = 0,
    _FN,
    _MAC_LAYER,
    _FN_MAC
};

#define KC_CUR_APP SAFE_RANGE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_BSLS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,            KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,            KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                               KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                                     KC_SPC,                    KC_RALT, KC_RGUI, MO(_FN),   KC_RCTL,            KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [_FN] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, DF(_MAC_LAYER), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,        
        KC_TRNS, UG_TOGG, UG_PREV, UG_NEXT, UG_HUED, UG_HUEU, UG_SATD, UG_SATU, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                              UG_VALU,
        KC_TRNS, QK_MAGIC_TOGGLE_GUI, KC_TRNS,                                     KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            UG_SPDD, UG_VALD, UG_SPDU
    ),
    [_MAC_LAYER] = LAYOUT(
        KC_ESC,  KC_BSLS, KC_BRID,   KC_BRIU,   KC_MCTL,   KC_LPAD,   KC_CUR_APP,   LSG(KC_4),   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,  KC_VOLD,  KC_VOLU,             LSG(KC_4),  KC_SCRL,  KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,            KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,            KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                               KC_UP,
        KC_LCTL, KC_LALT, KC_LGUI,                                     KC_SPC,                    KC_RGUI, KC_RALT, MO(_FN_MAC),   KC_RCTL,            KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [_FN_MAC] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            LSG(KC_3), KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, DF(_BASE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,        
        KC_TRNS, UG_TOGG, UG_PREV, UG_NEXT, UG_HUED, UG_HUEU, UG_SATD, UG_SATU, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                              UG_VALU,
        KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            UG_SPDD, UG_VALD, UG_SPDU
    )
};

static uint32_t scan_timer = 1000; // 1000ms = 1 second

static uint32_t df2_key_timer = 0;
static bool df2_key_pressed = false;

static uint32_t df0_key_timer = 0;
static bool df0_key_pressed = false;

// Scan delay for macos/win layout change event
void matrix_scan_user(void) {
    if (df0_key_pressed && timer_elapsed(df0_key_timer) >= scan_timer) {
        set_single_persistent_default_layer(_BASE);
        df0_key_pressed = false; // Reset the state
    }

    if (df2_key_pressed && timer_elapsed(df2_key_timer) >= scan_timer) {
        set_single_persistent_default_layer(_MAC_LAYER);
        df2_key_pressed = false; // Reset the state
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case DF(_MAC_LAYER):
        if (record->event.pressed) {
            df2_key_pressed = true;
            df2_key_timer = timer_read32(); // Start the timer
        } else { // Key released
            df2_key_pressed = false;
            // No immediate action on release, the delay logic handles it
        }
        return false;

    case DF(_BASE):
        if (record->event.pressed) {
            df0_key_pressed = true;
            df0_key_timer = timer_read32(); // Start the timer
        } else { // Key released
            df0_key_pressed = false;
            // No immediate action on release, the delay logic handles it
        }
        return false;

    case KC_CUR_APP:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_TAP(X_DOWN)));
        }
        return false;

    default:
        return true;
    }
 
    return true;
}
