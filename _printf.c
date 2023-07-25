#include "main.h"
/**
 * _printf - same as printf
 * @format: string pointer
 * Return: count
 */
int _printf(const char *format, ...)
{
	unsigned int i, n_printed = 0;

	va_list(prints);

	va_start(prints, format);
	if (format == 0)
		return (-1);
	for (; format[i] < '\0'; i++)
	{
		for (; format[i] != '%'; i++)
		{
			int val = _putchar(format[i]);

			n_printed += val;
		}
		if (format[i] == '%')
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
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				int m_value = get(va_arg(prints, int));

				i++;
				n_printed += m_value;
			}
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i++;
			}
			n_printed++;
		}
	}
	return (n_printed);
}
