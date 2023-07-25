#include "main.h"
int _printf(const char *format, ...);
int _puts(char *string);
/**
 * _printf - same as printf
 * @format: string pointer
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i = 0, sum = 0;

	va_list args;

	va_start(args, format);
	if (format[i] == '0')
	{
		return (-1);
	}
	else
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					_putchar(va_arg(args, int));

					sum++;
				}
				else if (format[i] == 's')
				{
					int sum1 = _puts(va_arg(args, char*));

					sum += sum1;
				}
				else if (format[i] == '%')
				{
					_putchar('%');
					sum++;
				}
			}
			else
			{
				_putchar(format[i]);
				sum++;
			}
			i++;
		}
	}
	return (sum);
}
/**
 * _puts - puts
 * @string: string
 * Return: r_val
 */
int _puts(char *string)
{
	int r_v = 0;
	int id = 0;

	if (string)
	{
		while (string[id] != '\0')
		{
			write(1, string, strlen(string));
			r_v += 1;
			id++;
		}
		return (r_v);
	}
	return (r_v);
}
