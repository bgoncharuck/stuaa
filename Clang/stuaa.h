#pragma once

#define BBIA_INTEGER_SIZE 32
#define BBIA_LEVEL_IS_FULL -1
#define BBIA_LEVEL_IS_EMPTY 0

int intPow (int value, int pow) ;

int stuaa_bitflag (int num) ;

void stuaa_shiftr (int * self, int value) ;

char * stuaa_toBase_Clang (unsigned integer, int base) ;

int stuaa_fromBase_Clang (char * integer, int base) ;

char * stuaa_toBase (int integer, int base) ;

char * stuaa_toBase_from2Base (char * in2Base, int base) ;

int stuaa_fromBase (char * integer, int base) ;
