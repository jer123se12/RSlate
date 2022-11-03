#include QMK_KEYBOARD_H
#include "keymap_steno.h"

    
enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    PU,
    PD,
    TS,
    SV,
    RN,
    ART_A,
    ART_R,
    ART_T,
    ART_S,
    ART_E,
    ART_Y,
    ART_I,
    ART_O,
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
		MT(KC_LGUI,KC_DOT), MT(MOD_LCTL,KC_0), KC_LALT, LCTL(KC_BSPC), KC_BSPC, KC_SPC, KC_TRNS, MO(3), DF(5), KC_BSPC),
	[2]=LAYOUT_all(
		KC_WAKE, KC_TRNS,KC_TRNS, EEP_RST, RGB_SAI,RGB_VAI, RGB_HUI, RGB_MOD,RGB_TOG , DF(4), 
		KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, 
		KC_LSFT, KC_TRNS, KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LGUI, KC_LCTL, KC_LALT, MO(3), KC_BSPC, KC_SPC, MO(3), KC_TRNS, KC_TAB, KC_ESC),
	
	
	[3]=LAYOUT_all(
		KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10, 
		KC_F11,KC_F12,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R, 
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_BTN1,KC_WH_D,KC_WH_U,KC_BTN2, 
		XXXXXXX,XXXXXXX,XXXXXXX,LALT(LCTL(KC_DEL)),XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX ),
	[4] = LAYOUT_all(

			STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
			STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
			XXXXXXX, XXXXXXX, STN_A,   STN_O,   XXXXXXX, STN_E,   STN_U,   XXXXXXX, XXXXXXX, DF(0)
			),

	[5]=LAYOUT_all(
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,DF(0),	
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,ART_A, ART_R, ART_T, ART_S,
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,ART_E, ART_Y, ART_I, ART_O,
		XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX	
	)	
};
#define AMTOFCOMBO 40
char combos[AMTOFCOMBO]={
	0b00000111, 
	0b00001001, 
	0b00001100, 
	0b00000011, 
	0b11100000, 
	0b00001011, 
	0b11000000, 
	0b10110000, 
	0b01100000, 
	0b00000110, 
	0b00001010, 
	0b01010000, 
	0b00110000, 
	0b10010000, 
	0b00000101, 
	0b01110000, 
	0b00001110, 
	0b11110000, 
	0b00001111, 
	0b10000110, 
	0b10000100, 
	0b10000010, 
	0b10000001, 
	0b00100010, 
//	0b10000000, 
//	0b01000000, 
//	0b00100000, 
//	0b00010000, 
//	0b00001000, 
//	0b00000100, 
//	0b00000010, 
//	0b00000001,
	0b10001000,
	0b01001000,
	0b01111000, 
	0b00010100, 
	0b00011000,
	0b11100001, 
	0b11000001, 
	0b00010010

};
char keycode[AMTOFCOMBO]={
	'm', 
	'b', 
	'c', 
	'n', 
	'd', 
	'p', 
	'f', 
	'q', 
	'g', 
	'u', 
	'h', 
	'v', 
	'j', 
	'w', 
	'k', 
	'x', 
	'l', 
	'z', 
	' ', 
	'\'', 
	'.', 
	',', 
	'/', 
	'!', 
//	'a', 
//	'r', 
//	't', 
//	's', 
//	'e', 
//	'y', 
//	'i', 
//	'o',
	'\n',
	'\b',
	0,
	1,
	2,
	'\t',
	5,
	3
};
#define holdlength 200
char mods=0;// shift,control,win
char layer=0;
char combo=0;
bool start=false;
uint8_t keycount=0;
bool onlayer=false;
bool prestart=false;
uint16_t key_timer;
uint16_t km[][8]={
	{
		'a', 'r', 't', 's', 
		'e', 'y', 'i', 'o'
	},
	{
		0, '(', ')', '{',
		0, '[', ']', '}'
	},
	{
		'1', '2', '3', 0,
		'4', '5', '6', 0
	},
	{
		'!', '\\', ';', '`',
		0, '?', '-', '='
	}
};
void s_char(char keycode){
	if ((mods| 0b11111110)==0b11111111){register_code16(KC_LSFT); }
	if ((mods| 0b11111101)==0b11111111){register_code16(KC_LGUI); }
	if ((mods| 0b11111011)==0b11111111){register_code16(KC_LCTL); }
	if ((mods| 0b11110111)==0b11111111){register_code16(KC_LALT); }
	switch (keycode){
		case '\n':
			SEND_STRING(SS_TAP(X_ENT));
			break;
		case '\b':
			SEND_STRING(SS_TAP(X_BSPC));
			break;
		case '\t':
			SEND_STRING(SS_TAP(X_TAB));
			break;
		case 5:
			SEND_STRING(SS_TAP(X_ESC));
			break;
		case 0:
			break;
		default:
			send_char(keycode);
			break;
	}
	mods &= ~mods;
	unregister_code16(KC_LGUI); 
	unregister_code16(KC_LSFT); 
	unregister_code16(KC_LCTL); 
	unregister_code16(KC_LALT);
}
void get_char(char combo){
	
	for (int i=0;i<AMTOFCOMBO;i++){
			
		if (layer==0&&combos[i]== combo){
			// need check for shift and stuff later
			switch (keycode[i]){
				case 0:
					mods|=0b00000001;
					return;
				case 1:
					mods|=0b00000010;
					return;
				case 2:
					mods|=0b00000100;
					return;
				case 3:
					mods|=0b00001000;
					return;
				default:
					s_char(keycode[i]);	
					return;
			}
		}	
	}
	char count = 0;
	char pos = 0;
	for(int i=0;i<8;i++){if (combo & (1<<i)){count++;pos=7-i;}}	
	if (count == 1){
		if (timer_elapsed(key_timer)>=holdlength && ((combo & 0b10011001)>0)){
			switch (combo){
				case 0b10000000:
					layer=(layer==1)? 0:(layer==0?1:layer);
					break;
				case 0b00010000:
					layer=(layer==2)? 0:(layer==0?2:layer);
					break;
				case 0b00001000:
					layer=(layer==3)? 0:(layer==0?3:layer);

					break;
//				case 0b00000001:
//					layer=(layer==4)? 0:(layer==0?4:layer);
//					break;
			}
		}else{
			s_char(km[(uint8_t)layer][(uint8_t)pos]);
		}
	}

};
layer_state_t layer_state_set_user(layer_state_t state) {
    if (get_highest_layer(state)==4){
    	onlayer=true;
    
    }else{
    	onlayer=false;
	combo=0;
	start=false;
	keycount=0;
    }
	return state;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

		if (record->event.pressed){
			switch (keycode) {
				case ART_A:
					combo |= 0b10000000;
					keycount+=1;
					start=true;
					break;
				case ART_R:
					combo |= 0b01000000;
					keycount+=1;
					start=true;
					break;
				case ART_T:
					combo |= 0b00100000;
					keycount+=1;
					start=true;
					break;
				case ART_S:
					combo |= 0b00010000;
					keycount+=1;
					start=true;
					break;
				case ART_E:
					combo |= 0b00001000;
					keycount+=1;
					start=true;
					break;
				case ART_Y:
					combo |= 0b00000100;
					keycount+=1;
					start=true;
					break;
				case ART_I:
					combo |= 0b00000010;
					keycount+=1;
					start=true;
					break;
				case ART_O:
					combo |= 0b00000001;
					keycount+=1;
					start=true;
					break;
			};
			if (start != prestart && start==true){
				key_timer=timer_read();	
			}
			prestart=start;
		}else{
			if (start && keycount==1){
				get_char(combo);
				combo=0;
				start=false;
				keycount=0;
				prestart=start;
			}else if (start){
				keycount-=1;
			}
		}
	return true;
};


