/*
 * display.h
 *
 *  Created on: Jan 29, 2022
 *      Author: Umesh
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

//#endif


#define A 11U
#define B 10U
#define C 15U
#define D 1U
#define E 9U
#define F 8U
#define G 7U
#define DP 0U


/*#define SEG_A_PIN 11U
#define SEG_B_PIN 10U
#define SEG_C_PIN 15U
#define SEG_D_PIN 1U
#define SEG_E_PIN 9U
#define SEG_F_PIN 8U
#define SEG_G_PIN 7U   //7
#define SEG_DP_PIN 0U   //0
*/
#define DIG1 13U
#define DIG2 12U
#define DIG3 14U
#define DIG4 19U

//#define SB1 21U       //3
//#define SB2 20U       //2
//#define SB3 4U
#define K_LED 18U      //5

#define dig1 (1UL<<DIG4 | 1UL<<DIG3| 1UL<<DIG2| 0UL<<DIG1)
#define dig2 (1UL<<DIG4 | 1UL<<DIG3| 0UL<<DIG2| 1UL<<DIG1)
#define dig3 (1UL<<DIG4 | 0UL<<DIG3| 1UL<<DIG2| 1UL<<DIG1)
#define dig4 (0UL<<DIG4 | 1UL<<DIG3| 1UL<<DIG2| 1UL<<DIG1)

#define ALL_LEDS ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G) | (1UL<<DP))

#define BLANK ((0UL<<A) | (0UL<<B) | (0UL<<C) | (0UL<<D) | (0UL<<E) | (0UL<<F) | (0UL<<G) | (0UL<<DP))
#define DIGIT_0 ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F))
#define DIGIT_1 ((1UL<<B) | (1UL<<C))
#define DIGIT_2 ((1UL<<A) | (1UL<<B) | (1UL<<D) | (1UL<<E) | (1UL<<G))
#define DIGIT_3 ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<G))
#define DIGIT_4 ((1UL<<B) | (1UL<<C) | (1UL<<F) | (1UL<<G))
#define DIGIT_5 ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G))
#define DIGIT_6 ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define DIGIT_7 ((1UL<<A) | (1UL<<B) | (1UL<<C))
#define DIGIT_8 ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define DIGIT_9 ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G))

#define DIGIT_0_D ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<DP))
#define DIGIT_1_D ((1UL<<B) | (1UL<<C) | (1UL<<DP))
#define DIGIT_2_D ((1UL<<A) | (1UL<<B) | (1UL<<D) | (1UL<<E) | (1UL<<G) | (1UL<<DP))
#define DIGIT_3_D ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<G) | (1UL<<DP))
#define DIGIT_4_D ((1UL<<B) | (1UL<<C) | (1UL<<F) | (1UL<<G) | (1UL<<DP))
#define DIGIT_5_D ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G) | (1UL<<DP))
#define DIGIT_6_D ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G) | (1UL<<DP))
#define DIGIT_7_D ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<DP))
#define DIGIT_8_D ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G) | (1UL<<DP))
#define DIGIT_9_D ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G) | (1UL<<DP))

#define CHAR_A ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_B ((1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_C ((1UL<<A) | (1UL<<D) | (1UL<<E) | (1UL<<F))
#define CHAR_D ((1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<G))
#define CHAR_E ((1UL<<A) | (1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_F ((1UL<<A) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_G ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F))
#define CHAR_H ((1UL<<B) | (1UL<<C) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_I ((1UL<<E) | (1UL<<F))
#define CHAR_J ((1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E))
#define CHAR_L ((1UL<<D) | (1UL<<E) | (1UL<<F))
#define CHAR_N ((1UL<<C) | (1UL<<E) | (1UL<<G))
#define CHAR_O ((1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<G))
#define CHAR_P ((1UL<<A) | (1UL<<B) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_Q ((1UL<<A) | (1UL<<B) | (1UL<<C) | (1UL<<F) | (1UL<<G))
#define CHAR_R ((1UL<<E) | (1UL<<G))
#define CHAR_S ((1UL<<A) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G))
#define CHAR_T ((1UL<<D) | (1UL<<E) | (1UL<<F) | (1UL<<G))
#define CHAR_U ((1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F))
#define CHAR_W ((1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<E) | (1UL<<F)| (1UL<<G))
#define CHAR_Y ((1UL<<B) | (1UL<<C) | (1UL<<D) | (1UL<<F) | (1UL<<G))
#define CHAR_DASH ((1UL<<G))

#endif /* DISPLAY_H_ */
