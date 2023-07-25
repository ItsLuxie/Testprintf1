#include "main.h"
/**
 * _putchar - function such as putchar
 * @c: character
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
