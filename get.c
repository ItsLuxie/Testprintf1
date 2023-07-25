#include  "headfile.h"
/**
 * get - recursive function
 * @n: integer value
 * Return: 0 success
 */
int get(int n)
{
	int i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		i = n / 10;
		get(i);
	}
	_putchar(n % 10 + '\0');
	return (0);
}
