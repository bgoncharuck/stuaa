#include "stuaa.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define throw(MSG) fprintf(stderr, "%s\n", MSG)

static const char * numerics =
"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

static inline double log_base(float base, float num) {
	return log2(num) / log2(base);
}

static inline int findDigitInNumerics (const char * numicsStr, char digit) {
	for ( int curNumicsInd = 0; curNumicsInd < BBIA_INTEGER_SIZE;
		curNumicsInd++)
	if (numicsStr [curNumicsInd] == digit)
		return curNumicsInd;

	return -1;
}

int stuaa_bitflag (int num) {

	if ( !(num >= 0 && num <= BBIA_INTEGER_SIZE) )
		return 0;

	if (BBIA_INTEGER_SIZE <= 32 || num <= 32) {

		const int bitDigit[] = {
			0, 0x01, 0x02, 0x04, 0x08,
			0x10, 0x20, 0x40, 0x80,
			0x100, 0x200, 0x400, 0x800,
			0x1000, 0x2000, 0x4000, 0x8000,
			0x10000, 0x20000, 0x40000, 0x80000,
			0x100000, 0x200000, 0x400000, 0x800000,
			0x1000000, 0x2000000, 0x4000000, 0x8000000,
			0x10000000, 0x20000000, 0x40000000, 0x80000000
		};

		return bitDigit[num];
	}

	int bitDigit = 0x40000000;

	while (num-- != 31)
		bitDigit <<= 1;

	return bitDigit;
}

char * stuaa_toBase (int sinteger, int base) {

	if ( !(base < 65 && base > 1) ) {
		throw ("The base must be from 2 to 64");
		return NULL;
	}

	char * result = malloc (sizeof(char) * BBIA_INTEGER_SIZE + 1);
	if (result == NULL) abort();

	return result;
}

int stuaa_fromBase (char * integer, int base) {

	if (integer == NULL) {
		throw ("null pointer in stuaa_fromBase()");
		return -1;
	}


	return -1;
}

char * stuaa_toBase_Clang (int sinteger, int base) {

	if ( !(base < 65 && base > 1) ) {
		throw ("The base must be from 2 to 64");
		return NULL;
	}

	// TODO
	unsigned integer = sinteger;

	char * result = malloc (sizeof(char) * BBIA_INTEGER_SIZE + 1);
	if (result == NULL) abort();

	for (
		int start = ceil ( log_base (base, integer) ) - 1;

		integer != 0;

		result[start] = numerics [ integer % base ],
		integer /= base,
		start--
	);

	return result;
}

int stuaa_fromBase_Clang (char * integer, int base) {

	if (integer == NULL) {
		throw ("null pointer in stuaa_fromBase()");
		return -1;
	}

	// TODO
	unsigned int result = 0;

	for (
		int curDigit = 0;

		curDigit < BBIA_INTEGER_SIZE;

		result *= base,
		result += findDigitInNumerics (numerics, integer[curDigit]),
		curDigit++
	);

	return (signed) result;
}
