#include QMK_KEYBOARD_H
#include "keymap_steno.h"
#define L_MAIN    0
#define L_ALT     1
#define L_SPECIAL 2
#define STENO         3
#define SPECIAL       4
#define M_MAIN      5
#define M_ALT       6
#define M_SPECIAL   7

enum custom_keycodes {
	LAYER0 = SAFE_RANGE,
	PU,
	PD,
	TS,
	SV,
	RN,
	MAC
};

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
	{{9, 3}, {8, 3}, {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
	{{9, 2}, {8, 2}, {7, 2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
	{{9, 1}, {8, 1}, {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
	{{9, 0}, {8, 0}, {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[L_MAIN]=LAYOUT_all(
			KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
			KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
			KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, 
			KC_LGUI, KC_LCTL, KC_LALT, LCTL(KC_BSPC), KC_BSPC, KC_SPC, MO(L_ALT), MO(L_SPECIAL), KC_TAB, KC_ESC),

	[L_ALT]=LAYOUT_all(
			KC_1, KC_2, KC_3, KC_PLUS, KC_MINUS, KC_TRNS, KC_GRAVE, KC_RBRC, KC_LBRC, KC_BSLASH, 
			KC_4, KC_5, KC_6, KC_ASTERISK,KC_SLASH , KC_DOLLAR, KC_SCOLON, KC_RPRN, KC_LPRN, KC_ENT, 
			MT(MOD_LSFT, KC_7), KC_8, KC_9, KC_EQUAL, KC_PERCENT, KC_AMPERSAND, KC_QUOTE, KC_RCBR, KC_LCBR, KC_ESC, 
			MT(KC_LGUI,KC_DOT), MT(MOD_LCTL,KC_0), KC_LALT, LCTL(KC_BSPC), KC_BSPC, KC_SPC, MO(L_ALT), MO(SPECIAL), KC_TRNS, KC_BSPC),
	[L_SPECIAL]=LAYOUT_all(
			KC_WAKE, KC_TRNS,KC_TRNS, RESET, PD,RN, SV, MAC,SH_TG , DF(STENO), 
			KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, 
			KC_LSFT, KC_TRNS, KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
			KC_LGUI, KC_LCTL, KC_LALT, MO(SPECIAL), KC_BSPC, KC_SPC,XXXXXXX, MO(L_SPECIAL), KC_TAB, KC_ESC),

	[ STENO] = LAYOUT_all(

			STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
			STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
			XXXXXXX, XXXXXXX, STN_A,   STN_O,   XXXXXXX, STN_E,   STN_U,   XXXXXXX, XXXXXXX, DF(0)
			),
	[SPECIAL]=LAYOUT_all(
			KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10, 
			KC_F11,KC_F12,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R, 
			XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_BTN1,KC_WH_D,KC_WH_U,KC_BTN2, 
			XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX ),

	// other side


	[M_MAIN]=LAYOUT_all(
			KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
			KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
			KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, 
			KC_LALT, KC_LCTL, KC_LGUI, LGUI(KC_BSPC), KC_BSPC, KC_SPC, MO(M_ALT), MO(M_SPECIAL), KC_TAB, KC_ESC),

	[M_ALT]=LAYOUT_all(
			KC_1, KC_2, KC_3, KC_PLUS, KC_MINUS, KC_TRNS, KC_GRAVE, KC_RBRC, KC_LBRC, KC_BSLASH, 
			KC_4, KC_5, KC_6, KC_ASTERISK,KC_SLASH , KC_DOLLAR, KC_SCOLON, KC_RPRN, KC_LPRN, KC_ENT, 
			MT(MOD_LSFT, KC_7), KC_8, KC_9, KC_EQUAL, KC_PERCENT, KC_AMPERSAND, KC_QUOTE, KC_RCBR, KC_LCBR, KC_ESC, 
			MT(KC_LALT,KC_DOT), MT(MOD_LCTL,KC_0), KC_LGUI, LGUI(KC_BSPC), KC_BSPC, KC_SPC, MO(M_ALT), MO(SPECIAL), KC_TRNS, KC_BSPC),
	[M_SPECIAL]=LAYOUT_all(
			KC_WAKE, KC_TRNS,KC_TRNS, RESET, PD,RN, SV, MAC,SH_TG , DF(STENO), 
			KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, 
			KC_LSFT, KC_TRNS, KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
			KC_LALT, KC_LCTL, KC_LGUI, MO(SPECIAL), KC_BSPC, KC_SPC,XXXXXXX, MO(M_SPECIAL), KC_TAB, KC_ESC)




};


//bool rn=true;
//bool on=true;
bool mac=false;
void keyboard_post_init_user(void) {
	//pitch =rgblight_get_sat();
	mac=rgblight_get_hue();
	//rn=rgblight_get_val();
	if (mac){
		layer_move(M_MAIN);
	}else{
		layer_move(L_MAIN);

	}
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
		if (keycode ==MAC ){

			mac=!mac;
			if (mac){
			SEND_STRING("changed to MAC");
				layer_move(M_MAIN);
			}else{
			SEND_STRING("changed to Others");
				layer_move(L_MAIN);

			}
			return false;
		}else if (keycode==SV){
			rgblight_sethsv(mac, 0,0);
			SEND_STRING("Saved!");

		}
	}
	return true;
}
