#include "stuaa.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (int argc, char * argv[]) {

	int secondTest = -1;


	char * secondTestToBase = stuaa_toBase (secondTest, 2);
	/*
	*/
	for (int i = 0; i < BBIA_INTEGER_SIZE+1; i++)
	putchar ( (secondTestToBase[i] != '\0') ? secondTestToBase[i] : '0' );

	if (secondTestToBase) free(secondTestToBase);

	return EXIT_SUCCESS;
}}
