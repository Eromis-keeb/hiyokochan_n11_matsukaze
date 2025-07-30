#include QMK_KEYBOARD_H
#include "quantum.h"
#include "gpio.h"
/* #include "via.h" */
/* #include "rgb_matrix.h" */





static inline uint8_t scale(uint8_t c) {
	return (uint16_t)c * rgb_matrix_config.hsv.v / 255;
}

RGB current_rgb = {255,128,192};



#define SW1_PIN GP29
#define SW2_PIN GP27
#define SW3_PIN GP28
/* #define SW4_PIN GP4 */

void keyboard_pre_init_user(void) {
	/* setPinInputHigh(SW1_PIN); */
	/* setPinInputHigh(SW2_PIN); */
	/* setPinInputHigh(SW3_PIN); */
	setPinInputLow(SW1_PIN);
	setPinInputLow(SW2_PIN);
	setPinInputLow(SW3_PIN);
	/* setPinInputLow(SW4_PIN); */


}


enum layer_number {
    _default = 0,
    _lower,
    _raise,
    _upper,
    _df_m,
    _lower_m,
    _raise_m,
    _upper_m  
    /* _lower_d, */
    /* _raise_d, */
    /* _upper_d, */
    /* _df_d, */
    /* _lower_r, */
    /* _raise_r, */
    /* _upper_r, */  
    /* _df_r */
};

enum custom_keycodes {
	LED_PINK = QK_KB_0,
	LED_GREE,
        LED_BLUE,
	LED_WHIT,
	LED_PURP,
	LED_RED,
	LED_YELL,
	LED_ORAN,
	LED_CYAN,
	LED_MAGE,
	LED_GRAY

};


#define KC_PINK LED_PINK
#define KC_GREE LED_GREE
#define KC_BLUE LED_BLUE
#define KC_WHIT LED_WHIT
#define KC_PURP LED_PURP
#define KC_RED  LED_RED
#define KC_YELL LED_YELL
#define KC_ORAN LED_ORAN
#define KC_CYAN LED_CYAN
#define KC_MAGE LED_MAGE
#define KC_GRAY LED_GRAY


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_default] = LAYOUT(
        KC_7,               KC_8,        KC_9,
        KC_4,               KC_5,        KC_6,
        ALT_T(KC_1),        KC_2,        GUI_T(KC_3),            
        CTL_T(KC_DOT),      SFT_T(KC_0),
        MO(5),              MO(5),       MO(5)
    ),

    [_lower] = LAYOUT(
        KC_P7,               KC_P8,        KC_P9,
        KC_P4,               KC_P5,        KC_P6,
        ALT_T(KC_P1),        KC_P2,        GUI_T(KC_P3),            
        CTL_T(KC_PDOT),      SFT_T(KC_P0),
        KC_ESC,              KC_TAB,       KC_ENT
 
   ),

    [_raise] = LAYOUT(
        KC_P7,               KC_P8,        KC_P9,
        KC_P4,               KC_P5,        KC_P6,
        ALT_T(KC_P1),        KC_P2,        GUI_T(KC_P3),            
        CTL_T(KC_PDOT),      SFT_T(KC_P0),
        KC_ESC,              KC_KP_EQUAL,      KC_ENT
 

   ),

    [_upper] = LAYOUT(

        KC_TRNS,     KC_TRNS,     KC_TRNS,
        KC_TRNS,     KC_TRNS,     KC_TRNS,
        KC_TRNS,     KC_TRNS,     KC_TRNS,            
        KC_TRNS,     KC_ENT,
        KC_TRNS,     TO(4),       KC_TRNS 
 
     ),

    [_df_m] = LAYOUT(
        KC_PINK,    KC_GREE,  KC_BLUE,
        KC_WHIT,    KC_PURP,  KC_RED,
        KC_YELL,    KC_ORAN,  KC_CYAN,            
        KC_GRAY,    KC_MAGE,
        RGB_TOG,    KC_NUM,   TO(0)
 
    ),
    
    [_lower_m] = LAYOUT(
        KC_1,     KC_2,     KC_3,
        KC_4,     KC_5,     KC_6,
        KC_7,     KC_8,     KC_9,            
        KC_DOT,   KC_O,
        KC_NO,    KC_NO,    KC_NO
 
    ),

    [_raise_m] = LAYOUT(
        KC_1,     KC_2,     KC_3,
        KC_4,     KC_5,     KC_6,
        KC_7,     KC_8,     KC_9,            
        KC_DOT,   KC_O,
        KC_NO,    KC_NO,    KC_NO
 
    ),

    [_upper_m] = LAYOUT(
        KC_1,     KC_2,     KC_3,
        KC_4,     KC_5,     KC_6,
        KC_7,     KC_8,     KC_9,           
        KC_DOT,   KC_O,
        KC_NO,    KC_NO,    KC_NO
 
    )

};


#if defined(ENCODER_MAP_ENABLE)

 const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
     [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(LSFT(KC_TAB),  KC_TAB),                 ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
     [1] = {ENCODER_CCW_CW(KC_BSPC, KC_DEL),            ENCODER_CCW_CW(LSFT(KC_TAB),  KC_TAB),                 ENCODER_CCW_CW(KC_LEFT, KC_RIGHT)},
     [2] = {ENCODER_CCW_CW(KC_BSPC, KC_DEL),            ENCODER_CCW_CW(KC_KP_MINUS, KC_KP_PLUS),               ENCODER_CCW_CW(KC_KP_SLASH, KC_KP_ASTERISK)},
     [3] = {ENCODER_CCW_CW(KC_TRNS, KC_TRNS),           ENCODER_CCW_CW(KC_TRNS, KC_TRNS),                      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
     [4] = {ENCODER_CCW_CW(RGB_MOD,RGB_MOD),            ENCODER_CCW_CW(RGB_VAD, RGB_VAI),                      ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
     [5] = {ENCODER_CCW_CW(C(KC_LEFT), C(KC_RGHT)),     ENCODER_CCW_CW(KC_LEFT, KC_RIGHT),                     ENCODER_CCW_CW(RCS(KC_TAB), C(KC_TAB))},
     [6] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [7] = {ENCODER_CCW_CW(KC_WH_L, KC_WH_R),           ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(LCTL(KC_KP_MINUS), LCTL(KC_KP_EQUAL))}

 };


#endif


/* void keyboard_post_init_user(void) { */
/* 	rgb_matrix_enable(); */
/* } */


//togle


/* 4layers */
/* uint8_t get_layer_state(void) { */
/*     uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 1 : 0; */
/*     uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 1 : 0; */

/* if      (sw1 && sw2) return 0; // 000 → Layer 0 */
/*     else if ( !sw1 && sw2) return 1; // 10 → Layer 1 */
/*     else if ( !sw1 &&  !sw2) return 2; // 11 → Layer 2 */
/*     else if ( sw1 &&  !sw2) return 6; // 10 → Layer 3 */
/*     else return 0; // それ以外はデフォルト（Layer 0） */	
    /* return layer; */
/* } */




/* 8layers */
uint8_t get_layer_state(void) {
    uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 0 : 1;
    uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 0 : 1;
    uint8_t sw3 = gpio_read_pin(SW3_PIN) ? 0 : 1;
    /* uint8_t sw4 = gpio_read_pin(SW4_PIN) ? 0 : 1; */

    
      // ONになっているスイッチの数をカウント
    uint8_t base_layer = sw1 + sw2 + sw3;  // 0〜3

    // SW4がONなら +4 してカラーバリエーションのレイヤーにする
    return base_layer;


		   
		    
/* if      (!sw1 && !sw2 && !sw3) return 0; // 000 → Layer 0 */
/*     else if ( sw1 && !sw2 && !sw3) return 1; // 100 → Layer 1 */
/*     else if ( sw1 &&  sw2 && !sw3) return 2; // 110 → Layer 2 */
/*     else if ( sw1 &&  sw2 &&  sw3) return 3; // 111 → Layer 3 */
/*     else if (!sw1 &&  sw2 &&  sw3) return 4; // 011 → Layer 4 */
/*     else if (!sw1 && !sw2 &&  sw3) return 5; // 001 → Layer 5 */
/*     else if (!sw1 &&  sw2 && !sw3) return 6; // 010 → Layer 6 */
/*     else if ( sw1 && !sw2 &&  sw3) return 7; // 101 → Layer 7 (未定義だった組み合わせ) */
/*     else return 0; // それ以外はデフォルト（Layer 0） */	
    /* return 0; */
}





void matrix_scan_user(void) {
static uint8_t current_layer = 255;// 初回は不正な値
    uint8_t new_layer = get_layer_state();

    // レイヤーが変わった場合のみ処理を実行
    if (new_layer != current_layer) {
        current_layer = new_layer;
        layer_move(new_layer); // レイヤーを切り替える
    }


}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     if (record->event.pressed) {
         switch (keycode) {
             case LED_PINK:
                 current_rgb = (RGB){255, 128, 192};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);


                 return false;

             case LED_GREE:
                 current_rgb = (RGB){0, 255, 0};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_BLUE:
                 current_rgb = (RGB){0, 0, 255};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_WHIT:
                 current_rgb = (RGB){255, 255, 255};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_PURP:
                 current_rgb = (RGB){128, 0, 128};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_RED:
                 current_rgb = (RGB){255, 0, 0};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_YELL:
                 current_rgb = (RGB){255, 255, 0};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_ORAN:
                 current_rgb = (RGB){255, 128, 0};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_CYAN:
                 current_rgb = (RGB){0, 255, 255};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_MAGE:
                 current_rgb = (RGB){255, 0, 255};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

             case LED_GRAY:
                 current_rgb = (RGB){128, 128, 128};

                 eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                 return false;

	 }
     }
     return true;
}



 bool rgb_matrix_indicators_user(void) {
     switch (get_highest_layer(layer_state)) {


        case _lower:
             /* for (int i = 10; i <= 13; i++) { */
                     rgb_matrix_set_color(11,RGB_BLACK);
                     rgb_matrix_set_color(12,RGB_BLACK);
                     rgb_matrix_set_color(13,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
             /* } */

             /* rgb_matrix_set_color_all(RGB_GREEN); */
             break;

        case _raise:
             /* for (int i = 10; i <= 13; i++) { */
                     /* rgb_matrix_set_color(i,RGB_BLUE); */
	             rgb_matrix_set_color(11,RGB_BLACK);
                     rgb_matrix_set_color(12,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(13,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));

             /* } */

             /* rgb_matrix_set_color_all(RGB_BLUE); */
             break;

        case _upper:
             /* for (int i = 10; i <= 13; i++) { */
                     /* rgb_matrix_set_color(i,RGB_BLUE); */
                     rgb_matrix_set_color(11,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(12,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(13,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));


             /* } */

             /* rgb_matrix_set_color_all(RGB_YELLOW); */

            break;

        case _df_m:
             /* for (int i = 10; i <= 12; i++) { */
		     /* rgb_matrix_set_color(11,RGB_BLACK); */
                     /* rgb_matrix_set_color(12,RGB_BLACK); */
                     /* rgb_matrix_set_color(13,RGB_BLACK); */
 
                     /* rgb_matrix_set_color(i,RGB_PURPLE); */
             /* } */

             /* rgb_matrix_set_color_all(RGB_PURPLE); */
             break;


        case _lower_m:

             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_ORANGE); */
             /* } */

                     rgb_matrix_set_color(11,RGB_BLACK);
                     rgb_matrix_set_color(12,RGB_BLACK);
                     rgb_matrix_set_color(13,RGB_GREEN);


             /* rgb_matrix_set_color_all(RGB_ORANGE); */

	     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
             break;


        case _raise_m:
             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_SPRINGGREEN); */
             /* } */

                     rgb_matrix_set_color(11,RGB_BLACK);
                     rgb_matrix_set_color(12,RGB_GREEN);
                     rgb_matrix_set_color(13,RGB_GREEN);


             /* rgb_matrix_set_color_all(RGB_SPRINGGREEN); */
             break;

        case _upper_m:
             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_CORAL); */
             /* } */

                     rgb_matrix_set_color(11,RGB_GREEN);
                     rgb_matrix_set_color(12,RGB_GREEN);
                     rgb_matrix_set_color(13,RGB_GREEN);


             /* rgb_matrix_set_color_all(RGB_CORAL); */
             break;

        /* default: */

	     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
        /*      rgb_matrix_set_color(1,RGB_ORANGE); */
        /*      break; */
        /* case _lower_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              rgb_matrix_set_color(11,RGB_BLACK); */
        /*              rgb_matrix_set_color(12,RGB_BLACK); */
        /*              rgb_matrix_set_color(13,RGB_GREEN); */
        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_GREEN); *1/ */
        /*      break; */

        /* case _raise_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              /1* rgb_matrix_set_color(i,RGB_BLUE); *1/ */
	             /* rgb_matrix_set_color(11,RGB_BLACK); */
        /*              rgb_matrix_set_color(12,RGB_GREEN); */
        /*              rgb_matrix_set_color(13,RGB_GREEN); */

        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_BLUE); *1/ */
        /*      break; */

        /* case _upper_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              /1* rgb_matrix_set_color(i,RGB_GREEN); *1/ */
        /*              rgb_matrix_set_color(11,RGB_GREEN); */
        /*              rgb_matrix_set_color(12,RGB_GREEN); */
        /*              rgb_matrix_set_color(13,RGB_GREEN); */


        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_YELLOW); *1/ */

        /*     break; */

        /* case _df_d: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_RED); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_PURPLE); *1/ */
        /*      break; */


        /* case _lower_r: */

        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_PINK); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_ORANGE); *1/ */

	     /* /1* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); *1/ */
        /*      break; */


        /* case _raise_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_TURQUOISE); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_SPRINGGREEN); *1/ */
        /*      break; */

        /* case _upper_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_BLUE); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_CORAL); *1/ */
        /*      break; */

        /* case _df_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_GOLD); */


        /*      /1* rgb_matrix_set_color_all(RGB_PURPLE); *1/ */
        /*      break; */

     }
	     /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
     return false;

	
     
     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
   





 }




void keyboard_post_init_user(void) {
	if(!eeconfig_is_enabled()) {
		eeconfig_init();
	}
	uint32_t packed = eeconfig_read_kb();
	current_rgb.r = (packed >> 16) & 0xFF;
	current_rgb.g = (packed >> 8) & 0xFF;
	current_rgb.b = packed & 0xFF;

}







