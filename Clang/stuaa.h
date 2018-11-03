#pragma once

#define BBIA_INTEGER_SIZE 32

/*LEVEL*/
/*@CHOOSE size here*/
#define BBIA_LEVEL_COUNT BBIA_BITS_512
#define BBIA_LEVEL_TOP -1 + BBIA_LEVEL_COUNT
#define BBIA_BITS_COUNT BBIA_LEVEL_COUNT * BBIA_INTEGER_SIZE

/*DIGIT*/
// signed int 1111...n (n == BBIA_INTEGER_SIZE)
#define BBIA_LEVEL_IS_FULL -1
#define BBIA_LEVEL_IS_PFULL INT_MAX
#define BBIA_LEVEL_IS_NFULL INT_MIN
// signed int 0000...n (n == BBIA_INTEGER_SIZE)
#define BBIA_LEVEL_IS_EMPTY 0

int intPow (int value, int pow) ;

int stuaa_bitflag (int num) ;

void stuaa_shiftr (int * self, int value) ;

int stuaa_outofbounders_max (int to, int test) ;

int stuaa_outofbounders_min (int to, int test) ;

char * stuaa_toBase_Clang (unsigned integer, int base) ;

int stuaa_fromBase_Clang (char * integer, int base) ;

char * stuaa_toBase (int integer, int base) ;

char * stuaa_toBase_from2Base (char * in2Base, int base) ;

int stuaa_fromBase (char * integer, int base) ;
