#include "stuaa.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main (int argc, char * argv[]) {


	// int secondTest = 0x12345678;
	// int secondTest = BBIA_LEVEL_IS_FULL;
	// int secondTest = INT_MAX;
	// int secondTest = 0;
	// int secondTest = -1;

	// secondTest &= ~stuaa_bitflag(32);


	// char * secondTestToBase = stuaa_toBase (secondTest, 16);

	// for (int i = 0; i < BBIA_INTEGER_SIZE; i++)
	// putchar ( (secondTestToBase[i] != '\0') ? secondTestToBase[i] : '0' );

	// printf ("\nin signed %i\n", stuaa_fromBase (secondTestToBase, 2));

	// if (secondTestToBase) free(secondTestToBase);
	/*

	int outOfBoundersTest_max_to = BBIA_LEVEL_IS_PFULL;
	int outOfBoundersTest_max_test = -6;

	int outOfBoundersTest_min_to = BBIA_LEVEL_IS_PFULL;
	int outOfBoundersTest_min_test = BBIA_LEVEL_IS_NFULL;

	printf ("Max is %s\n", (
		stuaa_outofbounders_max(
			outOfBoundersTest_max_to,
			outOfBoundersTest_max_test
		)
	) ? "worked" : "not worked");

	printf ("Min is %s\n", (
	stuaa_outofbounders_min(
			outOfBoundersTest_min_to,
			outOfBoundersTest_min_test
		)
	) ? "worked" : "not worked");
	*/

	int toBaseTest = BBIA_LEVEL_IS_FULL;

	for (int i = 2; i <= 32; i *= 2) {
		char * inBase = stuaa_toBase (toBaseTest, i);
		printf ("In %2d is %s\n", i, inBase);
		free (inBase);
	}

	char * inBase = stuaa_toBase (toBaseTest, 16);
	int fromBaseTest = stuaa_fromBase (inBase, 16);
	free (inBase);
	printf("From base test : %u\n", fromBaseTest);

	return EXIT_SUCCESS;
}
