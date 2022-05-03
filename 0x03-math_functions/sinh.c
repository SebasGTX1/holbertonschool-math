#include<stdio.h>
#include<math.h>
/**
 * main - Fucntion that calculate the slope of sinh
 * Return: Nothing
 */
int main(void)
{
	FILE *fp = NULL;
	double x, y;

	fp = fopen("sinh.txt", "w");
	for (x = 0.0000; x <= 6 * M_PI; x = x + 0.001)
	{
		y = cosh(x);
		fprintf(fp, "%lf\t%lf\n", x, y);
	}
}
