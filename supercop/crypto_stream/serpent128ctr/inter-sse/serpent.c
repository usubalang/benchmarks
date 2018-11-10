
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

/* Do NOT change the order of those define/include */

#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "SSE.h"



/* auxiliary functions */
void sbox__0__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r3 = XOR(r3,r0);
  r4 = r1;
  r1 = AND(r1,r3);
  r4 = XOR(r4,r2);
  r1 = XOR(r1,r0);
  r0 = OR(r0,r3);
  r0 = XOR(r0,r4);
  r4 = XOR(r4,r3);
  r3 = XOR(r3,r2);
  r2 = OR(r2,r1);
  r2 = XOR(r2,r4);
  r4 = NOT(r4);
  r4 = OR(r4,r1);
  r1 = XOR(r1,r3);
  r1 = XOR(r1,r4);
  r3 = OR(r3,r0);
  r1 = XOR(r1,r3);
  r4 = XOR(r4,r3);
  *r5 = r1;
  *r6 = r4;
  *r7 = r2;
  *r8 = r0;
  r3__2 = XOR(r3__2,r0__2);
  r4__2 = r1__2;
  r1__2 = AND(r1__2,r3__2);
  r4__2 = XOR(r4__2,r2__2);
  r1__2 = XOR(r1__2,r0__2);
  r0__2 = OR(r0__2,r3__2);
  r0__2 = XOR(r0__2,r4__2);
  r4__2 = XOR(r4__2,r3__2);
  r3__2 = XOR(r3__2,r2__2);
  r2__2 = OR(r2__2,r1__2);
  r2__2 = XOR(r2__2,r4__2);
  r4__2 = NOT(r4__2);
  r4__2 = OR(r4__2,r1__2);
  r1__2 = XOR(r1__2,r3__2);
  r1__2 = XOR(r1__2,r4__2);
  r3__2 = OR(r3__2,r0__2);
  r1__2 = XOR(r1__2,r3__2);
  r4__2 = XOR(r4__2,r3__2);
  *r5__2 = r1__2;
  *r6__2 = r4__2;
  *r7__2 = r2__2;
  *r8__2 = r0__2;

}

void sbox__1__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r0 = NOT(r0);
  r2 = NOT(r2);
  r4 = r0;
  r0 = AND(r0,r1);
  r2 = XOR(r2,r0);
  r0 = OR(r0,r3);
  r3 = XOR(r3,r2);
  r1 = XOR(r1,r0);
  r0 = XOR(r0,r4);
  r4 = OR(r4,r1);
  r1 = XOR(r1,r3);
  r2 = OR(r2,r0);
  r2 = AND(r2,r4);
  r0 = XOR(r0,r1);
  r1 = AND(r1,r2);
  r1 = XOR(r1,r0);
  r0 = AND(r0,r2);
  r0 = XOR(r0,r4);
  *r5 = r2;
  *r6 = r0;
  *r7 = r3;
  *r8 = r1;
  r0__2 = NOT(r0__2);
  r2__2 = NOT(r2__2);
  r4__2 = r0__2;
  r0__2 = AND(r0__2,r1__2);
  r2__2 = XOR(r2__2,r0__2);
  r0__2 = OR(r0__2,r3__2);
  r3__2 = XOR(r3__2,r2__2);
  r1__2 = XOR(r1__2,r0__2);
  r0__2 = XOR(r0__2,r4__2);
  r4__2 = OR(r4__2,r1__2);
  r1__2 = XOR(r1__2,r3__2);
  r2__2 = OR(r2__2,r0__2);
  r2__2 = AND(r2__2,r4__2);
  r0__2 = XOR(r0__2,r1__2);
  r1__2 = AND(r1__2,r2__2);
  r1__2 = XOR(r1__2,r0__2);
  r0__2 = AND(r0__2,r2__2);
  r0__2 = XOR(r0__2,r4__2);
  *r5__2 = r2__2;
  *r6__2 = r0__2;
  *r7__2 = r3__2;
  *r8__2 = r1__2;

}

void sbox__2__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r4 = r0;
  r0 = AND(r0,r2);
  r0 = XOR(r0,r3);
  r2 = XOR(r2,r1);
  r2 = XOR(r2,r0);
  r3 = OR(r3,r4);
  r3 = XOR(r3,r1);
  r4 = XOR(r4,r2);
  r1 = r3;
  r3 = OR(r3,r4);
  r3 = XOR(r3,r0);
  r0 = AND(r0,r1);
  r4 = XOR(r4,r0);
  r1 = XOR(r1,r3);
  r1 = XOR(r1,r4);
  r4 = NOT(r4);
  *r5 = r2;
  *r6 = r3;
  *r7 = r1;
  *r8 = r4;
  r4__2 = r0__2;
  r0__2 = AND(r0__2,r2__2);
  r0__2 = XOR(r0__2,r3__2);
  r2__2 = XOR(r2__2,r1__2);
  r2__2 = XOR(r2__2,r0__2);
  r3__2 = OR(r3__2,r4__2);
  r3__2 = XOR(r3__2,r1__2);
  r4__2 = XOR(r4__2,r2__2);
  r1__2 = r3__2;
  r3__2 = OR(r3__2,r4__2);
  r3__2 = XOR(r3__2,r0__2);
  r0__2 = AND(r0__2,r1__2);
  r4__2 = XOR(r4__2,r0__2);
  r1__2 = XOR(r1__2,r3__2);
  r1__2 = XOR(r1__2,r4__2);
  r4__2 = NOT(r4__2);
  *r5__2 = r2__2;
  *r6__2 = r3__2;
  *r7__2 = r1__2;
  *r8__2 = r4__2;

}

void sbox__3__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r4 = r0;
  r0 = OR(r0,r3);
  r3 = XOR(r3,r1);
  r1 = AND(r1,r4);
  r4 = XOR(r4,r2);
  r2 = XOR(r2,r3);
  r3 = AND(r3,r0);
  r4 = OR(r4,r1);
  r3 = XOR(r3,r4);
  r0 = XOR(r0,r1);
  r4 = AND(r4,r0);
  r1 = XOR(r1,r3);
  r4 = XOR(r4,r2);
  r1 = OR(r1,r0);
  r1 = XOR(r1,r2);
  r0 = XOR(r0,r3);
  r2 = r1;
  r1 = OR(r1,r3);
  r1 = XOR(r1,r0);
  *r5 = r1;
  *r6 = r2;
  *r7 = r3;
  *r8 = r4;
  r4__2 = r0__2;
  r0__2 = OR(r0__2,r3__2);
  r3__2 = XOR(r3__2,r1__2);
  r1__2 = AND(r1__2,r4__2);
  r4__2 = XOR(r4__2,r2__2);
  r2__2 = XOR(r2__2,r3__2);
  r3__2 = AND(r3__2,r0__2);
  r4__2 = OR(r4__2,r1__2);
  r3__2 = XOR(r3__2,r4__2);
  r0__2 = XOR(r0__2,r1__2);
  r4__2 = AND(r4__2,r0__2);
  r1__2 = XOR(r1__2,r3__2);
  r4__2 = XOR(r4__2,r2__2);
  r1__2 = OR(r1__2,r0__2);
  r1__2 = XOR(r1__2,r2__2);
  r0__2 = XOR(r0__2,r3__2);
  r2__2 = r1__2;
  r1__2 = OR(r1__2,r3__2);
  r1__2 = XOR(r1__2,r0__2);
  *r5__2 = r1__2;
  *r6__2 = r2__2;
  *r7__2 = r3__2;
  *r8__2 = r4__2;

}

void sbox__4__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r1 = XOR(r1,r3);
  r3 = NOT(r3);
  r2 = XOR(r2,r3);
  r3 = XOR(r3,r0);
  r4 = r1;
  r1 = AND(r1,r3);
  r1 = XOR(r1,r2);
  r4 = XOR(r4,r3);
  r0 = XOR(r0,r4);
  r2 = AND(r2,r4);
  r2 = XOR(r2,r0);
  r0 = AND(r0,r1);
  r3 = XOR(r3,r0);
  r4 = OR(r4,r1);
  r4 = XOR(r4,r0);
  r0 = OR(r0,r3);
  r0 = XOR(r0,r2);
  r2 = AND(r2,r3);
  r0 = NOT(r0);
  r4 = XOR(r4,r2);
  *r5 = r1;
  *r6 = r4;
  *r7 = r0;
  *r8 = r3;
  r1__2 = XOR(r1__2,r3__2);
  r3__2 = NOT(r3__2);
  r2__2 = XOR(r2__2,r3__2);
  r3__2 = XOR(r3__2,r0__2);
  r4__2 = r1__2;
  r1__2 = AND(r1__2,r3__2);
  r1__2 = XOR(r1__2,r2__2);
  r4__2 = XOR(r4__2,r3__2);
  r0__2 = XOR(r0__2,r4__2);
  r2__2 = AND(r2__2,r4__2);
  r2__2 = XOR(r2__2,r0__2);
  r0__2 = AND(r0__2,r1__2);
  r3__2 = XOR(r3__2,r0__2);
  r4__2 = OR(r4__2,r1__2);
  r4__2 = XOR(r4__2,r0__2);
  r0__2 = OR(r0__2,r3__2);
  r0__2 = XOR(r0__2,r2__2);
  r2__2 = AND(r2__2,r3__2);
  r0__2 = NOT(r0__2);
  r4__2 = XOR(r4__2,r2__2);
  *r5__2 = r1__2;
  *r6__2 = r4__2;
  *r7__2 = r0__2;
  *r8__2 = r3__2;

}

void sbox__5__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r0 = XOR(r0,r1);
  r1 = XOR(r1,r3);
  r3 = NOT(r3);
  r4 = r1;
  r1 = AND(r1,r0);
  r2 = XOR(r2,r3);
  r1 = XOR(r1,r2);
  r2 = OR(r2,r4);
  r4 = XOR(r4,r3);
  r3 = AND(r3,r1);
  r3 = XOR(r3,r0);
  r4 = XOR(r4,r1);
  r4 = XOR(r4,r2);
  r2 = XOR(r2,r0);
  r0 = AND(r0,r3);
  r2 = NOT(r2);
  r0 = XOR(r0,r4);
  r4 = OR(r4,r3);
  r2 = XOR(r2,r4);
  *r5 = r1;
  *r6 = r3;
  *r7 = r0;
  *r8 = r2;
  r0__2 = XOR(r0__2,r1__2);
  r1__2 = XOR(r1__2,r3__2);
  r3__2 = NOT(r3__2);
  r4__2 = r1__2;
  r1__2 = AND(r1__2,r0__2);
  r2__2 = XOR(r2__2,r3__2);
  r1__2 = XOR(r1__2,r2__2);
  r2__2 = OR(r2__2,r4__2);
  r4__2 = XOR(r4__2,r3__2);
  r3__2 = AND(r3__2,r1__2);
  r3__2 = XOR(r3__2,r0__2);
  r4__2 = XOR(r4__2,r1__2);
  r4__2 = XOR(r4__2,r2__2);
  r2__2 = XOR(r2__2,r0__2);
  r0__2 = AND(r0__2,r3__2);
  r2__2 = NOT(r2__2);
  r0__2 = XOR(r0__2,r4__2);
  r4__2 = OR(r4__2,r3__2);
  r2__2 = XOR(r2__2,r4__2);
  *r5__2 = r1__2;
  *r6__2 = r3__2;
  *r7__2 = r0__2;
  *r8__2 = r2__2;

}

void sbox__6__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r2 = NOT(r2);
  r4 = r3;
  r3 = AND(r3,r0);
  r0 = XOR(r0,r4);
  r3 = XOR(r3,r2);
  r2 = OR(r2,r4);
  r1 = XOR(r1,r3);
  r2 = XOR(r2,r0);
  r0 = OR(r0,r1);
  r2 = XOR(r2,r1);
  r4 = XOR(r4,r0);
  r0 = OR(r0,r3);
  r0 = XOR(r0,r2);
  r4 = XOR(r4,r3);
  r4 = XOR(r4,r0);
  r3 = NOT(r3);
  r2 = AND(r2,r4);
  r2 = XOR(r2,r3);
  *r5 = r0;
  *r6 = r1;
  *r7 = r4;
  *r8 = r2;
  r2__2 = NOT(r2__2);
  r4__2 = r3__2;
  r3__2 = AND(r3__2,r0__2);
  r0__2 = XOR(r0__2,r4__2);
  r3__2 = XOR(r3__2,r2__2);
  r2__2 = OR(r2__2,r4__2);
  r1__2 = XOR(r1__2,r3__2);
  r2__2 = XOR(r2__2,r0__2);
  r0__2 = OR(r0__2,r1__2);
  r2__2 = XOR(r2__2,r1__2);
  r4__2 = XOR(r4__2,r0__2);
  r0__2 = OR(r0__2,r3__2);
  r0__2 = XOR(r0__2,r2__2);
  r4__2 = XOR(r4__2,r3__2);
  r4__2 = XOR(r4__2,r0__2);
  r3__2 = NOT(r3__2);
  r2__2 = AND(r2__2,r4__2);
  r2__2 = XOR(r2__2,r3__2);
  *r5__2 = r0__2;
  *r6__2 = r1__2;
  *r7__2 = r4__2;
  *r8__2 = r2__2;

}

void sbox__7__ (/*inputs*/ DATATYPE r0,DATATYPE r0__2,DATATYPE r1,DATATYPE r1__2,DATATYPE r2,DATATYPE r2__2,DATATYPE r3,DATATYPE r3__2, /*outputs*/ DATATYPE* r5,DATATYPE* r5__2,DATATYPE* r6,DATATYPE* r6__2,DATATYPE* r7,DATATYPE* r7__2,DATATYPE* r8,DATATYPE* r8__2) {
  
  // Variables declaration
  DATATYPE r4;
  DATATYPE r4__2;


  // Instructions (body)
  r4 = r1;
  r1 = OR(r1,r2);
  r1 = XOR(r1,r3);
  r4 = XOR(r4,r2);
  r2 = XOR(r2,r1);
  r3 = OR(r3,r4);
  r3 = AND(r3,r0);
  r4 = XOR(r4,r2);
  r3 = XOR(r3,r1);
  r1 = OR(r1,r4);
  r1 = XOR(r1,r0);
  r0 = OR(r0,r4);
  r0 = XOR(r0,r2);
  r1 = XOR(r1,r4);
  r2 = XOR(r2,r1);
  r1 = AND(r1,r0);
  r1 = XOR(r1,r4);
  r2 = NOT(r2);
  r2 = OR(r2,r0);
  r4 = XOR(r4,r2);
  *r5 = r4;
  *r6 = r3;
  *r7 = r1;
  *r8 = r0;
  r4__2 = r1__2;
  r1__2 = OR(r1__2,r2__2);
  r1__2 = XOR(r1__2,r3__2);
  r4__2 = XOR(r4__2,r2__2);
  r2__2 = XOR(r2__2,r1__2);
  r3__2 = OR(r3__2,r4__2);
  r3__2 = AND(r3__2,r0__2);
  r4__2 = XOR(r4__2,r2__2);
  r3__2 = XOR(r3__2,r1__2);
  r1__2 = OR(r1__2,r4__2);
  r1__2 = XOR(r1__2,r0__2);
  r0__2 = OR(r0__2,r4__2);
  r0__2 = XOR(r0__2,r2__2);
  r1__2 = XOR(r1__2,r4__2);
  r2__2 = XOR(r2__2,r1__2);
  r1__2 = AND(r1__2,r0__2);
  r1__2 = XOR(r1__2,r4__2);
  r2__2 = NOT(r2__2);
  r2__2 = OR(r2__2,r0__2);
  r4__2 = XOR(r4__2,r2__2);
  *r5__2 = r4__2;
  *r6__2 = r3__2;
  *r7__2 = r1__2;
  *r8__2 = r0__2;

}


void transform__ (/*inputs*/ DATATYPE input__[4],DATATYPE input____2[4], /*outputs*/ DATATYPE out__[4],DATATYPE out____2[4]) {
  
  // Variables declaration
  DATATYPE _tmp1_;
  DATATYPE _tmp1___2;
  DATATYPE _tmp2_;
  DATATYPE _tmp2___2;
  DATATYPE _tmp3_;
  DATATYPE _tmp3___2;
  DATATYPE _tmp4_;
  DATATYPE _tmp4___2;
  DATATYPE _tmp5_;
  DATATYPE _tmp5___2;
  DATATYPE _tmp6_;
  DATATYPE _tmp6___2;
  DATATYPE x0__[4];
  DATATYPE x0____2[4];
  DATATYPE x1__[3];
  DATATYPE x1____2[3];
  DATATYPE x2__[4];
  DATATYPE x2____2[4];
  DATATYPE x3__[3];
  DATATYPE x3____2[3];


  // Instructions (body)
  x0__[1] = L_ROTATE(input__[0],13,32);
  x2__[1] = L_ROTATE(input__[2],3,32);
  _tmp1_ = XOR(input__[1],x0__[1]);
  x1__[1] = XOR(_tmp1_,x2__[1]);
  _tmp2_ = XOR(input__[3],x2__[1]);
  x0____2[1] = L_ROTATE(input____2[0],13,32);
  x2____2[1] = L_ROTATE(input____2[2],3,32);
  _tmp1___2 = XOR(input____2[1],x0____2[1]);
  x1____2[1] = XOR(_tmp1___2,x2____2[1]);
  _tmp2___2 = XOR(input____2[3],x2____2[1]);
  _tmp3_ = L_SHIFT(x0__[1],3,32);
  x3__[1] = XOR(_tmp2_,_tmp3_);
  x1__[2] = L_ROTATE(x1__[1],1,32);
  x3__[2] = L_ROTATE(x3__[1],7,32);
  _tmp4_ = XOR(x0__[1],x1__[2]);
  _tmp3___2 = L_SHIFT(x0____2[1],3,32);
  x3____2[1] = XOR(_tmp2___2,_tmp3___2);
  x1____2[2] = L_ROTATE(x1____2[1],1,32);
  x3____2[2] = L_ROTATE(x3____2[1],7,32);
  _tmp4___2 = XOR(x0____2[1],x1____2[2]);
  x0__[2] = XOR(_tmp4_,x3__[2]);
  _tmp5_ = XOR(x2__[1],x3__[2]);
  _tmp6_ = L_SHIFT(x1__[2],7,32);
  x2__[2] = XOR(_tmp5_,_tmp6_);
  x0__[3] = L_ROTATE(x0__[2],5,32);
  x0____2[2] = XOR(_tmp4___2,x3____2[2]);
  _tmp5___2 = XOR(x2____2[1],x3____2[2]);
  _tmp6___2 = L_SHIFT(x1____2[2],7,32);
  x2____2[2] = XOR(_tmp5___2,_tmp6___2);
  x0____2[3] = L_ROTATE(x0____2[2],5,32);
  x2__[3] = L_ROTATE(x2__[2],22,32);
  out__[0] = x0__[3];
  out__[1] = x1__[2];
  out__[2] = x2__[3];
  out__[3] = x3__[2];
  x2____2[3] = L_ROTATE(x2____2[2],22,32);
  out____2[0] = x0____2[3];
  out____2[1] = x1____2[2];
  out____2[2] = x2____2[3];
  out____2[3] = x3____2[2];

}


void print128hex(__m128i toPrint) {
  char * bytearray = (char *) &toPrint;
  for(int i = 0; i < 16; i++) printf("%02hhx", bytearray[i]);
  printf("\n");
}

/* main function */
void Serpent__ (/*inputs*/ DATATYPE plaintext__[4],DATATYPE plaintext____2[4],
                DATATYPE keys__[33][4],DATATYPE keys____2[33][4],
                /*outputs*/ DATATYPE ciphertext__[4],DATATYPE ciphertext____2[4]) {

  
  
  /* for (int i = 0; i < 4; i++) print128hex(plaintext__[i]); */
  /* puts(""); */
  /* for (int i = 0; i < 4; i++) print128hex(plaintext____2[i]); */
  

  /* puts("\nKey:"); */
  /* for (int i = 0; i < 4; i++) print128hex(keys__[0][i]); */
  /* puts(""); */
  
  // Variables declaration
  DATATYPE _tmp11_[4];
  DATATYPE _tmp11___2[4];
  DATATYPE _tmp13_[4];
  DATATYPE _tmp13___2[4];
  DATATYPE _tmp15_[4];
  DATATYPE _tmp15___2[4];
  DATATYPE _tmp17_[4];
  DATATYPE _tmp17___2[4];
  DATATYPE _tmp19_[4];
  DATATYPE _tmp19___2[4];
  DATATYPE _tmp21_[4];
  DATATYPE _tmp21___2[4];
  DATATYPE _tmp23_[4];
  DATATYPE _tmp23___2[4];
  DATATYPE _tmp25_[4];
  DATATYPE _tmp25___2[4];
  DATATYPE _tmp27_[4];
  DATATYPE _tmp27___2[4];
  DATATYPE _tmp29_[4];
  DATATYPE _tmp29___2[4];
  DATATYPE _tmp31_[4];
  DATATYPE _tmp31___2[4];
  DATATYPE _tmp33_[4];
  DATATYPE _tmp33___2[4];
  DATATYPE _tmp35_[4];
  DATATYPE _tmp35___2[4];
  DATATYPE _tmp37_[4];
  DATATYPE _tmp37___2[4];
  DATATYPE _tmp39_[4];
  DATATYPE _tmp39___2[4];
  DATATYPE _tmp41_[4];
  DATATYPE _tmp41___2[4];
  DATATYPE _tmp43_[4];
  DATATYPE _tmp43___2[4];
  DATATYPE _tmp45_[4];
  DATATYPE _tmp45___2[4];
  DATATYPE _tmp47_[4];
  DATATYPE _tmp47___2[4];
  DATATYPE _tmp49_[4];
  DATATYPE _tmp49___2[4];
  DATATYPE _tmp51_[4];
  DATATYPE _tmp51___2[4];
  DATATYPE _tmp53_[4];
  DATATYPE _tmp53___2[4];
  DATATYPE _tmp55_[4];
  DATATYPE _tmp55___2[4];
  DATATYPE _tmp57_[4];
  DATATYPE _tmp57___2[4];
  DATATYPE _tmp59_[4];
  DATATYPE _tmp59___2[4];
  DATATYPE _tmp61_[4];
  DATATYPE _tmp61___2[4];
  DATATYPE _tmp63_[4];
  DATATYPE _tmp63___2[4];
  DATATYPE _tmp65_[4];
  DATATYPE _tmp65___2[4];
  DATATYPE _tmp67_[4];
  DATATYPE _tmp67___2[4];
  DATATYPE _tmp69_[4];
  DATATYPE _tmp69___2[4];
  DATATYPE _tmp7_[4];
  DATATYPE _tmp7___2[4];
  DATATYPE _tmp9_[4];
  DATATYPE _tmp9___2[4];
  DATATYPE tmp__[4];
  DATATYPE tmp____2[4];


  // Instructions (body)
  _tmp7_[0] = XOR(plaintext__[0],keys__[0][0]);
  _tmp7_[1] = XOR(plaintext__[1],keys__[0][1]);
  _tmp7_[2] = XOR(plaintext__[2],keys__[0][2]);
  _tmp7_[3] = XOR(plaintext__[3],keys__[0][3]);
  _tmp7___2[0] = XOR(plaintext____2[0],keys__[0][0]);
  _tmp7___2[1] = XOR(plaintext____2[1],keys__[0][1]);
  _tmp7___2[2] = XOR(plaintext____2[2],keys__[0][2]);
  _tmp7___2[3] = XOR(plaintext____2[3],keys__[0][3]);
  sbox__0__(_tmp7_[0],_tmp7___2[0],_tmp7_[1],_tmp7___2[1],_tmp7_[2],_tmp7___2[2],_tmp7_[3],_tmp7___2[3],&_tmp7_[0],&_tmp7___2[0],&_tmp7_[1],&_tmp7___2[1],&_tmp7_[2],&_tmp7___2[2],&_tmp7_[3],&_tmp7___2[3]);
  transform__(_tmp7_,_tmp7___2,tmp__,tmp____2);
  _tmp9_[0] = XOR(tmp__[0],keys__[1][0]);
  _tmp9_[1] = XOR(tmp__[1],keys__[1][1]);
  _tmp9_[2] = XOR(tmp__[2],keys__[1][2]);
  _tmp9_[3] = XOR(tmp__[3],keys__[1][3]);
  _tmp9___2[0] = XOR(tmp____2[0],keys__[1][0]);
  _tmp9___2[1] = XOR(tmp____2[1],keys__[1][1]);
  _tmp9___2[2] = XOR(tmp____2[2],keys__[1][2]);
  _tmp9___2[3] = XOR(tmp____2[3],keys__[1][3]);
  sbox__1__(_tmp9_[0],_tmp9___2[0],_tmp9_[1],_tmp9___2[1],_tmp9_[2],_tmp9___2[2],_tmp9_[3],_tmp9___2[3],&_tmp9_[0],&_tmp9___2[0],&_tmp9_[1],&_tmp9___2[1],&_tmp9_[2],&_tmp9___2[2],&_tmp9_[3],&_tmp9___2[3]);
  transform__(_tmp9_,_tmp9___2,tmp__,tmp____2);
  _tmp11_[0] = XOR(tmp__[0],keys__[2][0]);
  _tmp11_[1] = XOR(tmp__[1],keys__[2][1]);
  _tmp11_[2] = XOR(tmp__[2],keys__[2][2]);
  _tmp11_[3] = XOR(tmp__[3],keys__[2][3]);
  _tmp11___2[0] = XOR(tmp____2[0],keys__[2][0]);
  _tmp11___2[1] = XOR(tmp____2[1],keys__[2][1]);
  _tmp11___2[2] = XOR(tmp____2[2],keys__[2][2]);
  _tmp11___2[3] = XOR(tmp____2[3],keys__[2][3]);
  sbox__2__(_tmp11_[0],_tmp11___2[0],_tmp11_[1],_tmp11___2[1],_tmp11_[2],_tmp11___2[2],_tmp11_[3],_tmp11___2[3],&_tmp11_[0],&_tmp11___2[0],&_tmp11_[1],&_tmp11___2[1],&_tmp11_[2],&_tmp11___2[2],&_tmp11_[3],&_tmp11___2[3]);
  transform__(_tmp11_,_tmp11___2,tmp__,tmp____2);
  _tmp13_[0] = XOR(tmp__[0],keys__[3][0]);
  _tmp13_[1] = XOR(tmp__[1],keys__[3][1]);
  _tmp13_[2] = XOR(tmp__[2],keys__[3][2]);
  _tmp13_[3] = XOR(tmp__[3],keys__[3][3]);
  _tmp13___2[0] = XOR(tmp____2[0],keys__[3][0]);
  _tmp13___2[1] = XOR(tmp____2[1],keys__[3][1]);
  _tmp13___2[2] = XOR(tmp____2[2],keys__[3][2]);
  _tmp13___2[3] = XOR(tmp____2[3],keys__[3][3]);
  sbox__3__(_tmp13_[0],_tmp13___2[0],_tmp13_[1],_tmp13___2[1],_tmp13_[2],_tmp13___2[2],_tmp13_[3],_tmp13___2[3],&_tmp13_[0],&_tmp13___2[0],&_tmp13_[1],&_tmp13___2[1],&_tmp13_[2],&_tmp13___2[2],&_tmp13_[3],&_tmp13___2[3]);
  transform__(_tmp13_,_tmp13___2,tmp__,tmp____2);
  _tmp15_[0] = XOR(tmp__[0],keys__[4][0]);
  _tmp15_[1] = XOR(tmp__[1],keys__[4][1]);
  _tmp15_[2] = XOR(tmp__[2],keys__[4][2]);
  _tmp15_[3] = XOR(tmp__[3],keys__[4][3]);
  _tmp15___2[0] = XOR(tmp____2[0],keys__[4][0]);
  _tmp15___2[1] = XOR(tmp____2[1],keys__[4][1]);
  _tmp15___2[2] = XOR(tmp____2[2],keys__[4][2]);
  _tmp15___2[3] = XOR(tmp____2[3],keys__[4][3]);
  sbox__4__(_tmp15_[0],_tmp15___2[0],_tmp15_[1],_tmp15___2[1],_tmp15_[2],_tmp15___2[2],_tmp15_[3],_tmp15___2[3],&_tmp15_[0],&_tmp15___2[0],&_tmp15_[1],&_tmp15___2[1],&_tmp15_[2],&_tmp15___2[2],&_tmp15_[3],&_tmp15___2[3]);
  transform__(_tmp15_,_tmp15___2,tmp__,tmp____2);
  _tmp17_[0] = XOR(tmp__[0],keys__[5][0]);
  _tmp17_[1] = XOR(tmp__[1],keys__[5][1]);
  _tmp17_[2] = XOR(tmp__[2],keys__[5][2]);
  _tmp17_[3] = XOR(tmp__[3],keys__[5][3]);
  _tmp17___2[0] = XOR(tmp____2[0],keys__[5][0]);
  _tmp17___2[1] = XOR(tmp____2[1],keys__[5][1]);
  _tmp17___2[2] = XOR(tmp____2[2],keys__[5][2]);
  _tmp17___2[3] = XOR(tmp____2[3],keys__[5][3]);
  sbox__5__(_tmp17_[0],_tmp17___2[0],_tmp17_[1],_tmp17___2[1],_tmp17_[2],_tmp17___2[2],_tmp17_[3],_tmp17___2[3],&_tmp17_[0],&_tmp17___2[0],&_tmp17_[1],&_tmp17___2[1],&_tmp17_[2],&_tmp17___2[2],&_tmp17_[3],&_tmp17___2[3]);
  transform__(_tmp17_,_tmp17___2,tmp__,tmp____2);
  _tmp19_[0] = XOR(tmp__[0],keys__[6][0]);
  _tmp19_[1] = XOR(tmp__[1],keys__[6][1]);
  _tmp19_[2] = XOR(tmp__[2],keys__[6][2]);
  _tmp19_[3] = XOR(tmp__[3],keys__[6][3]);
  _tmp19___2[0] = XOR(tmp____2[0],keys__[6][0]);
  _tmp19___2[1] = XOR(tmp____2[1],keys__[6][1]);
  _tmp19___2[2] = XOR(tmp____2[2],keys__[6][2]);
  _tmp19___2[3] = XOR(tmp____2[3],keys__[6][3]);
  sbox__6__(_tmp19_[0],_tmp19___2[0],_tmp19_[1],_tmp19___2[1],_tmp19_[2],_tmp19___2[2],_tmp19_[3],_tmp19___2[3],&_tmp19_[0],&_tmp19___2[0],&_tmp19_[1],&_tmp19___2[1],&_tmp19_[2],&_tmp19___2[2],&_tmp19_[3],&_tmp19___2[3]);
  transform__(_tmp19_,_tmp19___2,tmp__,tmp____2);
  _tmp21_[0] = XOR(tmp__[0],keys__[7][0]);
  _tmp21_[1] = XOR(tmp__[1],keys__[7][1]);
  _tmp21_[2] = XOR(tmp__[2],keys__[7][2]);
  _tmp21_[3] = XOR(tmp__[3],keys__[7][3]);
  _tmp21___2[0] = XOR(tmp____2[0],keys__[7][0]);
  _tmp21___2[1] = XOR(tmp____2[1],keys__[7][1]);
  _tmp21___2[2] = XOR(tmp____2[2],keys__[7][2]);
  _tmp21___2[3] = XOR(tmp____2[3],keys__[7][3]);
  sbox__7__(_tmp21_[0],_tmp21___2[0],_tmp21_[1],_tmp21___2[1],_tmp21_[2],_tmp21___2[2],_tmp21_[3],_tmp21___2[3],&_tmp21_[0],&_tmp21___2[0],&_tmp21_[1],&_tmp21___2[1],&_tmp21_[2],&_tmp21___2[2],&_tmp21_[3],&_tmp21___2[3]);
  transform__(_tmp21_,_tmp21___2,tmp__,tmp____2);
  _tmp23_[0] = XOR(tmp__[0],keys__[8][0]);
  _tmp23_[1] = XOR(tmp__[1],keys__[8][1]);
  _tmp23_[2] = XOR(tmp__[2],keys__[8][2]);
  _tmp23_[3] = XOR(tmp__[3],keys__[8][3]);
  _tmp23___2[0] = XOR(tmp____2[0],keys__[8][0]);
  _tmp23___2[1] = XOR(tmp____2[1],keys__[8][1]);
  _tmp23___2[2] = XOR(tmp____2[2],keys__[8][2]);
  _tmp23___2[3] = XOR(tmp____2[3],keys__[8][3]);
  sbox__0__(_tmp23_[0],_tmp23___2[0],_tmp23_[1],_tmp23___2[1],_tmp23_[2],_tmp23___2[2],_tmp23_[3],_tmp23___2[3],&_tmp23_[0],&_tmp23___2[0],&_tmp23_[1],&_tmp23___2[1],&_tmp23_[2],&_tmp23___2[2],&_tmp23_[3],&_tmp23___2[3]);
  transform__(_tmp23_,_tmp23___2,tmp__,tmp____2);
  _tmp25_[0] = XOR(tmp__[0],keys__[9][0]);
  _tmp25_[1] = XOR(tmp__[1],keys__[9][1]);
  _tmp25_[2] = XOR(tmp__[2],keys__[9][2]);
  _tmp25_[3] = XOR(tmp__[3],keys__[9][3]);
  _tmp25___2[0] = XOR(tmp____2[0],keys__[9][0]);
  _tmp25___2[1] = XOR(tmp____2[1],keys__[9][1]);
  _tmp25___2[2] = XOR(tmp____2[2],keys__[9][2]);
  _tmp25___2[3] = XOR(tmp____2[3],keys__[9][3]);
  sbox__1__(_tmp25_[0],_tmp25___2[0],_tmp25_[1],_tmp25___2[1],_tmp25_[2],_tmp25___2[2],_tmp25_[3],_tmp25___2[3],&_tmp25_[0],&_tmp25___2[0],&_tmp25_[1],&_tmp25___2[1],&_tmp25_[2],&_tmp25___2[2],&_tmp25_[3],&_tmp25___2[3]);
  transform__(_tmp25_,_tmp25___2,tmp__,tmp____2);
  _tmp27_[0] = XOR(tmp__[0],keys__[10][0]);
  _tmp27_[1] = XOR(tmp__[1],keys__[10][1]);
  _tmp27_[2] = XOR(tmp__[2],keys__[10][2]);
  _tmp27_[3] = XOR(tmp__[3],keys__[10][3]);
  _tmp27___2[0] = XOR(tmp____2[0],keys__[10][0]);
  _tmp27___2[1] = XOR(tmp____2[1],keys__[10][1]);
  _tmp27___2[2] = XOR(tmp____2[2],keys__[10][2]);
  _tmp27___2[3] = XOR(tmp____2[3],keys__[10][3]);
  sbox__2__(_tmp27_[0],_tmp27___2[0],_tmp27_[1],_tmp27___2[1],_tmp27_[2],_tmp27___2[2],_tmp27_[3],_tmp27___2[3],&_tmp27_[0],&_tmp27___2[0],&_tmp27_[1],&_tmp27___2[1],&_tmp27_[2],&_tmp27___2[2],&_tmp27_[3],&_tmp27___2[3]);
  transform__(_tmp27_,_tmp27___2,tmp__,tmp____2);
  _tmp29_[0] = XOR(tmp__[0],keys__[11][0]);
  _tmp29_[1] = XOR(tmp__[1],keys__[11][1]);
  _tmp29_[2] = XOR(tmp__[2],keys__[11][2]);
  _tmp29_[3] = XOR(tmp__[3],keys__[11][3]);
  _tmp29___2[0] = XOR(tmp____2[0],keys__[11][0]);
  _tmp29___2[1] = XOR(tmp____2[1],keys__[11][1]);
  _tmp29___2[2] = XOR(tmp____2[2],keys__[11][2]);
  _tmp29___2[3] = XOR(tmp____2[3],keys__[11][3]);
  sbox__3__(_tmp29_[0],_tmp29___2[0],_tmp29_[1],_tmp29___2[1],_tmp29_[2],_tmp29___2[2],_tmp29_[3],_tmp29___2[3],&_tmp29_[0],&_tmp29___2[0],&_tmp29_[1],&_tmp29___2[1],&_tmp29_[2],&_tmp29___2[2],&_tmp29_[3],&_tmp29___2[3]);
  transform__(_tmp29_,_tmp29___2,tmp__,tmp____2);
  _tmp31_[0] = XOR(tmp__[0],keys__[12][0]);
  _tmp31_[1] = XOR(tmp__[1],keys__[12][1]);
  _tmp31_[2] = XOR(tmp__[2],keys__[12][2]);
  _tmp31_[3] = XOR(tmp__[3],keys__[12][3]);
  _tmp31___2[0] = XOR(tmp____2[0],keys__[12][0]);
  _tmp31___2[1] = XOR(tmp____2[1],keys__[12][1]);
  _tmp31___2[2] = XOR(tmp____2[2],keys__[12][2]);
  _tmp31___2[3] = XOR(tmp____2[3],keys__[12][3]);
  sbox__4__(_tmp31_[0],_tmp31___2[0],_tmp31_[1],_tmp31___2[1],_tmp31_[2],_tmp31___2[2],_tmp31_[3],_tmp31___2[3],&_tmp31_[0],&_tmp31___2[0],&_tmp31_[1],&_tmp31___2[1],&_tmp31_[2],&_tmp31___2[2],&_tmp31_[3],&_tmp31___2[3]);
  transform__(_tmp31_,_tmp31___2,tmp__,tmp____2);
  _tmp33_[0] = XOR(tmp__[0],keys__[13][0]);
  _tmp33_[1] = XOR(tmp__[1],keys__[13][1]);
  _tmp33_[2] = XOR(tmp__[2],keys__[13][2]);
  _tmp33_[3] = XOR(tmp__[3],keys__[13][3]);
  _tmp33___2[0] = XOR(tmp____2[0],keys__[13][0]);
  _tmp33___2[1] = XOR(tmp____2[1],keys__[13][1]);
  _tmp33___2[2] = XOR(tmp____2[2],keys__[13][2]);
  _tmp33___2[3] = XOR(tmp____2[3],keys__[13][3]);
  sbox__5__(_tmp33_[0],_tmp33___2[0],_tmp33_[1],_tmp33___2[1],_tmp33_[2],_tmp33___2[2],_tmp33_[3],_tmp33___2[3],&_tmp33_[0],&_tmp33___2[0],&_tmp33_[1],&_tmp33___2[1],&_tmp33_[2],&_tmp33___2[2],&_tmp33_[3],&_tmp33___2[3]);
  transform__(_tmp33_,_tmp33___2,tmp__,tmp____2);
  _tmp35_[0] = XOR(tmp__[0],keys__[14][0]);
  _tmp35_[1] = XOR(tmp__[1],keys__[14][1]);
  _tmp35_[2] = XOR(tmp__[2],keys__[14][2]);
  _tmp35_[3] = XOR(tmp__[3],keys__[14][3]);
  _tmp35___2[0] = XOR(tmp____2[0],keys__[14][0]);
  _tmp35___2[1] = XOR(tmp____2[1],keys__[14][1]);
  _tmp35___2[2] = XOR(tmp____2[2],keys__[14][2]);
  _tmp35___2[3] = XOR(tmp____2[3],keys__[14][3]);
  sbox__6__(_tmp35_[0],_tmp35___2[0],_tmp35_[1],_tmp35___2[1],_tmp35_[2],_tmp35___2[2],_tmp35_[3],_tmp35___2[3],&_tmp35_[0],&_tmp35___2[0],&_tmp35_[1],&_tmp35___2[1],&_tmp35_[2],&_tmp35___2[2],&_tmp35_[3],&_tmp35___2[3]);
  transform__(_tmp35_,_tmp35___2,tmp__,tmp____2);
  _tmp37_[0] = XOR(tmp__[0],keys__[15][0]);
  _tmp37_[1] = XOR(tmp__[1],keys__[15][1]);
  _tmp37_[2] = XOR(tmp__[2],keys__[15][2]);
  _tmp37_[3] = XOR(tmp__[3],keys__[15][3]);
  _tmp37___2[0] = XOR(tmp____2[0],keys__[15][0]);
  _tmp37___2[1] = XOR(tmp____2[1],keys__[15][1]);
  _tmp37___2[2] = XOR(tmp____2[2],keys__[15][2]);
  _tmp37___2[3] = XOR(tmp____2[3],keys__[15][3]);
  sbox__7__(_tmp37_[0],_tmp37___2[0],_tmp37_[1],_tmp37___2[1],_tmp37_[2],_tmp37___2[2],_tmp37_[3],_tmp37___2[3],&_tmp37_[0],&_tmp37___2[0],&_tmp37_[1],&_tmp37___2[1],&_tmp37_[2],&_tmp37___2[2],&_tmp37_[3],&_tmp37___2[3]);
  transform__(_tmp37_,_tmp37___2,tmp__,tmp____2);
  _tmp39_[0] = XOR(tmp__[0],keys__[16][0]);
  _tmp39_[1] = XOR(tmp__[1],keys__[16][1]);
  _tmp39_[2] = XOR(tmp__[2],keys__[16][2]);
  _tmp39_[3] = XOR(tmp__[3],keys__[16][3]);
  _tmp39___2[0] = XOR(tmp____2[0],keys__[16][0]);
  _tmp39___2[1] = XOR(tmp____2[1],keys__[16][1]);
  _tmp39___2[2] = XOR(tmp____2[2],keys__[16][2]);
  _tmp39___2[3] = XOR(tmp____2[3],keys__[16][3]);
  sbox__0__(_tmp39_[0],_tmp39___2[0],_tmp39_[1],_tmp39___2[1],_tmp39_[2],_tmp39___2[2],_tmp39_[3],_tmp39___2[3],&_tmp39_[0],&_tmp39___2[0],&_tmp39_[1],&_tmp39___2[1],&_tmp39_[2],&_tmp39___2[2],&_tmp39_[3],&_tmp39___2[3]);
  transform__(_tmp39_,_tmp39___2,tmp__,tmp____2);
  _tmp41_[0] = XOR(tmp__[0],keys__[17][0]);
  _tmp41_[1] = XOR(tmp__[1],keys__[17][1]);
  _tmp41_[2] = XOR(tmp__[2],keys__[17][2]);
  _tmp41_[3] = XOR(tmp__[3],keys__[17][3]);
  _tmp41___2[0] = XOR(tmp____2[0],keys__[17][0]);
  _tmp41___2[1] = XOR(tmp____2[1],keys__[17][1]);
  _tmp41___2[2] = XOR(tmp____2[2],keys__[17][2]);
  _tmp41___2[3] = XOR(tmp____2[3],keys__[17][3]);
  sbox__1__(_tmp41_[0],_tmp41___2[0],_tmp41_[1],_tmp41___2[1],_tmp41_[2],_tmp41___2[2],_tmp41_[3],_tmp41___2[3],&_tmp41_[0],&_tmp41___2[0],&_tmp41_[1],&_tmp41___2[1],&_tmp41_[2],&_tmp41___2[2],&_tmp41_[3],&_tmp41___2[3]);
  transform__(_tmp41_,_tmp41___2,tmp__,tmp____2);
  _tmp43_[0] = XOR(tmp__[0],keys__[18][0]);
  _tmp43_[1] = XOR(tmp__[1],keys__[18][1]);
  _tmp43_[2] = XOR(tmp__[2],keys__[18][2]);
  _tmp43_[3] = XOR(tmp__[3],keys__[18][3]);
  _tmp43___2[0] = XOR(tmp____2[0],keys__[18][0]);
  _tmp43___2[1] = XOR(tmp____2[1],keys__[18][1]);
  _tmp43___2[2] = XOR(tmp____2[2],keys__[18][2]);
  _tmp43___2[3] = XOR(tmp____2[3],keys__[18][3]);
  sbox__2__(_tmp43_[0],_tmp43___2[0],_tmp43_[1],_tmp43___2[1],_tmp43_[2],_tmp43___2[2],_tmp43_[3],_tmp43___2[3],&_tmp43_[0],&_tmp43___2[0],&_tmp43_[1],&_tmp43___2[1],&_tmp43_[2],&_tmp43___2[2],&_tmp43_[3],&_tmp43___2[3]);
  transform__(_tmp43_,_tmp43___2,tmp__,tmp____2);
  _tmp45_[0] = XOR(tmp__[0],keys__[19][0]);
  _tmp45_[1] = XOR(tmp__[1],keys__[19][1]);
  _tmp45_[2] = XOR(tmp__[2],keys__[19][2]);
  _tmp45_[3] = XOR(tmp__[3],keys__[19][3]);
  _tmp45___2[0] = XOR(tmp____2[0],keys__[19][0]);
  _tmp45___2[1] = XOR(tmp____2[1],keys__[19][1]);
  _tmp45___2[2] = XOR(tmp____2[2],keys__[19][2]);
  _tmp45___2[3] = XOR(tmp____2[3],keys__[19][3]);
  sbox__3__(_tmp45_[0],_tmp45___2[0],_tmp45_[1],_tmp45___2[1],_tmp45_[2],_tmp45___2[2],_tmp45_[3],_tmp45___2[3],&_tmp45_[0],&_tmp45___2[0],&_tmp45_[1],&_tmp45___2[1],&_tmp45_[2],&_tmp45___2[2],&_tmp45_[3],&_tmp45___2[3]);
  transform__(_tmp45_,_tmp45___2,tmp__,tmp____2);
  _tmp47_[0] = XOR(tmp__[0],keys__[20][0]);
  _tmp47_[1] = XOR(tmp__[1],keys__[20][1]);
  _tmp47_[2] = XOR(tmp__[2],keys__[20][2]);
  _tmp47_[3] = XOR(tmp__[3],keys__[20][3]);
  _tmp47___2[0] = XOR(tmp____2[0],keys__[20][0]);
  _tmp47___2[1] = XOR(tmp____2[1],keys__[20][1]);
  _tmp47___2[2] = XOR(tmp____2[2],keys__[20][2]);
  _tmp47___2[3] = XOR(tmp____2[3],keys__[20][3]);
  sbox__4__(_tmp47_[0],_tmp47___2[0],_tmp47_[1],_tmp47___2[1],_tmp47_[2],_tmp47___2[2],_tmp47_[3],_tmp47___2[3],&_tmp47_[0],&_tmp47___2[0],&_tmp47_[1],&_tmp47___2[1],&_tmp47_[2],&_tmp47___2[2],&_tmp47_[3],&_tmp47___2[3]);
  transform__(_tmp47_,_tmp47___2,tmp__,tmp____2);
  _tmp49_[0] = XOR(tmp__[0],keys__[21][0]);
  _tmp49_[1] = XOR(tmp__[1],keys__[21][1]);
  _tmp49_[2] = XOR(tmp__[2],keys__[21][2]);
  _tmp49_[3] = XOR(tmp__[3],keys__[21][3]);
  _tmp49___2[0] = XOR(tmp____2[0],keys__[21][0]);
  _tmp49___2[1] = XOR(tmp____2[1],keys__[21][1]);
  _tmp49___2[2] = XOR(tmp____2[2],keys__[21][2]);
  _tmp49___2[3] = XOR(tmp____2[3],keys__[21][3]);
  sbox__5__(_tmp49_[0],_tmp49___2[0],_tmp49_[1],_tmp49___2[1],_tmp49_[2],_tmp49___2[2],_tmp49_[3],_tmp49___2[3],&_tmp49_[0],&_tmp49___2[0],&_tmp49_[1],&_tmp49___2[1],&_tmp49_[2],&_tmp49___2[2],&_tmp49_[3],&_tmp49___2[3]);
  transform__(_tmp49_,_tmp49___2,tmp__,tmp____2);
  _tmp51_[0] = XOR(tmp__[0],keys__[22][0]);
  _tmp51_[1] = XOR(tmp__[1],keys__[22][1]);
  _tmp51_[2] = XOR(tmp__[2],keys__[22][2]);
  _tmp51_[3] = XOR(tmp__[3],keys__[22][3]);
  _tmp51___2[0] = XOR(tmp____2[0],keys__[22][0]);
  _tmp51___2[1] = XOR(tmp____2[1],keys__[22][1]);
  _tmp51___2[2] = XOR(tmp____2[2],keys__[22][2]);
  _tmp51___2[3] = XOR(tmp____2[3],keys__[22][3]);
  sbox__6__(_tmp51_[0],_tmp51___2[0],_tmp51_[1],_tmp51___2[1],_tmp51_[2],_tmp51___2[2],_tmp51_[3],_tmp51___2[3],&_tmp51_[0],&_tmp51___2[0],&_tmp51_[1],&_tmp51___2[1],&_tmp51_[2],&_tmp51___2[2],&_tmp51_[3],&_tmp51___2[3]);
  transform__(_tmp51_,_tmp51___2,tmp__,tmp____2);
  _tmp53_[0] = XOR(tmp__[0],keys__[23][0]);
  _tmp53_[1] = XOR(tmp__[1],keys__[23][1]);
  _tmp53_[2] = XOR(tmp__[2],keys__[23][2]);
  _tmp53_[3] = XOR(tmp__[3],keys__[23][3]);
  _tmp53___2[0] = XOR(tmp____2[0],keys__[23][0]);
  _tmp53___2[1] = XOR(tmp____2[1],keys__[23][1]);
  _tmp53___2[2] = XOR(tmp____2[2],keys__[23][2]);
  _tmp53___2[3] = XOR(tmp____2[3],keys__[23][3]);
  sbox__7__(_tmp53_[0],_tmp53___2[0],_tmp53_[1],_tmp53___2[1],_tmp53_[2],_tmp53___2[2],_tmp53_[3],_tmp53___2[3],&_tmp53_[0],&_tmp53___2[0],&_tmp53_[1],&_tmp53___2[1],&_tmp53_[2],&_tmp53___2[2],&_tmp53_[3],&_tmp53___2[3]);
  transform__(_tmp53_,_tmp53___2,tmp__,tmp____2);
  _tmp55_[0] = XOR(tmp__[0],keys__[24][0]);
  _tmp55_[1] = XOR(tmp__[1],keys__[24][1]);
  _tmp55_[2] = XOR(tmp__[2],keys__[24][2]);
  _tmp55_[3] = XOR(tmp__[3],keys__[24][3]);
  _tmp55___2[0] = XOR(tmp____2[0],keys__[24][0]);
  _tmp55___2[1] = XOR(tmp____2[1],keys__[24][1]);
  _tmp55___2[2] = XOR(tmp____2[2],keys__[24][2]);
  _tmp55___2[3] = XOR(tmp____2[3],keys__[24][3]);
  sbox__0__(_tmp55_[0],_tmp55___2[0],_tmp55_[1],_tmp55___2[1],_tmp55_[2],_tmp55___2[2],_tmp55_[3],_tmp55___2[3],&_tmp55_[0],&_tmp55___2[0],&_tmp55_[1],&_tmp55___2[1],&_tmp55_[2],&_tmp55___2[2],&_tmp55_[3],&_tmp55___2[3]);
  transform__(_tmp55_,_tmp55___2,tmp__,tmp____2);
  _tmp57_[0] = XOR(tmp__[0],keys__[25][0]);
  _tmp57_[1] = XOR(tmp__[1],keys__[25][1]);
  _tmp57_[2] = XOR(tmp__[2],keys__[25][2]);
  _tmp57_[3] = XOR(tmp__[3],keys__[25][3]);
  _tmp57___2[0] = XOR(tmp____2[0],keys__[25][0]);
  _tmp57___2[1] = XOR(tmp____2[1],keys__[25][1]);
  _tmp57___2[2] = XOR(tmp____2[2],keys__[25][2]);
  _tmp57___2[3] = XOR(tmp____2[3],keys__[25][3]);
  sbox__1__(_tmp57_[0],_tmp57___2[0],_tmp57_[1],_tmp57___2[1],_tmp57_[2],_tmp57___2[2],_tmp57_[3],_tmp57___2[3],&_tmp57_[0],&_tmp57___2[0],&_tmp57_[1],&_tmp57___2[1],&_tmp57_[2],&_tmp57___2[2],&_tmp57_[3],&_tmp57___2[3]);
  transform__(_tmp57_,_tmp57___2,tmp__,tmp____2);
  _tmp59_[0] = XOR(tmp__[0],keys__[26][0]);
  _tmp59_[1] = XOR(tmp__[1],keys__[26][1]);
  _tmp59_[2] = XOR(tmp__[2],keys__[26][2]);
  _tmp59_[3] = XOR(tmp__[3],keys__[26][3]);
  _tmp59___2[0] = XOR(tmp____2[0],keys__[26][0]);
  _tmp59___2[1] = XOR(tmp____2[1],keys__[26][1]);
  _tmp59___2[2] = XOR(tmp____2[2],keys__[26][2]);
  _tmp59___2[3] = XOR(tmp____2[3],keys__[26][3]);
  sbox__2__(_tmp59_[0],_tmp59___2[0],_tmp59_[1],_tmp59___2[1],_tmp59_[2],_tmp59___2[2],_tmp59_[3],_tmp59___2[3],&_tmp59_[0],&_tmp59___2[0],&_tmp59_[1],&_tmp59___2[1],&_tmp59_[2],&_tmp59___2[2],&_tmp59_[3],&_tmp59___2[3]);
  transform__(_tmp59_,_tmp59___2,tmp__,tmp____2);
  _tmp61_[0] = XOR(tmp__[0],keys__[27][0]);
  _tmp61_[1] = XOR(tmp__[1],keys__[27][1]);
  _tmp61_[2] = XOR(tmp__[2],keys__[27][2]);
  _tmp61_[3] = XOR(tmp__[3],keys__[27][3]);
  _tmp61___2[0] = XOR(tmp____2[0],keys__[27][0]);
  _tmp61___2[1] = XOR(tmp____2[1],keys__[27][1]);
  _tmp61___2[2] = XOR(tmp____2[2],keys__[27][2]);
  _tmp61___2[3] = XOR(tmp____2[3],keys__[27][3]);
  sbox__3__(_tmp61_[0],_tmp61___2[0],_tmp61_[1],_tmp61___2[1],_tmp61_[2],_tmp61___2[2],_tmp61_[3],_tmp61___2[3],&_tmp61_[0],&_tmp61___2[0],&_tmp61_[1],&_tmp61___2[1],&_tmp61_[2],&_tmp61___2[2],&_tmp61_[3],&_tmp61___2[3]);
  transform__(_tmp61_,_tmp61___2,tmp__,tmp____2);
  _tmp63_[0] = XOR(tmp__[0],keys__[28][0]);
  _tmp63_[1] = XOR(tmp__[1],keys__[28][1]);
  _tmp63_[2] = XOR(tmp__[2],keys__[28][2]);
  _tmp63_[3] = XOR(tmp__[3],keys__[28][3]);
  _tmp63___2[0] = XOR(tmp____2[0],keys__[28][0]);
  _tmp63___2[1] = XOR(tmp____2[1],keys__[28][1]);
  _tmp63___2[2] = XOR(tmp____2[2],keys__[28][2]);
  _tmp63___2[3] = XOR(tmp____2[3],keys__[28][3]);
  sbox__4__(_tmp63_[0],_tmp63___2[0],_tmp63_[1],_tmp63___2[1],_tmp63_[2],_tmp63___2[2],_tmp63_[3],_tmp63___2[3],&_tmp63_[0],&_tmp63___2[0],&_tmp63_[1],&_tmp63___2[1],&_tmp63_[2],&_tmp63___2[2],&_tmp63_[3],&_tmp63___2[3]);
  transform__(_tmp63_,_tmp63___2,tmp__,tmp____2);
  _tmp65_[0] = XOR(tmp__[0],keys__[29][0]);
  _tmp65_[1] = XOR(tmp__[1],keys__[29][1]);
  _tmp65_[2] = XOR(tmp__[2],keys__[29][2]);
  _tmp65_[3] = XOR(tmp__[3],keys__[29][3]);
  _tmp65___2[0] = XOR(tmp____2[0],keys__[29][0]);
  _tmp65___2[1] = XOR(tmp____2[1],keys__[29][1]);
  _tmp65___2[2] = XOR(tmp____2[2],keys__[29][2]);
  _tmp65___2[3] = XOR(tmp____2[3],keys__[29][3]);
  sbox__5__(_tmp65_[0],_tmp65___2[0],_tmp65_[1],_tmp65___2[1],_tmp65_[2],_tmp65___2[2],_tmp65_[3],_tmp65___2[3],&_tmp65_[0],&_tmp65___2[0],&_tmp65_[1],&_tmp65___2[1],&_tmp65_[2],&_tmp65___2[2],&_tmp65_[3],&_tmp65___2[3]);
  transform__(_tmp65_,_tmp65___2,tmp__,tmp____2);
  _tmp67_[0] = XOR(tmp__[0],keys__[30][0]);
  _tmp67_[1] = XOR(tmp__[1],keys__[30][1]);
  _tmp67_[2] = XOR(tmp__[2],keys__[30][2]);
  _tmp67_[3] = XOR(tmp__[3],keys__[30][3]);
  _tmp67___2[0] = XOR(tmp____2[0],keys__[30][0]);
  _tmp67___2[1] = XOR(tmp____2[1],keys__[30][1]);
  _tmp67___2[2] = XOR(tmp____2[2],keys__[30][2]);
  _tmp67___2[3] = XOR(tmp____2[3],keys__[30][3]);
  sbox__6__(_tmp67_[0],_tmp67___2[0],_tmp67_[1],_tmp67___2[1],_tmp67_[2],_tmp67___2[2],_tmp67_[3],_tmp67___2[3],&_tmp67_[0],&_tmp67___2[0],&_tmp67_[1],&_tmp67___2[1],&_tmp67_[2],&_tmp67___2[2],&_tmp67_[3],&_tmp67___2[3]);
  transform__(_tmp67_,_tmp67___2,tmp__,tmp____2);
  _tmp69_[0] = XOR(tmp__[0],keys__[31][0]);
  _tmp69_[1] = XOR(tmp__[1],keys__[31][1]);
  _tmp69_[2] = XOR(tmp__[2],keys__[31][2]);
  _tmp69_[3] = XOR(tmp__[3],keys__[31][3]);
  _tmp69___2[0] = XOR(tmp____2[0],keys__[31][0]);
  _tmp69___2[1] = XOR(tmp____2[1],keys__[31][1]);
  _tmp69___2[2] = XOR(tmp____2[2],keys__[31][2]);
  _tmp69___2[3] = XOR(tmp____2[3],keys__[31][3]);
  sbox__7__(_tmp69_[0],_tmp69___2[0],_tmp69_[1],_tmp69___2[1],_tmp69_[2],_tmp69___2[2],_tmp69_[3],_tmp69___2[3],&_tmp69_[0],&_tmp69___2[0],&_tmp69_[1],&_tmp69___2[1],&_tmp69_[2],&_tmp69___2[2],&_tmp69_[3],&_tmp69___2[3]);
  ciphertext__[0] = XOR(_tmp69_[0],keys__[32][0]);
  ciphertext__[1] = XOR(_tmp69_[1],keys__[32][1]);
  ciphertext__[2] = XOR(_tmp69_[2],keys__[32][2]);
  ciphertext__[3] = XOR(_tmp69_[3],keys__[32][3]);
  ciphertext____2[0] = XOR(_tmp69___2[0],keys__[32][0]);
  ciphertext____2[1] = XOR(_tmp69___2[1],keys__[32][1]);
  ciphertext____2[2] = XOR(_tmp69___2[2],keys__[32][2]);
  ciphertext____2[3] = XOR(_tmp69___2[3],keys__[32][3]);

  /* printf("\nCipher:\n"); */
  /* for (int i = 0; i < 4; i++) print128hex(ciphertext__[i]); */
  /* puts(""); */
  /* for (int i = 0; i < 4; i++) print128hex(ciphertext____2[i]); exit(1); */
}
 
