#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};



#define DUAL_FUNC_0 LT(14, KC_R)
#define DUAL_FUNC_1 LT(11, KC_I)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_ESCAPE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_COLN,        
    KC_TAB,         LT(5, KC_A),    LT(3, KC_R),    MT(MOD_LCTL, KC_T),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_G),                                MT(MOD_RGUI, KC_M),MT(MOD_RALT, KC_E),MT(MOD_RCTL, KC_N),LT(2, KC_I),    KC_O,           CW_TOGG,        
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           ST_MACRO_0,     ST_MACRO_1,     KC_SLASH,       KC_DELETE,      
                                                    LT(1, KC_SPACE),OSM(MOD_LSFT),                                  LT(4, KC_BSPC), LT(1, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_GRAVE,       KC_LPRN,        KC_RPRN,        KC_COMMA,       KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_QUES,                                        KC_NO,          KC_QUOTE,       KC_DQUO,        KC_PERC,        KC_TRANSPARENT, KC_NO,          
    KC_HASH,        KC_CIRC,        KC_EXLM,        MT(MOD_LCTL, KC_EQUAL),DUAL_FUNC_0,    KC_ASTR,                                        KC_NO,          DUAL_FUNC_1,    MT(MOD_RCTL, KC_EQUAL),KC_COLN,        KC_SPACE,       KC_NO,          
    KC_TILD,        KC_LABK,        KC_MINUS,       KC_PIPE,        KC_RABK,        KC_SLASH,                                       KC_BSLS,        KC_AT,          KC_AMPR,        KC_PLUS,        KC_TRANSPARENT, KC_NO,          
                                                    KC_TRANSPARENT, KC_DOT,                                         ST_MACRO_2,     KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_PLUS,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_MINUS,                                       KC_NO,          KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_NO,          KC_PERC,        KC_1,           KC_2,           KC_3,           KC_COMMA,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_0,           KC_DOT,                                         KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          RGUI(KC_TAB),   KC_NO,          KC_NO,          RGUI(RSFT(KC_TAB)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),KC_PGDN,        KC_PAGE_UP,     LCTL(KC_TAB),   KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          RALT(KC_TAB),   KC_END,         KC_HOME,        RALT(RSFT(KC_TAB)),KC_NO,          
                                                    KC_MEH,         KC_TRANSPARENT,                                 KC_NO,          KC_TAB
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_F10,         KC_F11,         KC_F12,         KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_NO,          KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEH
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_3,     KC_NO,          KC_SYSTEM_POWER,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_BRIGHTNESS_UP,KC_BRIGHTNESS_DOWN,KC_PSCR,        KC_NO,          KC_SYSTEM_SLEEP,
    KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_SPACE):
            return TAPPING_TERM -50;
        case LT(1, KC_ENTER):
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)SS_DELAY(100)  SS_RSFT(SS_TAP(X_EQUAL))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_RCTL(SS_TAP(X_DELETE))));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_ALT);
        } else {
          unregister_code16(KC_RIGHT_ALT);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
