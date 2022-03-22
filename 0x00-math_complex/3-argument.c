#include "holberton.h"
/**
 * argument - calculates and return the argument of
 * a given complex number
 * @c: struct complex
 * Return: a double (argument)
 */

double argument(complex c)
{

	double arg, a, b;

	a = (double) c.im;
	b = (double) c.re;
	arg = atan(a / b);
	return (arg);
}
