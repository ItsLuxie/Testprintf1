#include "headfile.h"
/**
 * _print - prints string
 * @string: string
 * Return: r_val
 */
int _print(char string[])
{
	int id, r_val = 0;

	if (string)
	{
		while (string[id] != '\0')
		{
			_putchar(string[id]);
			r_val++;
			id++;
		}
	}
	return (r_val);
}
