/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_5x6(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LCTL, KC_X, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_LBRC, KC_LSFT, KC_Z, KC_A, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RBRC, KC_LCTL, KC_LGUI, KC_RGUI, KC_RCTL, KC_BSPC, KC_ENT, KC_SPC, KC_RSFT, MO(1), MO(2), MO(2), MO(1), KC_LALT, SH_MON, KC_ESC, KC_RALT),
	[1] = LAYOUT_5x6(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_VOLU, KC_TRNS, KC_UP, KC_SLSH, KC_BSLS, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_INS, KC_F12, KC_TRNS, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_TAB, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_ESC, KC_SCLN, KC_MINS, KC_EQL, KC_LPRN, KC_RPRN, KC_QUOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_5x6(S(KC_ESC), S(KC_F1), S(KC_F2), S(KC_F3), S(KC_F4), S(KC_F5), S(KC_F6), S(KC_F7), S(KC_F8), S(KC_F9), S(KC_F10), S(KC_F11), KC_TRNS, S(KC_VOLU), KC_TRNS, KC_PGUP, KC_QUES, KC_PIPE, KC_LCBR, KC_RCBR, KC_UNDS, KC_PLUS, S(KC_INS), S(KC_F12), KC_TRNS, S(KC_VOLD), KC_HOME, KC_PGDN, KC_END, S(KC_TAB), KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, RESET, KC_TRNS, S(KC_MUTE), KC_ESC, KC_COLN, KC_UNDS, KC_PLUS, KC_LPRN, KC_RPRN, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


  const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  {{5, 6}, {4, 6}, {3, 6}, {2, 6}, {1, 6}, {0, 6}},
  {{5, 7}, {4, 7}, {3, 7}, {2, 7}, {1, 7}, {0, 7}},
  {{5, 8}, {4, 8}, {3, 8}, {2, 8}, {1, 8}, {0, 8}},
  {{5, 9}, {4, 9}, {3, 9}, {2, 9}, {1, 9}, {0, 9}},
  {{5, 10}, {4, 10}, {3, 10}, {2, 10}, {1, 10}, {0, 10}},
  {{5, 11}, {4, 11}, {3, 11}, {2, 11}, {1, 11}, {0, 11}},
  {{5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
  {{5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
  {{5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
  {{5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
  {{5, 4}, {4, 4}, {3, 4}, {2, 4}, {1, 4}, {0, 4}},
  {{5, 5}, {4, 5}, {3, 5}, {2, 5}, {1, 5}, {0, 5}},
};


#ifdef BACKLIGHT_ENABLE
// Turn the PC13 LED on when we're on a function layer.  We're pretending it's
// a backlight.
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case 0:
        backlight_disable();
        break;
      case 1:
      case 2:
        backlight_enable();
        break;
    }
    return state;
}
#endif // BACKLIGHT_ENABLE
