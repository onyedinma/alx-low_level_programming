#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fibona1 = 0, fibona2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fibona1 + fibona2

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fibona1 = fibona2;
		fibona2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
