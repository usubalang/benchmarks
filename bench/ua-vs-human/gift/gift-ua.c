/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "gift.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void SubCells__V32 (/*inputs*/ DATATYPE S0__,DATATYPE S1__,DATATYPE S2__,DATATYPE S3__, /*outputs*/ DATATYPE S____[4]) {

  // Variables declaration
  DATATYPE _shadow_S1__1_;
  DATATYPE _shadow_S2__3_;
  DATATYPE _shadow_S3__4_;
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;

  // Instructions (body)
  _tmp1_ = AND(S0__,S2__);
  _shadow_S1__1_ = XOR(S1__,_tmp1_);
  _tmp2_ = AND(_shadow_S1__1_,S3__);
  S____[3] = XOR(S0__,_tmp2_);
  _tmp3_ = OR(S____[3],_shadow_S1__1_);
  _shadow_S2__3_ = XOR(S2__,_tmp3_);
  _shadow_S3__4_ = XOR(S3__,_shadow_S2__3_);
  S____[1] = XOR(_shadow_S1__1_,_shadow_S3__4_);
  S____[0] = NOT(_shadow_S3__4_);
  _tmp4_ = AND(S____[3],S____[1]);
  S____[2] = XOR(_shadow_S2__3_,_tmp4_);

}

void PermBits__V32 (/*inputs*/ DATATYPE S__[4], /*outputs*/ DATATYPE S____[4]) {

  // Variables declaration
  DATATYPE rowperm__V_Natnat_32_1_T__;
  DATATYPE rowperm__V_Natnat_32_1__tmp10_;
  DATATYPE rowperm__V_Natnat_32_1__tmp11_;
  DATATYPE rowperm__V_Natnat_32_1__tmp12_;
  DATATYPE rowperm__V_Natnat_32_1__tmp13_;
  DATATYPE rowperm__V_Natnat_32_1__tmp14_;
  DATATYPE rowperm__V_Natnat_32_1__tmp15_;
  DATATYPE rowperm__V_Natnat_32_1__tmp16_;
  DATATYPE rowperm__V_Natnat_32_1__tmp17_;
  DATATYPE rowperm__V_Natnat_32_1__tmp18_;
  DATATYPE rowperm__V_Natnat_32_1__tmp19_;
  DATATYPE rowperm__V_Natnat_32_1__tmp20_;
  DATATYPE rowperm__V_Natnat_32_1__tmp21_;
  DATATYPE rowperm__V_Natnat_32_1__tmp22_;
  DATATYPE rowperm__V_Natnat_32_1__tmp23_;
  DATATYPE rowperm__V_Natnat_32_1__tmp5_;
  DATATYPE rowperm__V_Natnat_32_1__tmp6_;
  DATATYPE rowperm__V_Natnat_32_1__tmp7_;
  DATATYPE rowperm__V_Natnat_32_1__tmp8_;
  DATATYPE rowperm__V_Natnat_32_1__tmp9_;
  DATATYPE rowperm__V_Natnat_32_2_T__;
  DATATYPE rowperm__V_Natnat_32_2__tmp10_;
  DATATYPE rowperm__V_Natnat_32_2__tmp11_;
  DATATYPE rowperm__V_Natnat_32_2__tmp12_;
  DATATYPE rowperm__V_Natnat_32_2__tmp13_;
  DATATYPE rowperm__V_Natnat_32_2__tmp14_;
  DATATYPE rowperm__V_Natnat_32_2__tmp15_;
  DATATYPE rowperm__V_Natnat_32_2__tmp16_;
  DATATYPE rowperm__V_Natnat_32_2__tmp17_;
  DATATYPE rowperm__V_Natnat_32_2__tmp18_;
  DATATYPE rowperm__V_Natnat_32_2__tmp19_;
  DATATYPE rowperm__V_Natnat_32_2__tmp20_;
  DATATYPE rowperm__V_Natnat_32_2__tmp21_;
  DATATYPE rowperm__V_Natnat_32_2__tmp22_;
  DATATYPE rowperm__V_Natnat_32_2__tmp23_;
  DATATYPE rowperm__V_Natnat_32_2__tmp5_;
  DATATYPE rowperm__V_Natnat_32_2__tmp6_;
  DATATYPE rowperm__V_Natnat_32_2__tmp7_;
  DATATYPE rowperm__V_Natnat_32_2__tmp8_;
  DATATYPE rowperm__V_Natnat_32_2__tmp9_;
  DATATYPE rowperm__V_Natnat_32_3_T__;
  DATATYPE rowperm__V_Natnat_32_3__tmp10_;
  DATATYPE rowperm__V_Natnat_32_3__tmp11_;
  DATATYPE rowperm__V_Natnat_32_3__tmp12_;
  DATATYPE rowperm__V_Natnat_32_3__tmp13_;
  DATATYPE rowperm__V_Natnat_32_3__tmp14_;
  DATATYPE rowperm__V_Natnat_32_3__tmp15_;
  DATATYPE rowperm__V_Natnat_32_3__tmp16_;
  DATATYPE rowperm__V_Natnat_32_3__tmp17_;
  DATATYPE rowperm__V_Natnat_32_3__tmp18_;
  DATATYPE rowperm__V_Natnat_32_3__tmp19_;
  DATATYPE rowperm__V_Natnat_32_3__tmp20_;
  DATATYPE rowperm__V_Natnat_32_3__tmp21_;
  DATATYPE rowperm__V_Natnat_32_3__tmp22_;
  DATATYPE rowperm__V_Natnat_32_3__tmp23_;
  DATATYPE rowperm__V_Natnat_32_3__tmp5_;
  DATATYPE rowperm__V_Natnat_32_3__tmp6_;
  DATATYPE rowperm__V_Natnat_32_3__tmp7_;
  DATATYPE rowperm__V_Natnat_32_3__tmp8_;
  DATATYPE rowperm__V_Natnat_32_3__tmp9_;
  DATATYPE rowperm__V_Natnat_32_4_T__;
  DATATYPE rowperm__V_Natnat_32_4__tmp10_;
  DATATYPE rowperm__V_Natnat_32_4__tmp11_;
  DATATYPE rowperm__V_Natnat_32_4__tmp12_;
  DATATYPE rowperm__V_Natnat_32_4__tmp13_;
  DATATYPE rowperm__V_Natnat_32_4__tmp14_;
  DATATYPE rowperm__V_Natnat_32_4__tmp15_;
  DATATYPE rowperm__V_Natnat_32_4__tmp16_;
  DATATYPE rowperm__V_Natnat_32_4__tmp17_;
  DATATYPE rowperm__V_Natnat_32_4__tmp18_;
  DATATYPE rowperm__V_Natnat_32_4__tmp19_;
  DATATYPE rowperm__V_Natnat_32_4__tmp20_;
  DATATYPE rowperm__V_Natnat_32_4__tmp21_;
  DATATYPE rowperm__V_Natnat_32_4__tmp22_;
  DATATYPE rowperm__V_Natnat_32_4__tmp23_;
  DATATYPE rowperm__V_Natnat_32_4__tmp5_;
  DATATYPE rowperm__V_Natnat_32_4__tmp6_;
  DATATYPE rowperm__V_Natnat_32_4__tmp7_;
  DATATYPE rowperm__V_Natnat_32_4__tmp8_;
  DATATYPE rowperm__V_Natnat_32_4__tmp9_;

  // Instructions (body)
  rowperm__V_Natnat_32_1_T__ = LIFT_32(0x0);
  for (int b__1 = 0; b__1 <= 7; b__1++) {
    rowperm__V_Natnat_32_1__tmp5_ = R_SHIFT(S__[0],((4 * b__1) + 0),32);
    rowperm__V_Natnat_32_1__tmp6_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_1__tmp10_ = R_SHIFT(S__[0],((4 * b__1) + 1),32);
    rowperm__V_Natnat_32_1__tmp11_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_1__tmp15_ = R_SHIFT(S__[0],((4 * b__1) + 2),32);
    rowperm__V_Natnat_32_1__tmp16_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_1__tmp20_ = R_SHIFT(S__[0],((4 * b__1) + 3),32);
    rowperm__V_Natnat_32_1__tmp21_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_1__tmp7_ = AND(rowperm__V_Natnat_32_1__tmp5_,rowperm__V_Natnat_32_1__tmp6_);
    rowperm__V_Natnat_32_1__tmp12_ = AND(rowperm__V_Natnat_32_1__tmp10_,rowperm__V_Natnat_32_1__tmp11_);
    rowperm__V_Natnat_32_1__tmp17_ = AND(rowperm__V_Natnat_32_1__tmp15_,rowperm__V_Natnat_32_1__tmp16_);
    rowperm__V_Natnat_32_1__tmp22_ = AND(rowperm__V_Natnat_32_1__tmp20_,rowperm__V_Natnat_32_1__tmp21_);
    rowperm__V_Natnat_32_1__tmp8_ = L_SHIFT(rowperm__V_Natnat_32_1__tmp7_,(b__1 + 0),32);
    rowperm__V_Natnat_32_1__tmp13_ = L_SHIFT(rowperm__V_Natnat_32_1__tmp12_,(b__1 + 24),32);
    rowperm__V_Natnat_32_1__tmp18_ = L_SHIFT(rowperm__V_Natnat_32_1__tmp17_,(b__1 + 16),32);
    rowperm__V_Natnat_32_1__tmp23_ = L_SHIFT(rowperm__V_Natnat_32_1__tmp22_,(b__1 + 8),32);
    rowperm__V_Natnat_32_1__tmp9_ = XOR(rowperm__V_Natnat_32_1_T__,rowperm__V_Natnat_32_1__tmp8_);
    rowperm__V_Natnat_32_1__tmp14_ = XOR(rowperm__V_Natnat_32_1__tmp9_,rowperm__V_Natnat_32_1__tmp13_);
    rowperm__V_Natnat_32_1__tmp19_ = XOR(rowperm__V_Natnat_32_1__tmp14_,rowperm__V_Natnat_32_1__tmp18_);
    rowperm__V_Natnat_32_1_T__ = XOR(rowperm__V_Natnat_32_1__tmp19_,rowperm__V_Natnat_32_1__tmp23_);
  }
  S____[0] = rowperm__V_Natnat_32_1_T__;
  rowperm__V_Natnat_32_2_T__ = LIFT_32(0x0);
  for (int b__2 = 0; b__2 <= 7; b__2++) {
    rowperm__V_Natnat_32_2__tmp5_ = R_SHIFT(S__[1],((4 * b__2) + 0),32);
    rowperm__V_Natnat_32_2__tmp6_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_2__tmp10_ = R_SHIFT(S__[1],((4 * b__2) + 1),32);
    rowperm__V_Natnat_32_2__tmp11_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_2__tmp15_ = R_SHIFT(S__[1],((4 * b__2) + 2),32);
    rowperm__V_Natnat_32_2__tmp16_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_2__tmp20_ = R_SHIFT(S__[1],((4 * b__2) + 3),32);
    rowperm__V_Natnat_32_2__tmp21_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_2__tmp7_ = AND(rowperm__V_Natnat_32_2__tmp5_,rowperm__V_Natnat_32_2__tmp6_);
    rowperm__V_Natnat_32_2__tmp12_ = AND(rowperm__V_Natnat_32_2__tmp10_,rowperm__V_Natnat_32_2__tmp11_);
    rowperm__V_Natnat_32_2__tmp17_ = AND(rowperm__V_Natnat_32_2__tmp15_,rowperm__V_Natnat_32_2__tmp16_);
    rowperm__V_Natnat_32_2__tmp22_ = AND(rowperm__V_Natnat_32_2__tmp20_,rowperm__V_Natnat_32_2__tmp21_);
    rowperm__V_Natnat_32_2__tmp8_ = L_SHIFT(rowperm__V_Natnat_32_2__tmp7_,(b__2 + 8),32);
    rowperm__V_Natnat_32_2__tmp13_ = L_SHIFT(rowperm__V_Natnat_32_2__tmp12_,(b__2 + 0),32);
    rowperm__V_Natnat_32_2__tmp18_ = L_SHIFT(rowperm__V_Natnat_32_2__tmp17_,(b__2 + 24),32);
    rowperm__V_Natnat_32_2__tmp23_ = L_SHIFT(rowperm__V_Natnat_32_2__tmp22_,(b__2 + 16),32);
    rowperm__V_Natnat_32_2__tmp9_ = XOR(rowperm__V_Natnat_32_2_T__,rowperm__V_Natnat_32_2__tmp8_);
    rowperm__V_Natnat_32_2__tmp14_ = XOR(rowperm__V_Natnat_32_2__tmp9_,rowperm__V_Natnat_32_2__tmp13_);
    rowperm__V_Natnat_32_2__tmp19_ = XOR(rowperm__V_Natnat_32_2__tmp14_,rowperm__V_Natnat_32_2__tmp18_);
    rowperm__V_Natnat_32_2_T__ = XOR(rowperm__V_Natnat_32_2__tmp19_,rowperm__V_Natnat_32_2__tmp23_);
  }
  S____[1] = rowperm__V_Natnat_32_2_T__;
  rowperm__V_Natnat_32_3_T__ = LIFT_32(0x0);
  for (int b__3 = 0; b__3 <= 7; b__3++) {
    rowperm__V_Natnat_32_3__tmp5_ = R_SHIFT(S__[2],((4 * b__3) + 0),32);
    rowperm__V_Natnat_32_3__tmp6_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_3__tmp10_ = R_SHIFT(S__[2],((4 * b__3) + 1),32);
    rowperm__V_Natnat_32_3__tmp11_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_3__tmp15_ = R_SHIFT(S__[2],((4 * b__3) + 2),32);
    rowperm__V_Natnat_32_3__tmp16_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_3__tmp20_ = R_SHIFT(S__[2],((4 * b__3) + 3),32);
    rowperm__V_Natnat_32_3__tmp21_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_3__tmp7_ = AND(rowperm__V_Natnat_32_3__tmp5_,rowperm__V_Natnat_32_3__tmp6_);
    rowperm__V_Natnat_32_3__tmp12_ = AND(rowperm__V_Natnat_32_3__tmp10_,rowperm__V_Natnat_32_3__tmp11_);
    rowperm__V_Natnat_32_3__tmp17_ = AND(rowperm__V_Natnat_32_3__tmp15_,rowperm__V_Natnat_32_3__tmp16_);
    rowperm__V_Natnat_32_3__tmp22_ = AND(rowperm__V_Natnat_32_3__tmp20_,rowperm__V_Natnat_32_3__tmp21_);
    rowperm__V_Natnat_32_3__tmp8_ = L_SHIFT(rowperm__V_Natnat_32_3__tmp7_,(b__3 + 16),32);
    rowperm__V_Natnat_32_3__tmp13_ = L_SHIFT(rowperm__V_Natnat_32_3__tmp12_,(b__3 + 8),32);
    rowperm__V_Natnat_32_3__tmp18_ = L_SHIFT(rowperm__V_Natnat_32_3__tmp17_,(b__3 + 0),32);
    rowperm__V_Natnat_32_3__tmp23_ = L_SHIFT(rowperm__V_Natnat_32_3__tmp22_,(b__3 + 24),32);
    rowperm__V_Natnat_32_3__tmp9_ = XOR(rowperm__V_Natnat_32_3_T__,rowperm__V_Natnat_32_3__tmp8_);
    rowperm__V_Natnat_32_3__tmp14_ = XOR(rowperm__V_Natnat_32_3__tmp9_,rowperm__V_Natnat_32_3__tmp13_);
    rowperm__V_Natnat_32_3__tmp19_ = XOR(rowperm__V_Natnat_32_3__tmp14_,rowperm__V_Natnat_32_3__tmp18_);
    rowperm__V_Natnat_32_3_T__ = XOR(rowperm__V_Natnat_32_3__tmp19_,rowperm__V_Natnat_32_3__tmp23_);
  }
  S____[2] = rowperm__V_Natnat_32_3_T__;
  rowperm__V_Natnat_32_4_T__ = LIFT_32(0x0);
  for (int b__4 = 0; b__4 <= 7; b__4++) {
    rowperm__V_Natnat_32_4__tmp5_ = R_SHIFT(S__[3],((4 * b__4) + 0),32);
    rowperm__V_Natnat_32_4__tmp6_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_4__tmp10_ = R_SHIFT(S__[3],((4 * b__4) + 1),32);
    rowperm__V_Natnat_32_4__tmp11_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_4__tmp15_ = R_SHIFT(S__[3],((4 * b__4) + 2),32);
    rowperm__V_Natnat_32_4__tmp16_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_4__tmp20_ = R_SHIFT(S__[3],((4 * b__4) + 3),32);
    rowperm__V_Natnat_32_4__tmp21_ = LIFT_32(0x1);
    rowperm__V_Natnat_32_4__tmp7_ = AND(rowperm__V_Natnat_32_4__tmp5_,rowperm__V_Natnat_32_4__tmp6_);
    rowperm__V_Natnat_32_4__tmp12_ = AND(rowperm__V_Natnat_32_4__tmp10_,rowperm__V_Natnat_32_4__tmp11_);
    rowperm__V_Natnat_32_4__tmp17_ = AND(rowperm__V_Natnat_32_4__tmp15_,rowperm__V_Natnat_32_4__tmp16_);
    rowperm__V_Natnat_32_4__tmp22_ = AND(rowperm__V_Natnat_32_4__tmp20_,rowperm__V_Natnat_32_4__tmp21_);
    rowperm__V_Natnat_32_4__tmp8_ = L_SHIFT(rowperm__V_Natnat_32_4__tmp7_,(b__4 + 24),32);
    rowperm__V_Natnat_32_4__tmp13_ = L_SHIFT(rowperm__V_Natnat_32_4__tmp12_,(b__4 + 16),32);
    rowperm__V_Natnat_32_4__tmp18_ = L_SHIFT(rowperm__V_Natnat_32_4__tmp17_,(b__4 + 8),32);
    rowperm__V_Natnat_32_4__tmp23_ = L_SHIFT(rowperm__V_Natnat_32_4__tmp22_,(b__4 + 0),32);
    rowperm__V_Natnat_32_4__tmp9_ = XOR(rowperm__V_Natnat_32_4_T__,rowperm__V_Natnat_32_4__tmp8_);
    rowperm__V_Natnat_32_4__tmp14_ = XOR(rowperm__V_Natnat_32_4__tmp9_,rowperm__V_Natnat_32_4__tmp13_);
    rowperm__V_Natnat_32_4__tmp19_ = XOR(rowperm__V_Natnat_32_4__tmp14_,rowperm__V_Natnat_32_4__tmp18_);
    rowperm__V_Natnat_32_4_T__ = XOR(rowperm__V_Natnat_32_4__tmp19_,rowperm__V_Natnat_32_4__tmp23_);
  }
  S____[3] = rowperm__V_Natnat_32_4_T__;

}

void KeyUpdate__V32 (/*inputs*/ DATATYPE W__[8], /*outputs*/ DATATYPE W____[8]) {

  // Variables declaration
  DATATYPE _tmp46_;
  DATATYPE _tmp47_;
  DATATYPE _tmp48_;
  DATATYPE _tmp50_;
  DATATYPE _tmp51_;
  DATATYPE _tmp52_;
  DATATYPE _tmp119_;
  DATATYPE _tmp118_;

  // Instructions (body)
  _tmp46_ = R_SHIFT(W__[6],2,32);
  _tmp47_ = L_SHIFT(W__[6],14,32);
  _tmp50_ = R_SHIFT(W__[7],12,32);
  _tmp51_ = L_SHIFT(W__[7],4,32);
  W____[7] = W__[5];
  W____[6] = W__[4];
  W____[5] = W__[3];
  W____[4] = W__[2];
  W____[3] = W__[1];
  W____[2] = W__[0];
  _tmp48_ = XOR(_tmp46_,_tmp47_);
  _tmp52_ = XOR(_tmp50_,_tmp51_);
  _tmp118_ = LIFT_32(0xffff);
  W____[0] = AND(_tmp48_,_tmp118_);
  _tmp119_ = LIFT_32(0xffff);
  W____[1] = AND(_tmp52_,_tmp119_);

}

/* main function */
void gift__ (/*inputs*/ DATATYPE P__[4],DATATYPE K__[8], /*outputs*/ DATATYPE C__[4]) {

  // Variables declaration
  DATATYPE AddRoundKey__V32_1__tmp40_;
  DATATYPE AddRoundKey__V32_1__tmp41_;
  DATATYPE AddRoundKey__V32_1__tmp42_;
  DATATYPE AddRoundKey__V32_1__tmp43_;
  DATATYPE AddRoundKey__V32_1__tmp45_;
  DATATYPE GIFT_RC__[40];
  DATATYPE W__[2][8];
  DATATYPE _tmp117_;
  DATATYPE _tmp94_[4];
  DATATYPE _tmp95_[4];
  DATATYPE round__[4];

  // Instructions (body)
  round__[0] = P__[0];
  round__[1] = P__[1];
  round__[2] = P__[2];
  round__[3] = P__[3];
  W__[0][2] = K__[2];
  W__[0][3] = K__[3];
  W__[0][6] = K__[6];
  W__[0][7] = K__[7];
  GIFT_RC__[0] = LIFT_32(0x1);
  GIFT_RC__[1] = LIFT_32(0x3);
  GIFT_RC__[2] = LIFT_32(0x7);
  GIFT_RC__[3] = LIFT_32(0xf);
  GIFT_RC__[4] = LIFT_32(0x1f);
  GIFT_RC__[5] = LIFT_32(0x3e);
  GIFT_RC__[6] = LIFT_32(0x3d);
  GIFT_RC__[7] = LIFT_32(0x3b);
  GIFT_RC__[8] = LIFT_32(0x37);
  GIFT_RC__[9] = LIFT_32(0x2f);
  GIFT_RC__[10] = LIFT_32(0x1e);
  GIFT_RC__[11] = LIFT_32(0x3c);
  GIFT_RC__[12] = LIFT_32(0x39);
  GIFT_RC__[13] = LIFT_32(0x33);
  GIFT_RC__[14] = LIFT_32(0x27);
  GIFT_RC__[15] = LIFT_32(0xe);
  GIFT_RC__[16] = LIFT_32(0x1d);
  GIFT_RC__[17] = LIFT_32(0x3a);
  GIFT_RC__[18] = LIFT_32(0x35);
  GIFT_RC__[19] = LIFT_32(0x2b);
  GIFT_RC__[20] = LIFT_32(0x16);
  GIFT_RC__[21] = LIFT_32(0x2c);
  GIFT_RC__[22] = LIFT_32(0x18);
  GIFT_RC__[23] = LIFT_32(0x30);
  GIFT_RC__[24] = LIFT_32(0x21);
  GIFT_RC__[25] = LIFT_32(0x2);
  GIFT_RC__[26] = LIFT_32(0x5);
  GIFT_RC__[27] = LIFT_32(0xb);
  GIFT_RC__[28] = LIFT_32(0x17);
  GIFT_RC__[29] = LIFT_32(0x2e);
  GIFT_RC__[30] = LIFT_32(0x1c);
  GIFT_RC__[31] = LIFT_32(0x38);
  GIFT_RC__[32] = LIFT_32(0x31);
  GIFT_RC__[33] = LIFT_32(0x23);
  GIFT_RC__[34] = LIFT_32(0x6);
  GIFT_RC__[35] = LIFT_32(0xd);
  GIFT_RC__[36] = LIFT_32(0x1b);
  GIFT_RC__[37] = LIFT_32(0x36);
  GIFT_RC__[38] = LIFT_32(0x2d);
  GIFT_RC__[39] = LIFT_32(0x1a);
  W__[0][0] = K__[0];
  W__[0][1] = K__[1];
  W__[0][4] = K__[4];
  W__[0][5] = K__[5];
  for (int i__ = 0; i__ <= 39; i__++) {
    SubCells__V32(round__[0],round__[1],round__[2],round__[3],_tmp94_);
    KeyUpdate__V32(W__[(i__ % 2)],W__[((i__ + 1) % 2)]);
    AddRoundKey__V32_1__tmp40_ = L_SHIFT(W__[(i__ % 2)][2],16,32);
    AddRoundKey__V32_1__tmp42_ = L_SHIFT(W__[(i__ % 2)][6],16,32);
    _tmp117_ = LIFT_32(0x80000000);
    PermBits__V32(_tmp94_,_tmp95_);
    AddRoundKey__V32_1__tmp41_ = XOR(AddRoundKey__V32_1__tmp40_,W__[(i__ % 2)][3]);
    AddRoundKey__V32_1__tmp43_ = XOR(AddRoundKey__V32_1__tmp42_,W__[(i__ % 2)][7]);
    AddRoundKey__V32_1__tmp45_ = XOR(_tmp95_[3],_tmp117_);
    round__[0] = _tmp95_[0];
    round__[2] = XOR(_tmp95_[2],AddRoundKey__V32_1__tmp41_);
    round__[1] = XOR(_tmp95_[1],AddRoundKey__V32_1__tmp43_);
    round__[3] = XOR(AddRoundKey__V32_1__tmp45_,GIFT_RC__[i__]);
  }
  C__[0] = round__[0];
  C__[1] = round__[1];
  C__[2] = round__[2];
  C__[3] = round__[3];

}

/* Additional functions */
uint32_t bench_speed() {
  /* Inputs */
  DATATYPE P__[4] = { 0 };
  DATATYPE K__[8] = { 0 };

  /* Preventing inputs from being optimized out */
  asm volatile("" : "+m" (P__));
  asm volatile("" : "+m" (K__));

  /* Outputs */
  DATATYPE C__[4] = { 0 };
  /* Primitive call */
  gift__(P__, K__,C__);

  printf("%08x %08x %08x %08x\n", C__[0], C__[1], C__[2], C__[3]);

  /* Preventing outputs from being optimized out */
  asm volatile("" : "+m" (C__));

  /* Returning the number of encrypted bytes */
  return 16;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node SubCells(S0 :  v1,S1 :  v1,S2 :  v1,S3 :  v1)
  returns S' :  v4
vars

let
  (S1) := (S1 ^ (S0 & S2));
  (S0) := (S0 ^ (S1 & S3));
  (S2) := (S2 ^ (S0 | S1));
  (S3) := (S3 ^ S2);
  (S1) := (S1 ^ S3);
  (S3) := (~ S3);
  (S2) := (S2 ^ (S0 & S1));
  (S') = (S3,S1,S2,S0)
tel

 node rowperm(S :  u32,B0_pos :  nat,B1_pos :  nat,B2_pos :  nat,B3_pos :  nat)
  returns S' :  u32
vars
  T :  u32[9]
let
  (T[0]) = 0x0:u32;
  forall b in [0,7] {
    (T[(b + 1)]) = ((((T[b] ^ (((S >> ((4 * b) + 0)) & 0x1:u32) << (b + (8 * B0_pos)))) ^ (((S >> ((4 * b) + 1)) & 0x1:u32) << (b + (8 * B1_pos)))) ^ (((S >> ((4 * b) + 2)) & 0x1:u32) << (b + (8 * B2_pos)))) ^ (((S >> ((4 * b) + 3)) & 0x1:u32) << (b + (8 * B3_pos))))
  };
  (S') = T[8]
tel

 node PermBits(S :  u32x4)
  returns S' :  u32x4
vars

let
  (S'[0]) = rowperm(S[0],0x0:nat,0x3:nat,0x2:nat,0x1:nat);
  (S'[1]) = rowperm(S[1],0x1:nat,0x0:nat,0x3:nat,0x2:nat);
  (S'[2]) = rowperm(S[2],0x2:nat,0x1:nat,0x0:nat,0x3:nat);
  (S'[3]) = rowperm(S[3],0x3:nat,0x2:nat,0x1:nat,0x0:nat)
tel

 node AddRoundKey(S :  u32x4,W :  u32[8],rc :  u32)
  returns S' :  u32x4
vars

let
  (S'[2]) = (S[2] ^ ((W[2] << 16) ^ W[3]));
  (S'[1]) = (S[1] ^ ((W[6] << 16) ^ W[7]));
  (S'[3]) = ((S[3] ^ 0x80000000:u32) ^ rc);
  (S'[0]) = S[0]
tel

 node KeyUpdate(W :  u32[8])
  returns W' :  u32[8]
vars

let
  (W'[0]) = (((W[6] >> 2) ^ (W[6] << 14)) & 0xffff:u32);
  (W'[1]) = (((W[7] >> 12) ^ (W[7] << 4)) & 0xffff:u32);
  (W'[7 .. 2]) = W[5 .. 0]
tel

 node gift(P :  u32x4,K : const u32[8])
  returns C :  u32x4
vars
  round :  u32x4[41],
  W :  u32[2][8],
  GIFT_RC :  u32[40]
let
  (round[0]) = P;
  (W[0]) = K;
  (GIFT_RC) = (0x1:u32,0x3:u32,0x7:u32,0xf:u32,0x1f:u32,0x3e:u32,0x3d:u32,0x3b:u32,0x37:u32,0x2f:u32,0x1e:u32,0x3c:u32,0x39:u32,0x33:u32,0x27:u32,0xe:u32,0x1d:u32,0x3a:u32,0x35:u32,0x2b:u32,0x16:u32,0x2c:u32,0x18:u32,0x30:u32,0x21:u32,0x2:u32,0x5:u32,0xb:u32,0x17:u32,0x2e:u32,0x1c:u32,0x38:u32,0x31:u32,0x23:u32,0x6:u32,0xd:u32,0x1b:u32,0x36:u32,0x2d:u32,0x1a:u32);
  forall i in [0,39] {
    (round[(i + 1)]) = AddRoundKey(PermBits(SubCells(round[i])),W[(i % 2)],GIFT_RC[i]);
    (W[((i + 1) % 2)]) = KeyUpdate(W[(i % 2)])
  };
  (C) = round[40]
tel

*/