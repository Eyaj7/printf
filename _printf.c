#include "main.h"
/**
 * _printf - A variadic function to return the length of
 * a string.
 * @format: format of the argument.
 * 
 * Return: the length of the arguments.
 */


int _printf(const char *format, ...)
{
	unsigned long int i, len = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			len += p_char(format[i]);
			continue;
		}
		if (i++ == strlen(format) - 1)
			return (-1);
		len += SpecFunc(format[i], args);
	}
	va_end(args);
	return (len);
}