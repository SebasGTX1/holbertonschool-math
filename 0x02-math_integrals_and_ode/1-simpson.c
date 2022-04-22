#include "simpson.h"
/**
* simpson - simpson_method
* @a: a parameter
* @b: b parameter
* @steps: subintervals divition
* Return: aproximation to the integral value
*/

double simpson(double a, double b, int steps)
{
	double value = f(a), h, base = (b - a) / steps;
	int i = 1;

	for (; i <= steps - 1; i++)
	{
		h = a + i * base;
		if (i % 2 == 0)
			value += 2 * f(h);
		else
			value += 4 * f(h);
	}
	value += f(b);
	value *= (base / 3);
	return (value);
}
