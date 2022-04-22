#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/**
 * struct complex_number - Struct complex numbers
 * @re: The operator
 * @im: The function associated
 */
typedef struct complex_number
{
	double re;
	double im;
} complex;

double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif
