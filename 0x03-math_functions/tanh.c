#include<stdio.h>
#include<math.h>
/**
 * main - Fucntion tha calculate the slope of tanh
 * Return: Nothing
 */
int main(void)
{
	FILE *fp = NULL;
	double x, y, r;

	fp = fopen("tanh.txt", "w");
	for (x = -10; x <= 10; x = x + 0.001)
	{
		r = exp(tanh(x));
		y = 1 - r;
		fprintf(fp, "%lf\t%lf\n", x, y);
	}
}
