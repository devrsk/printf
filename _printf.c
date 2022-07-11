#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _printf - Function prototype produces output according to a format
 * Description: This fuction will call the get_print() function that will
 * determine which printing function to call depending on th conversion
 * @format: Format string containing the charcaters and the specifiers
 * specifiers contained into fmt
 * Return: Length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (formate[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfinc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		}else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
