#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_DELETE,                                      KC_DELETE,      KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_BSPACE,                                      KC_BSPACE,      KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_TRANSPARENT,
    LCTL_T(KC_ESCAPE),KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_QUES,
    KC_LSHIFT,      KC_SCOLON,      KC_Q,           KC_J,           KC_K,           KC_X,           KC_ENTER,                                       KC_ENTER,       KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_BSLASH,
    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        MO(2),                                                                                                          KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,
                                                                                                    KC_SLASH,       KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, MO(4),
                                                                                    KC_SPACE,       KC_LGUI,        MO(1),          KC_TRANSPARENT, KC_RGUI,        KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_KP_0,        KC_DOT,         KC_NO,          KC_NO,
                                                                                                    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_LBRACKET,    KC_LCBR,        KC_RCBR,        KC_RBRACKET,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          HSV_172_255_255,HSV_86_255_128, HSV_27_255_255, HSV_215_255_128,HSV_0_255_255,                                                                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    RGB_HUD,        RGB_HUI,        RGB_VAI,        RGB_VAD,
                                                                                                                    KC_NO,          KC_TRANSPARENT,
                                                                                    RGB_TOG,        RGB_SLD,        KC_NO,          KC_NO,          RGB_MOD,        KC_NO
  ),
};


bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(172,255,255);
        #endif
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(86,255,128);
        #endif
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(27,255,255);
        #endif
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(215,255,128);
        #endif
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(0,255,255);
        #endif
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
