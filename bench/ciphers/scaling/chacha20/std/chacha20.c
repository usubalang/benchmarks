/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/chacha20.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */
#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */


/* main function */
void Chacha20__ (/*inputs*/ DATATYPE plain__[16], /*outputs*/ DATATYPE cipher__[16]) {
  
  // Variables declaration
  DATATYPE DR___1_DR_end___1_QR___1_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_end___1_QR___1_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_end___1_QR___1_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_end___1_QR___1_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_end___1_QR___1__tmp5_[4];
  DATATYPE DR___1_DR_end___1_QR___2_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_end___1_QR___2_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_end___1_QR___2_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_end___1_QR___2_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_end___1_QR___2__tmp5_[4];
  DATATYPE DR___1_DR_end___1_QR___3_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_end___1_QR___3_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_end___1_QR___3_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_end___1_QR___3_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_end___1_QR___3__tmp5_[4];
  DATATYPE DR___1_DR_end___1_QR___4_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_end___1_QR___4_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_end___1_QR___4_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_end___1_QR___4_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_end___1_QR___4__tmp5_[4];
  DATATYPE DR___1_DR_start___1_QR___1_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_start___1_QR___1_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_start___1_QR___1_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_start___1_QR___1_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_start___1_QR___1__tmp5_[4];
  DATATYPE DR___1_DR_start___1_QR___2_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_start___1_QR___2_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_start___1_QR___2_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_start___1_QR___2_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_start___1_QR___2__tmp5_[4];
  DATATYPE DR___1_DR_start___1_QR___3_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_start___1_QR___3_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_start___1_QR___3_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_start___1_QR___3_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_start___1_QR___3__tmp5_[4];
  DATATYPE DR___1_DR_start___1_QR___4_QR_end___1__tmp3_;
  DATATYPE DR___1_DR_start___1_QR___4_QR_end___1__tmp4_;
  DATATYPE DR___1_DR_start___1_QR___4_QR_start___1__tmp1_;
  DATATYPE DR___1_DR_start___1_QR___4_QR_start___1__tmp2_;
  DATATYPE DR___1_DR_start___1_QR___4__tmp5_[4];
  DATATYPE DR___1__tmp6_[16];
  DATATYPE state__[16];

  // Instructions (body)
  state__[0] = plain__[0];
  state__[4] = plain__[4];
  state__[12] = plain__[12];
  state__[8] = plain__[8];
  state__[1] = plain__[1];
  state__[5] = plain__[5];
  state__[13] = plain__[13];
  state__[9] = plain__[9];
  state__[2] = plain__[2];
  state__[6] = plain__[6];
  state__[14] = plain__[14];
  state__[10] = plain__[10];
  state__[3] = plain__[3];
  state__[7] = plain__[7];
  state__[15] = plain__[15];
  state__[11] = plain__[11];
  for (int i = 1; i <= 10; i++) {
    DR___1_DR_start___1_QR___1__tmp5_[0] = ADD(state__[0],state__[4],32);
    DR___1_DR_start___1_QR___1_QR_start___1__tmp1_ = XOR(state__[12],DR___1_DR_start___1_QR___1__tmp5_[0]);
    DR___1_DR_start___1_QR___1__tmp5_[3] = L_ROTATE(DR___1_DR_start___1_QR___1_QR_start___1__tmp1_,16,32);
    DR___1_DR_start___1_QR___1__tmp5_[2] = ADD(state__[8],DR___1_DR_start___1_QR___1__tmp5_[3],32);
    DR___1_DR_start___1_QR___1_QR_start___1__tmp2_ = XOR(state__[4],DR___1_DR_start___1_QR___1__tmp5_[2]);
    DR___1_DR_start___1_QR___1__tmp5_[1] = L_ROTATE(DR___1_DR_start___1_QR___1_QR_start___1__tmp2_,12,32);
    DR___1__tmp6_[0] = ADD(DR___1_DR_start___1_QR___1__tmp5_[0],DR___1_DR_start___1_QR___1__tmp5_[1],32);
    DR___1_DR_start___1_QR___1_QR_end___1__tmp3_ = XOR(DR___1_DR_start___1_QR___1__tmp5_[3],DR___1__tmp6_[0]);
    DR___1__tmp6_[12] = L_ROTATE(DR___1_DR_start___1_QR___1_QR_end___1__tmp3_,8,32);
    DR___1__tmp6_[8] = ADD(DR___1_DR_start___1_QR___1__tmp5_[2],DR___1__tmp6_[12],32);
    DR___1_DR_start___1_QR___1_QR_end___1__tmp4_ = XOR(DR___1_DR_start___1_QR___1__tmp5_[1],DR___1__tmp6_[8]);
    DR___1__tmp6_[4] = L_ROTATE(DR___1_DR_start___1_QR___1_QR_end___1__tmp4_,7,32);
    DR___1_DR_start___1_QR___2__tmp5_[0] = ADD(state__[1],state__[5],32);
    DR___1_DR_start___1_QR___2_QR_start___1__tmp1_ = XOR(state__[13],DR___1_DR_start___1_QR___2__tmp5_[0]);
    DR___1_DR_start___1_QR___2__tmp5_[3] = L_ROTATE(DR___1_DR_start___1_QR___2_QR_start___1__tmp1_,16,32);
    DR___1_DR_start___1_QR___2__tmp5_[2] = ADD(state__[9],DR___1_DR_start___1_QR___2__tmp5_[3],32);
    DR___1_DR_start___1_QR___2_QR_start___1__tmp2_ = XOR(state__[5],DR___1_DR_start___1_QR___2__tmp5_[2]);
    DR___1_DR_start___1_QR___2__tmp5_[1] = L_ROTATE(DR___1_DR_start___1_QR___2_QR_start___1__tmp2_,12,32);
    DR___1__tmp6_[1] = ADD(DR___1_DR_start___1_QR___2__tmp5_[0],DR___1_DR_start___1_QR___2__tmp5_[1],32);
    DR___1_DR_start___1_QR___2_QR_end___1__tmp3_ = XOR(DR___1_DR_start___1_QR___2__tmp5_[3],DR___1__tmp6_[1]);
    DR___1__tmp6_[13] = L_ROTATE(DR___1_DR_start___1_QR___2_QR_end___1__tmp3_,8,32);
    DR___1__tmp6_[9] = ADD(DR___1_DR_start___1_QR___2__tmp5_[2],DR___1__tmp6_[13],32);
    DR___1_DR_start___1_QR___2_QR_end___1__tmp4_ = XOR(DR___1_DR_start___1_QR___2__tmp5_[1],DR___1__tmp6_[9]);
    DR___1__tmp6_[5] = L_ROTATE(DR___1_DR_start___1_QR___2_QR_end___1__tmp4_,7,32);
    DR___1_DR_start___1_QR___3__tmp5_[0] = ADD(state__[2],state__[6],32);
    DR___1_DR_start___1_QR___3_QR_start___1__tmp1_ = XOR(state__[14],DR___1_DR_start___1_QR___3__tmp5_[0]);
    DR___1_DR_start___1_QR___3__tmp5_[3] = L_ROTATE(DR___1_DR_start___1_QR___3_QR_start___1__tmp1_,16,32);
    DR___1_DR_start___1_QR___3__tmp5_[2] = ADD(state__[10],DR___1_DR_start___1_QR___3__tmp5_[3],32);
    DR___1_DR_start___1_QR___3_QR_start___1__tmp2_ = XOR(state__[6],DR___1_DR_start___1_QR___3__tmp5_[2]);
    DR___1_DR_start___1_QR___3__tmp5_[1] = L_ROTATE(DR___1_DR_start___1_QR___3_QR_start___1__tmp2_,12,32);
    DR___1__tmp6_[2] = ADD(DR___1_DR_start___1_QR___3__tmp5_[0],DR___1_DR_start___1_QR___3__tmp5_[1],32);
    DR___1_DR_start___1_QR___3_QR_end___1__tmp3_ = XOR(DR___1_DR_start___1_QR___3__tmp5_[3],DR___1__tmp6_[2]);
    DR___1__tmp6_[14] = L_ROTATE(DR___1_DR_start___1_QR___3_QR_end___1__tmp3_,8,32);
    DR___1__tmp6_[10] = ADD(DR___1_DR_start___1_QR___3__tmp5_[2],DR___1__tmp6_[14],32);
    DR___1_DR_start___1_QR___3_QR_end___1__tmp4_ = XOR(DR___1_DR_start___1_QR___3__tmp5_[1],DR___1__tmp6_[10]);
    DR___1__tmp6_[6] = L_ROTATE(DR___1_DR_start___1_QR___3_QR_end___1__tmp4_,7,32);
    DR___1_DR_start___1_QR___4__tmp5_[0] = ADD(state__[3],state__[7],32);
    DR___1_DR_start___1_QR___4_QR_start___1__tmp1_ = XOR(state__[15],DR___1_DR_start___1_QR___4__tmp5_[0]);
    DR___1_DR_start___1_QR___4__tmp5_[3] = L_ROTATE(DR___1_DR_start___1_QR___4_QR_start___1__tmp1_,16,32);
    DR___1_DR_start___1_QR___4__tmp5_[2] = ADD(state__[11],DR___1_DR_start___1_QR___4__tmp5_[3],32);
    DR___1_DR_start___1_QR___4_QR_start___1__tmp2_ = XOR(state__[7],DR___1_DR_start___1_QR___4__tmp5_[2]);
    DR___1_DR_start___1_QR___4__tmp5_[1] = L_ROTATE(DR___1_DR_start___1_QR___4_QR_start___1__tmp2_,12,32);
    DR___1__tmp6_[3] = ADD(DR___1_DR_start___1_QR___4__tmp5_[0],DR___1_DR_start___1_QR___4__tmp5_[1],32);
    DR___1_DR_start___1_QR___4_QR_end___1__tmp3_ = XOR(DR___1_DR_start___1_QR___4__tmp5_[3],DR___1__tmp6_[3]);
    DR___1__tmp6_[15] = L_ROTATE(DR___1_DR_start___1_QR___4_QR_end___1__tmp3_,8,32);
    DR___1__tmp6_[11] = ADD(DR___1_DR_start___1_QR___4__tmp5_[2],DR___1__tmp6_[15],32);
    DR___1_DR_start___1_QR___4_QR_end___1__tmp4_ = XOR(DR___1_DR_start___1_QR___4__tmp5_[1],DR___1__tmp6_[11]);
    DR___1__tmp6_[7] = L_ROTATE(DR___1_DR_start___1_QR___4_QR_end___1__tmp4_,7,32);
    DR___1_DR_end___1_QR___1__tmp5_[0] = ADD(DR___1__tmp6_[0],DR___1__tmp6_[5],32);
    DR___1_DR_end___1_QR___1_QR_start___1__tmp1_ = XOR(DR___1__tmp6_[15],DR___1_DR_end___1_QR___1__tmp5_[0]);
    DR___1_DR_end___1_QR___1__tmp5_[3] = L_ROTATE(DR___1_DR_end___1_QR___1_QR_start___1__tmp1_,16,32);
    DR___1_DR_end___1_QR___1__tmp5_[2] = ADD(DR___1__tmp6_[10],DR___1_DR_end___1_QR___1__tmp5_[3],32);
    DR___1_DR_end___1_QR___1_QR_start___1__tmp2_ = XOR(DR___1__tmp6_[5],DR___1_DR_end___1_QR___1__tmp5_[2]);
    DR___1_DR_end___1_QR___1__tmp5_[1] = L_ROTATE(DR___1_DR_end___1_QR___1_QR_start___1__tmp2_,12,32);
    state__[0] = ADD(DR___1_DR_end___1_QR___1__tmp5_[0],DR___1_DR_end___1_QR___1__tmp5_[1],32);
    DR___1_DR_end___1_QR___1_QR_end___1__tmp3_ = XOR(DR___1_DR_end___1_QR___1__tmp5_[3],state__[0]);
    state__[15] = L_ROTATE(DR___1_DR_end___1_QR___1_QR_end___1__tmp3_,8,32);
    state__[10] = ADD(DR___1_DR_end___1_QR___1__tmp5_[2],state__[15],32);
    DR___1_DR_end___1_QR___1_QR_end___1__tmp4_ = XOR(DR___1_DR_end___1_QR___1__tmp5_[1],state__[10]);
    state__[5] = L_ROTATE(DR___1_DR_end___1_QR___1_QR_end___1__tmp4_,7,32);
    DR___1_DR_end___1_QR___2__tmp5_[0] = ADD(DR___1__tmp6_[1],DR___1__tmp6_[6],32);
    DR___1_DR_end___1_QR___2_QR_start___1__tmp1_ = XOR(DR___1__tmp6_[12],DR___1_DR_end___1_QR___2__tmp5_[0]);
    DR___1_DR_end___1_QR___2__tmp5_[3] = L_ROTATE(DR___1_DR_end___1_QR___2_QR_start___1__tmp1_,16,32);
    DR___1_DR_end___1_QR___2__tmp5_[2] = ADD(DR___1__tmp6_[11],DR___1_DR_end___1_QR___2__tmp5_[3],32);
    DR___1_DR_end___1_QR___2_QR_start___1__tmp2_ = XOR(DR___1__tmp6_[6],DR___1_DR_end___1_QR___2__tmp5_[2]);
    DR___1_DR_end___1_QR___2__tmp5_[1] = L_ROTATE(DR___1_DR_end___1_QR___2_QR_start___1__tmp2_,12,32);
    state__[1] = ADD(DR___1_DR_end___1_QR___2__tmp5_[0],DR___1_DR_end___1_QR___2__tmp5_[1],32);
    DR___1_DR_end___1_QR___2_QR_end___1__tmp3_ = XOR(DR___1_DR_end___1_QR___2__tmp5_[3],state__[1]);
    state__[12] = L_ROTATE(DR___1_DR_end___1_QR___2_QR_end___1__tmp3_,8,32);
    state__[11] = ADD(DR___1_DR_end___1_QR___2__tmp5_[2],state__[12],32);
    DR___1_DR_end___1_QR___2_QR_end___1__tmp4_ = XOR(DR___1_DR_end___1_QR___2__tmp5_[1],state__[11]);
    state__[6] = L_ROTATE(DR___1_DR_end___1_QR___2_QR_end___1__tmp4_,7,32);
    DR___1_DR_end___1_QR___3__tmp5_[0] = ADD(DR___1__tmp6_[2],DR___1__tmp6_[7],32);
    DR___1_DR_end___1_QR___3_QR_start___1__tmp1_ = XOR(DR___1__tmp6_[13],DR___1_DR_end___1_QR___3__tmp5_[0]);
    DR___1_DR_end___1_QR___3__tmp5_[3] = L_ROTATE(DR___1_DR_end___1_QR___3_QR_start___1__tmp1_,16,32);
    DR___1_DR_end___1_QR___3__tmp5_[2] = ADD(DR___1__tmp6_[8],DR___1_DR_end___1_QR___3__tmp5_[3],32);
    DR___1_DR_end___1_QR___3_QR_start___1__tmp2_ = XOR(DR___1__tmp6_[7],DR___1_DR_end___1_QR___3__tmp5_[2]);
    DR___1_DR_end___1_QR___3__tmp5_[1] = L_ROTATE(DR___1_DR_end___1_QR___3_QR_start___1__tmp2_,12,32);
    state__[2] = ADD(DR___1_DR_end___1_QR___3__tmp5_[0],DR___1_DR_end___1_QR___3__tmp5_[1],32);
    DR___1_DR_end___1_QR___3_QR_end___1__tmp3_ = XOR(DR___1_DR_end___1_QR___3__tmp5_[3],state__[2]);
    state__[13] = L_ROTATE(DR___1_DR_end___1_QR___3_QR_end___1__tmp3_,8,32);
    state__[8] = ADD(DR___1_DR_end___1_QR___3__tmp5_[2],state__[13],32);
    DR___1_DR_end___1_QR___3_QR_end___1__tmp4_ = XOR(DR___1_DR_end___1_QR___3__tmp5_[1],state__[8]);
    state__[7] = L_ROTATE(DR___1_DR_end___1_QR___3_QR_end___1__tmp4_,7,32);
    DR___1_DR_end___1_QR___4__tmp5_[0] = ADD(DR___1__tmp6_[3],DR___1__tmp6_[4],32);
    DR___1_DR_end___1_QR___4_QR_start___1__tmp1_ = XOR(DR___1__tmp6_[14],DR___1_DR_end___1_QR___4__tmp5_[0]);
    DR___1_DR_end___1_QR___4__tmp5_[3] = L_ROTATE(DR___1_DR_end___1_QR___4_QR_start___1__tmp1_,16,32);
    DR___1_DR_end___1_QR___4__tmp5_[2] = ADD(DR___1__tmp6_[9],DR___1_DR_end___1_QR___4__tmp5_[3],32);
    DR___1_DR_end___1_QR___4_QR_start___1__tmp2_ = XOR(DR___1__tmp6_[4],DR___1_DR_end___1_QR___4__tmp5_[2]);
    DR___1_DR_end___1_QR___4__tmp5_[1] = L_ROTATE(DR___1_DR_end___1_QR___4_QR_start___1__tmp2_,12,32);
    state__[3] = ADD(DR___1_DR_end___1_QR___4__tmp5_[0],DR___1_DR_end___1_QR___4__tmp5_[1],32);
    DR___1_DR_end___1_QR___4_QR_end___1__tmp3_ = XOR(DR___1_DR_end___1_QR___4__tmp5_[3],state__[3]);
    state__[14] = L_ROTATE(DR___1_DR_end___1_QR___4_QR_end___1__tmp3_,8,32);
    state__[9] = ADD(DR___1_DR_end___1_QR___4__tmp5_[2],state__[14],32);
    DR___1_DR_end___1_QR___4_QR_end___1__tmp4_ = XOR(DR___1_DR_end___1_QR___4__tmp5_[1],state__[9]);
    state__[4] = L_ROTATE(DR___1_DR_end___1_QR___4_QR_end___1__tmp4_,7,32);
  }
  cipher__[0] = state__[0];
  cipher__[1] = state__[1];
  cipher__[2] = state__[2];
  cipher__[3] = state__[3];
  cipher__[4] = state__[4];
  cipher__[5] = state__[5];
  cipher__[6] = state__[6];
  cipher__[7] = state__[7];
  cipher__[8] = state__[8];
  cipher__[9] = state__[9];
  cipher__[10] = state__[10];
  cipher__[11] = state__[11];
  cipher__[12] = state__[12];
  cipher__[13] = state__[13];
  cipher__[14] = state__[14];
  cipher__[15] = state__[15];

}


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node QR_start(a :  u32x1 :: base,b :  u32x1 :: base,c :  u32x1 :: base,d :  u32x1 :: base)
  returns aR :  u32x1 :: base,bR :  u32x1 :: base,cR :  u32x1 :: base,dR :  u32x1 :: base
vars

let
  (aR) = (a + b);
  (dR) = ((d ^ aR) <<< 16);
  (cR) = (c + dR);
  (bR) = ((b ^ cR) <<< 12)
tel

 node QR_end(a :  u32x1 :: base,b :  u32x1 :: base,c :  u32x1 :: base,d :  u32x1 :: base)
  returns aR :  u32x1 :: base,bR :  u32x1 :: base,cR :  u32x1 :: base,dR :  u32x1 :: base
vars

let
  (aR) = (a + b);
  (dR) = ((d ^ aR) <<< 8);
  (cR) = (c + dR);
  (bR) = ((b ^ cR) <<< 7)
tel

 node QR(input :  u32x4 :: base)
  returns output :  u32x4 :: base
vars

let
  (output) = QR_end(QR_start(input))
tel

 node DR_start(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR[0,4,8,12]) = QR(state[0,4,8,12]);
  (stateR[1,5,9,13]) = QR(state[1,5,9,13]);
  (stateR[2,6,10,14]) = QR(state[2,6,10,14]);
  (stateR[3,7,11,15]) = QR(state[3,7,11,15])
tel

 node DR_end(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR[0,5,10,15]) = QR(state[0,5,10,15]);
  (stateR[1,6,11,12]) = QR(state[1,6,11,12]);
  (stateR[2,7,8,13]) = QR(state[2,7,8,13]);
  (stateR[3,4,9,14]) = QR(state[3,4,9,14])
tel

_no_inline node DR(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR) = DR_end(DR_start(state))
tel

 node Chacha20(plain :  u32x16 :: base)
  returns cipher :  u32x16 :: base
vars
  state :  u32x16[11] :: base
let
  (state[0]) = plain;
  _no_unroll forall i in [1,10] {
    (state[i]) = DR(state[(i - 1)])
  };
  (cipher) = state[10]
tel

*/
 