#pragma once

#define BBIA_INTEGER_SIZE 32
#define BBIA_LEVEL_IS_FULL -1
#define BBIA_LEVEL_IS_EMPTY 0

int stuaa_bitflag (int num) ;

char * stuaa_toBase_Clang (int integer, int base) ;

int stuaa_fromBase_Clang (char * integer, int base) ;

char * stuaa_toBase (int integer, int base) ;

int stuaa_fromBase (char * integer, int base) ;
