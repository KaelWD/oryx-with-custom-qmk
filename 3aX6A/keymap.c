#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DELETE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LT(5, KC_MEDIA_PLAY_PAUSE),
    KC_TAB,         KC_B,           KC_Y,           KC_O,           KC_U,           MT(MOD_LGUI, KC_QUOTE),                                MT(MOD_RGUI, KC_SCLN),KC_L,           KC_D,           KC_W,           KC_V,           MT(MOD_RALT, KC_Z),
    KC_LEFT_ALT,    KC_C,           KC_I,           KC_E,           KC_A,           KC_COMMA,                                       KC_DOT,         KC_H,           KC_T,           KC_S,           KC_N,           MT(MOD_RCTL, KC_Q),
    KC_LEFT_CTRL,   KC_J,           KC_X,           KC_K,           KC_G,           LT(2, KC_MINUS),                                LT(2, KC_SLASH),KC_R,           KC_M,           KC_F,           KC_P,           KC_ESCAPE,      
                                                    LT(3, KC_SPACE),KC_LEFT_SHIFT,                                  KC_BSPC,        LT(4, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_T,           KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           LT(3, KC_GRAVE),
    KC_G,           KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_RIGHT_GUI,
    KC_B,           KC_6,           KC_Z,           KC_X,           KC_C,           KC_V,                                           LT(2, KC_N),    KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LEFT_ALT,    
                                                    KC_SPACE,       KC_LEFT_CTRL,                                   KC_BSPC,        LT(4, KC_ENTER)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_PSCR,        KC_NO,          KC_NO,          KC_INSERT,      KC_NO,                                          KC_NUM,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_LEFT_GUI,                                    KC_TAB,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_HASH,        
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_LEFT_SHIFT,                                  KC_RIGHT_SHIFT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_KP_EQUAL,
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 QK_LLCK,        KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_MINUS,    KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_HASH,        KC_LABK,        KC_RABK,        KC_UNDS,        KC_DQUO,                                        KC_GRAVE,       KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_NO,
    KC_TRANSPARENT, KC_EXLM,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_BSLS,                                        KC_DOT,         KC_PIPE,        KC_LPRN,        KC_RPRN,        KC_QUES,        KC_NO,
    KC_TRANSPARENT, KC_CIRC,        KC_SLASH,       KC_ASTR,        KC_COLN,        LCTL(KC_V),                                     KC_DLR,         KC_TILD,        KC_LCBR,        KC_RCBR,        KC_AT,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(4, KC_SPACE)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         LGUI(LSFT(KC_S)),KC_MS_BTN5,     
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LGUI(LCTL(LSFT(KC_P)))),KC_MS_BTN4,     
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 TO(2),          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),KC_DELETE,      
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          TO(1),          TO(0),          KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_NO,          TO(1),          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          TO(0),          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_VOL_UP,KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          TO(2),          KC_AUDIO_VOL_DOWN,KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};

const uint16_t PROGMEM combo0[] = { KC_N, KC_S, KC_T, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(5, KC_MEDIA_PLAY_PAUSE):
            return TAPPING_TERM -50;
        case MT(MOD_RALT, KC_Z):
            return TAPPING_TERM + 30;
        case MT(MOD_RCTL, KC_Q):
            return TAPPING_TERM + 30;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {219,246,154}, {0,0,0}, {0,0,0}, {219,246,154}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,218,204}, {27,218,204}, {27,218,204}, {89,255,255}, {0,0,0}, {0,0,0}, {27,218,204}, {27,218,204}, {27,218,204}, {89,255,255}, {219,225,213}, {0,0,0}, {27,218,204}, {27,218,204}, {27,218,204}, {89,255,255}, {219,225,213}, {0,245,245}, {27,218,204}, {27,218,204}, {219,225,213}, {89,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,219,200}, {27,218,204}, {27,218,204}, {139,219,200}, {139,219,200}, {0,0,0}, {27,218,204}, {89,255,255}, {89,255,255}, {27,218,204}, {139,219,200}, {0,0,0}, {219,225,213}, {89,255,255}, {89,255,255}, {139,219,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,219,200}, {219,225,213}, {27,218,204}, {27,218,204}, {89,255,255}, {0,0,0}, {139,219,200}, {219,225,213}, {27,218,204}, {27,218,204}, {139,219,200}, {0,0,0}, {139,219,200}, {219,225,213}, {27,218,204}, {27,218,204}, {139,219,200}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {219,246,154}, {0,0,0}, {0,0,0}, {219,246,154}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {139,219,200}, {139,219,200}, {139,219,200}, {139,219,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,246,154}, {219,246,154}, {0,245,245}, {219,246,154}, {89,255,255}, {139,219,200}, {219,246,154}, {0,245,245}, {0,245,245}, {0,245,245}, {89,255,255}, {139,219,200}, {0,245,245}, {27,218,204}, {27,218,204}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,246,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {219,246,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,218,204}, {27,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,219,200}, {27,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
  }
  }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Disable alt mod-tap on Z if ctrl is held
    case MT(MOD_RALT, KC_Z):
      if (get_mods() & (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL))) {
        if (record->event.pressed) {
          register_code(KC_Z);
        } else {
          unregister_code(KC_Z);
        }
        return false;
      }
      break;

    case QK_MODS ... QK_MODS_MAX:
      // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
      // this makes sure that modifiers are always applied to the key that was pressed.
      if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
        if (record->event.pressed) {
          add_mods(QK_MODS_GET_MODS(keycode));
          send_keyboard_report();
          wait_ms(2);
          register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
          return false;
        } else {
          wait_ms(2);
          del_mods(QK_MODS_GET_MODS(keycode));
        }
      }
      break;

    case ST_MACRO_0:
      if (record->event.pressed) {
        SEND_STRING("nst");
      }
      break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
