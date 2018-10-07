#include "stuaa.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (int argc, char * argv[]) {


	// int secondTest = 0x12345678;
	// int secondTest = BBIA_LEVEL_IS_FULL;
	// int secondTest = INT_MAX;
	// int secondTest = 0;
	int secondTest = -1;

	secondTest &= ~stuaa_bitflag(31);


	char * secondTestToBase = stuaa_toBase_Clang (secondTest, 2);

	for (int i = 0; i < BBIA_INTEGER_SIZE; i++)
	putchar ( (secondTestToBase[i] != '\0') ? secondTestToBase[i] : '0' );

	printf ("\nin signed %i\n", stuaa_fromBase (secondTestToBase, 2));

	if (secondTestToBase) free(secondTestToBase);
	/*
	*/

	return EXIT_SUCCESS;
}
