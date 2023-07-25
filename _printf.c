#include "headfile.h"
/**
 * _printf - same as printf
 * @format: string pointer
 * Return: count
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int n_printed = 0;

	va_list(prints);

	va_start(prints, format);
	for (; format[i] < '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(prints, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				int n_value = _print(va_arg(prints, char *));

				i++;
				n_printed += n_value;
			}
			n_printed++;
		}
	}
		return (n_printed);
}
