/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "ace.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 128
#endif
/* including the architecture specific .h */
#include "SSE.h"

/* auxiliary functions */


/* main function */
void ACE__ (/*inputs*/ DATATYPE input__[5][2], /*outputs*/ DATATYPE output__[5][2]) {

  // Variables declaration
  DATATYPE ACE_step__V32_1__tmp127_;
  DATATYPE ACE_step__V32_1__tmp128_;
  DATATYPE ACE_step__V32_1__tmp129_;
  DATATYPE ACE_step__V32_1__tmp13_[2];
  DATATYPE ACE_step__V32_1__tmp15_;
  DATATYPE ACE_step__V32_1__tmp18_[2];
  DATATYPE ACE_step__V32_1__tmp20_;
  DATATYPE ACE_step__V32_1__tmp23_[2];
  DATATYPE ACE_step__V32_1__tmp25_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp10_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp11_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp12_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp5_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp6_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp7_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp8_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1__tmp9_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp1_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp2_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp3_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp4_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_1_round__[9][2];
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp10_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp11_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp12_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp5_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp6_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp7_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp8_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2__tmp9_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp1_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp2_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp3_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp4_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_2_round__[9][2];
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp10_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp11_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp12_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp5_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp6_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp7_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp8_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3__tmp9_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp1_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp2_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp3_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp4_;
  DATATYPE ACE_step__V32_1_simeck_box__V32_3_round__[9][2];
  DATATYPE RC__[3][16];
  DATATYPE SC__[3][16];
  DATATYPE state__[5][2];

  // Instructions (body)
  state__[0][0] = input__[0][0];
  state__[0][1] = input__[0][1];
  RC__[0][0] = LIFT_32(0x7);
  RC__[0][1] = LIFT_32(0xa);
  RC__[0][2] = LIFT_32(0x9b);
  RC__[0][3] = LIFT_32(0xe0);
  RC__[0][4] = LIFT_32(0xd1);
  RC__[0][5] = LIFT_32(0x1a);
  RC__[0][6] = LIFT_32(0x22);
  RC__[0][7] = LIFT_32(0xf7);
  RC__[0][8] = LIFT_32(0x62);
  RC__[0][9] = LIFT_32(0x96);
  RC__[0][10] = LIFT_32(0x71);
  RC__[0][11] = LIFT_32(0xaa);
  RC__[0][12] = LIFT_32(0x2b);
  RC__[0][13] = LIFT_32(0xe9);
  RC__[0][14] = LIFT_32(0xcf);
  RC__[0][15] = LIFT_32(0xb7);
  state__[2][0] = input__[2][0];
  state__[2][1] = input__[2][1];
  RC__[1][0] = LIFT_32(0x53);
  RC__[1][1] = LIFT_32(0x5d);
  RC__[1][2] = LIFT_32(0x49);
  RC__[1][3] = LIFT_32(0x7f);
  RC__[1][4] = LIFT_32(0xbe);
  RC__[1][5] = LIFT_32(0x1d);
  RC__[1][6] = LIFT_32(0x28);
  RC__[1][7] = LIFT_32(0x6c);
  RC__[1][8] = LIFT_32(0x82);
  RC__[1][9] = LIFT_32(0x47);
  RC__[1][10] = LIFT_32(0x6b);
  RC__[1][11] = LIFT_32(0x88);
  RC__[1][12] = LIFT_32(0xdc);
  RC__[1][13] = LIFT_32(0x8b);
  RC__[1][14] = LIFT_32(0x59);
  RC__[1][15] = LIFT_32(0xc6);
  state__[4][0] = input__[4][0];
  state__[4][1] = input__[4][1];
  RC__[2][0] = LIFT_32(0x43);
  RC__[2][1] = LIFT_32(0xe4);
  RC__[2][2] = LIFT_32(0x5e);
  RC__[2][3] = LIFT_32(0xcc);
  RC__[2][4] = LIFT_32(0x32);
  RC__[2][5] = LIFT_32(0x4e);
  RC__[2][6] = LIFT_32(0x75);
  RC__[2][7] = LIFT_32(0x25);
  RC__[2][8] = LIFT_32(0xfd);
  RC__[2][9] = LIFT_32(0xf9);
  RC__[2][10] = LIFT_32(0x76);
  RC__[2][11] = LIFT_32(0xa0);
  RC__[2][12] = LIFT_32(0xb0);
  RC__[2][13] = LIFT_32(0x9);
  RC__[2][14] = LIFT_32(0x1e);
  RC__[2][15] = LIFT_32(0xad);
  state__[1][0] = input__[1][0];
  state__[1][1] = input__[1][1];
  SC__[0][0] = LIFT_32(0x50);
  SC__[0][1] = LIFT_32(0x5c);
  SC__[0][2] = LIFT_32(0x91);
  SC__[0][3] = LIFT_32(0x8d);
  SC__[0][4] = LIFT_32(0x53);
  SC__[0][5] = LIFT_32(0x60);
  SC__[0][6] = LIFT_32(0x68);
  SC__[0][7] = LIFT_32(0xe1);
  SC__[0][8] = LIFT_32(0xf6);
  SC__[0][9] = LIFT_32(0x9d);
  SC__[0][10] = LIFT_32(0x40);
  SC__[0][11] = LIFT_32(0x4f);
  SC__[0][12] = LIFT_32(0xbe);
  SC__[0][13] = LIFT_32(0x5b);
  SC__[0][14] = LIFT_32(0xe9);
  SC__[0][15] = LIFT_32(0x7f);
  state__[3][0] = input__[3][0];
  state__[3][1] = input__[3][1];
  SC__[1][0] = LIFT_32(0x28);
  SC__[1][1] = LIFT_32(0xae);
  SC__[1][2] = LIFT_32(0x48);
  SC__[1][3] = LIFT_32(0xc6);
  SC__[1][4] = LIFT_32(0xa9);
  SC__[1][5] = LIFT_32(0x30);
  SC__[1][6] = LIFT_32(0x34);
  SC__[1][7] = LIFT_32(0x70);
  SC__[1][8] = LIFT_32(0x7b);
  SC__[1][9] = LIFT_32(0xce);
  SC__[1][10] = LIFT_32(0x20);
  SC__[1][11] = LIFT_32(0x27);
  SC__[1][12] = LIFT_32(0x5f);
  SC__[1][13] = LIFT_32(0xad);
  SC__[1][14] = LIFT_32(0x74);
  SC__[1][15] = LIFT_32(0x3f);
  SC__[2][0] = LIFT_32(0x14);
  SC__[2][1] = LIFT_32(0x57);
  SC__[2][2] = LIFT_32(0x24);
  SC__[2][3] = LIFT_32(0x63);
  SC__[2][4] = LIFT_32(0x54);
  SC__[2][5] = LIFT_32(0x18);
  SC__[2][6] = LIFT_32(0x9a);
  SC__[2][7] = LIFT_32(0x38);
  SC__[2][8] = LIFT_32(0xbd);
  SC__[2][9] = LIFT_32(0x67);
  SC__[2][10] = LIFT_32(0x10);
  SC__[2][11] = LIFT_32(0x13);
  SC__[2][12] = LIFT_32(0x2f);
  SC__[2][13] = LIFT_32(0xd6);
  SC__[2][14] = LIFT_32(0xba);
  SC__[2][15] = LIFT_32(0x1f);
  for (int i__ = 0; i__ <= 15; i__++) {
    ACE_step__V32_1_simeck_box__V32_1_round__[0][0] = state__[0][0];
    ACE_step__V32_1_simeck_box__V32_1_round__[0][1] = state__[0][1];
    for (int i__14 = 0; i__14 <= 7; i__14++) {
      ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp2_ = ACE_step__V32_1_simeck_box__V32_1_round__[i__14][0];
      ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp1_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_1_round__[i__14][0],5,32);
      ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp4_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_1_round__[i__14][0],1,32);
      ACE_step__V32_1_simeck_box__V32_1__tmp7_ = LIFT_32(0xfffffffe);
      ACE_step__V32_1_simeck_box__V32_1__tmp9_ = R_SHIFT(RC__[0][i__],i__14,32);
      ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp3_ = AND(ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp1_,ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp2_);
      ACE_step__V32_1_simeck_box__V32_1__tmp10_ = LIFT_32(0x1);
      ACE_step__V32_1_simeck_box__V32_1_round__[(i__14 + 1)][1] = ACE_step__V32_1_simeck_box__V32_1_round__[i__14][0];
      ACE_step__V32_1_simeck_box__V32_1__tmp5_ = XOR(ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp3_,ACE_step__V32_1_simeck_box__V32_1_f__V32_1__tmp4_);
      ACE_step__V32_1_simeck_box__V32_1__tmp11_ = AND(ACE_step__V32_1_simeck_box__V32_1__tmp9_,ACE_step__V32_1_simeck_box__V32_1__tmp10_);
      ACE_step__V32_1_simeck_box__V32_1__tmp6_ = XOR(ACE_step__V32_1_simeck_box__V32_1__tmp5_,ACE_step__V32_1_simeck_box__V32_1_round__[i__14][1]);
      ACE_step__V32_1_simeck_box__V32_1__tmp8_ = XOR(ACE_step__V32_1_simeck_box__V32_1__tmp6_,ACE_step__V32_1_simeck_box__V32_1__tmp7_);
      ACE_step__V32_1_simeck_box__V32_1__tmp12_ = XOR(ACE_step__V32_1_simeck_box__V32_1__tmp8_,ACE_step__V32_1_simeck_box__V32_1__tmp11_);
      ACE_step__V32_1_simeck_box__V32_1_round__[(i__14 + 1)][0] = ACE_step__V32_1_simeck_box__V32_1__tmp12_;
    }
    ACE_step__V32_1_simeck_box__V32_2_round__[0][0] = state__[2][0];
    ACE_step__V32_1_simeck_box__V32_2_round__[0][1] = state__[2][1];
    for (int i__25 = 0; i__25 <= 7; i__25++) {
      ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp2_ = ACE_step__V32_1_simeck_box__V32_2_round__[i__25][0];
      ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp1_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_2_round__[i__25][0],5,32);
      ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp4_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_2_round__[i__25][0],1,32);
      ACE_step__V32_1_simeck_box__V32_2__tmp7_ = LIFT_32(0xfffffffe);
      ACE_step__V32_1_simeck_box__V32_2__tmp9_ = R_SHIFT(RC__[1][i__],i__25,32);
      ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp3_ = AND(ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp1_,ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp2_);
      ACE_step__V32_1_simeck_box__V32_2__tmp10_ = LIFT_32(0x1);
      ACE_step__V32_1_simeck_box__V32_2_round__[(i__25 + 1)][1] = ACE_step__V32_1_simeck_box__V32_2_round__[i__25][0];
      ACE_step__V32_1_simeck_box__V32_2__tmp5_ = XOR(ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp3_,ACE_step__V32_1_simeck_box__V32_2_f__V32_1__tmp4_);
      ACE_step__V32_1_simeck_box__V32_2__tmp11_ = AND(ACE_step__V32_1_simeck_box__V32_2__tmp9_,ACE_step__V32_1_simeck_box__V32_2__tmp10_);
      ACE_step__V32_1_simeck_box__V32_2__tmp6_ = XOR(ACE_step__V32_1_simeck_box__V32_2__tmp5_,ACE_step__V32_1_simeck_box__V32_2_round__[i__25][1]);
      ACE_step__V32_1_simeck_box__V32_2__tmp8_ = XOR(ACE_step__V32_1_simeck_box__V32_2__tmp6_,ACE_step__V32_1_simeck_box__V32_2__tmp7_);
      ACE_step__V32_1_simeck_box__V32_2__tmp12_ = XOR(ACE_step__V32_1_simeck_box__V32_2__tmp8_,ACE_step__V32_1_simeck_box__V32_2__tmp11_);
      ACE_step__V32_1_simeck_box__V32_2_round__[(i__25 + 1)][0] = ACE_step__V32_1_simeck_box__V32_2__tmp12_;
    }
    ACE_step__V32_1_simeck_box__V32_3_round__[0][0] = state__[4][0];
    ACE_step__V32_1_simeck_box__V32_3_round__[0][1] = state__[4][1];
    for (int i__36 = 0; i__36 <= 7; i__36++) {
      ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp2_ = ACE_step__V32_1_simeck_box__V32_3_round__[i__36][0];
      ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp1_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_3_round__[i__36][0],5,32);
      ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp4_ = L_ROTATE(ACE_step__V32_1_simeck_box__V32_3_round__[i__36][0],1,32);
      ACE_step__V32_1_simeck_box__V32_3__tmp7_ = LIFT_32(0xfffffffe);
      ACE_step__V32_1_simeck_box__V32_3__tmp9_ = R_SHIFT(RC__[2][i__],i__36,32);
      ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp3_ = AND(ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp1_,ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp2_);
      ACE_step__V32_1_simeck_box__V32_3__tmp10_ = LIFT_32(0x1);
      ACE_step__V32_1_simeck_box__V32_3_round__[(i__36 + 1)][1] = ACE_step__V32_1_simeck_box__V32_3_round__[i__36][0];
      ACE_step__V32_1_simeck_box__V32_3__tmp5_ = XOR(ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp3_,ACE_step__V32_1_simeck_box__V32_3_f__V32_1__tmp4_);
      ACE_step__V32_1_simeck_box__V32_3__tmp11_ = AND(ACE_step__V32_1_simeck_box__V32_3__tmp9_,ACE_step__V32_1_simeck_box__V32_3__tmp10_);
      ACE_step__V32_1_simeck_box__V32_3__tmp6_ = XOR(ACE_step__V32_1_simeck_box__V32_3__tmp5_,ACE_step__V32_1_simeck_box__V32_3_round__[i__36][1]);
      ACE_step__V32_1_simeck_box__V32_3__tmp8_ = XOR(ACE_step__V32_1_simeck_box__V32_3__tmp6_,ACE_step__V32_1_simeck_box__V32_3__tmp7_);
      ACE_step__V32_1_simeck_box__V32_3__tmp12_ = XOR(ACE_step__V32_1_simeck_box__V32_3__tmp8_,ACE_step__V32_1_simeck_box__V32_3__tmp11_);
      ACE_step__V32_1_simeck_box__V32_3_round__[(i__36 + 1)][0] = ACE_step__V32_1_simeck_box__V32_3__tmp12_;
    }
    ACE_step__V32_1__tmp13_[0] = XOR(state__[1][0],ACE_step__V32_1_simeck_box__V32_2_round__[8][0]);
    ACE_step__V32_1__tmp13_[1] = XOR(state__[1][1],ACE_step__V32_1_simeck_box__V32_2_round__[8][1]);
    ACE_step__V32_1__tmp127_ = LIFT_32(0xffffff00);
    ACE_step__V32_1__tmp18_[0] = XOR(state__[3][0],ACE_step__V32_1_simeck_box__V32_3_round__[8][0]);
    state__[4][0] = NOT(ACE_step__V32_1__tmp13_[0]);
    ACE_step__V32_1__tmp15_ = XOR(ACE_step__V32_1__tmp13_[1],SC__[0][i__]);
    ACE_step__V32_1__tmp18_[1] = XOR(state__[3][1],ACE_step__V32_1_simeck_box__V32_3_round__[8][1]);
    state__[0][0] = NOT(ACE_step__V32_1__tmp18_[0]);
    ACE_step__V32_1__tmp128_ = LIFT_32(0xffffff00);
    state__[4][1] = XOR(ACE_step__V32_1__tmp15_,ACE_step__V32_1__tmp127_);
    ACE_step__V32_1__tmp20_ = XOR(ACE_step__V32_1__tmp18_[1],SC__[1][i__]);
    ACE_step__V32_1__tmp23_[0] = XOR(ACE_step__V32_1_simeck_box__V32_3_round__[8][0],ACE_step__V32_1_simeck_box__V32_1_round__[8][0]);
    ACE_step__V32_1__tmp23_[1] = XOR(ACE_step__V32_1_simeck_box__V32_3_round__[8][1],ACE_step__V32_1_simeck_box__V32_1_round__[8][1]);
    ACE_step__V32_1__tmp129_ = LIFT_32(0xffffff00);
    state__[0][1] = XOR(ACE_step__V32_1__tmp20_,ACE_step__V32_1__tmp128_);
    state__[3][0] = NOT(ACE_step__V32_1__tmp23_[0]);
    ACE_step__V32_1__tmp25_ = XOR(ACE_step__V32_1__tmp23_[1],SC__[2][i__]);
    state__[1][0] = ACE_step__V32_1_simeck_box__V32_2_round__[8][0];
    state__[1][1] = ACE_step__V32_1_simeck_box__V32_2_round__[8][1];
    state__[2][0] = ACE_step__V32_1_simeck_box__V32_1_round__[8][0];
    state__[3][1] = XOR(ACE_step__V32_1__tmp25_,ACE_step__V32_1__tmp129_);
    state__[2][1] = ACE_step__V32_1_simeck_box__V32_1_round__[8][1];
  }
  output__[0][0] = state__[0][0];
  output__[0][1] = state__[0][1];
  output__[1][0] = state__[1][0];
  output__[1][1] = state__[1][1];
  output__[2][0] = state__[2][0];
  output__[2][1] = state__[2][1];
  output__[3][0] = state__[3][0];
  output__[3][1] = state__[3][1];
  output__[4][0] = state__[4][0];
  output__[4][1] = state__[4][1];

}

/* Additional functions */
uint32_t bench_speed() {
  /* Inputs */
  DATATYPE input__[5][2] = { 0 };

  /* Preventing inputs from being optimized out */
  asm volatile("" : "+m" (input__));

  /* Outputs */
  DATATYPE output__[5][2] = { 0 };
  /* Primitive call */
  ACE__(input__,output__);

  /* Preventing outputs from being optimized out */
  asm volatile("" : "+m" (output__));

  /* Returning the number of encrypted bytes */
  return 160;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node f(x :  u32)
  returns y :  u32
vars

let
  (y) = (((x <<< 5) & refresh(x)) ^ (x <<< 1))
tel

 node simeck_box(input :  u32x2,rc :  u32)
  returns output :  u32x2
vars
  round :  u32x2[9]
let
  (round[0]) = input;
  forall i in [0,7] {
    (round[(i + 1)]) = ((((f(round[i][0]) ^ round[i][1]) ^ 0xfffffffe:u32) ^ ((rc >> i) & 0x1:u32)),round[i][0])
  };
  (output) = round[8]
tel

 node ACE_step(A :  u32x2,B :  u32x2,C :  u32x2,D :  u32x2,E :  u32x2,RC :  u32[3],SC :  u32[3])
  returns Ar :  u32x2,Br :  u32x2,Cr :  u32x2,Dr :  u32x2,Er :  u32x2
vars

let
  (A) := simeck_box(A,RC[0]);
  (C) := simeck_box(C,RC[1]);
  (E) := simeck_box(E,RC[2]);
  (B) := (((B ^ C) ^ (0x0:u32,SC[0])) ^ (0xffffffff:u32,0xffffff00:u32));
  (D) := (((D ^ E) ^ (0x0:u32,SC[1])) ^ (0xffffffff:u32,0xffffff00:u32));
  (E) := (((E ^ A) ^ (0x0:u32,SC[2])) ^ (0xffffffff:u32,0xffffff00:u32));
  (Ar,Br,Cr,Dr,Er) = (D,C,A,E,B)
tel

 node ACE(input :  u32x2[5])
  returns output :  u32x2[5]
vars
  SC :  u32[3][16],
  RC :  u32[3][16],
  state :  u32x2[17][5]
let
  (SC) = (0x50:u32,0x5c:u32,0x91:u32,0x8d:u32,0x53:u32,0x60:u32,0x68:u32,0xe1:u32,0xf6:u32,0x9d:u32,0x40:u32,0x4f:u32,0xbe:u32,0x5b:u32,0xe9:u32,0x7f:u32,0x28:u32,0xae:u32,0x48:u32,0xc6:u32,0xa9:u32,0x30:u32,0x34:u32,0x70:u32,0x7b:u32,0xce:u32,0x20:u32,0x27:u32,0x5f:u32,0xad:u32,0x74:u32,0x3f:u32,0x14:u32,0x57:u32,0x24:u32,0x63:u32,0x54:u32,0x18:u32,0x9a:u32,0x38:u32,0xbd:u32,0x67:u32,0x10:u32,0x13:u32,0x2f:u32,0xd6:u32,0xba:u32,0x1f:u32);
  (RC) = (0x7:u32,0xa:u32,0x9b:u32,0xe0:u32,0xd1:u32,0x1a:u32,0x22:u32,0xf7:u32,0x62:u32,0x96:u32,0x71:u32,0xaa:u32,0x2b:u32,0xe9:u32,0xcf:u32,0xb7:u32,0x53:u32,0x5d:u32,0x49:u32,0x7f:u32,0xbe:u32,0x1d:u32,0x28:u32,0x6c:u32,0x82:u32,0x47:u32,0x6b:u32,0x88:u32,0xdc:u32,0x8b:u32,0x59:u32,0xc6:u32,0x43:u32,0xe4:u32,0x5e:u32,0xcc:u32,0x32:u32,0x4e:u32,0x75:u32,0x25:u32,0xfd:u32,0xf9:u32,0x76:u32,0xa0:u32,0xb0:u32,0x9:u32,0x1e:u32,0xad:u32);
  (state[0]) = input;
  forall i in [0,15] {
    (state[(i + 1)]) = ACE_step(state[i],RC[0,1,2][i],SC[0,1,2][i])
  };
  (output) = state[16]
tel

*/
 