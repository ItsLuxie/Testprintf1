#include  "main.h"
/**
 * _putchar - putchar
 * @c: characyer
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
