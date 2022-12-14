#include QMK_KEYBOARD_H
#include "keymap_steno.h"

    
enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    PU,
    PD,
    TS,
    SV,
    RN
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0]=LAYOUT_all(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, 
		KC_LGUI, KC_LCTL, KC_LALT, LCTL(KC_BSPC), KC_BSPC, KC_SPC, MO(1), MO(2), KC_TAB, KC_ESC),

	[1]=LAYOUT_all(
		KC_1, KC_2, KC_3, KC_PLUS, KC_MINUS, KC_TRNS, KC_GRAVE, KC_RBRC, KC_LBRC, KC_BSLASH, 
		KC_4, KC_5, KC_6, KC_ASTERISK,KC_SLASH , KC_DOLLAR, KC_SCOLON, KC_RPRN, KC_LPRN, KC_ENT, 
		MT(MOD_LSFT, KC_7), KC_8, KC_9, KC_EQUAL, KC_PERCENT, KC_AMPERSAND, KC_QUOTE, KC_RCBR, KC_LCBR, KC_ESC, 
		MT(KC_LGUI,KC_DOT), MT(MOD_LCTL,KC_0), KC_LALT, LCTL(KC_BSPC), KC_BSPC, KC_SPC, MO(1), MO(4), KC_TRNS, KC_BSPC),
	[2]=LAYOUT_all(
		KC_WAKE, KC_TRNS,KC_TRNS, EEP_RST, RGB_SAI,RGB_VAI, RGB_HUI, RGB_MOD,RGB_TOG , DF(3), 
		KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, 
		KC_LSFT, KC_TRNS, KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LGUI, KC_LCTL, KC_LALT, MO(3), KC_BSPC, KC_SPC, MO(3), MO(2), KC_TAB, KC_ESC),
	
	
	[3]=LAYOUT_all(
		KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10, 
		KC_F11,KC_F12,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R, 
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_BTN1,KC_WH_D,KC_WH_U,KC_BTN2, 
		XXXXXXX,XXXXXXX,XXXXXXX,LALT(LCTL(KC_DEL)),XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX )
	};



