#include "rectangle.h"

/**
 * rectangle_method - Rectangle Method integrals
 * @a: a parameter
 * @b: b parameter
 * @steps: rectangles divitions
 * Return: integral value
 */
double rectangle_method(double a, double b, int steps)
{
	int i = 0;
	double value = 0, m = ((b - a) / steps), x_step;

	while (i < steps)
	{
		x_step = a + i * m;
		value += (1 / (1 + (x_step * x_step)));
		i++;
	}
	value *= m;
	return (value);
}
