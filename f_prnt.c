#include "main.h"

/**
 * _printf - prints all strings given
 * @format:string format
 * Return:returns an int
*/

int _printf(const char *format, ...)
{
	va_list pr;

	va_start(pr, format);

	if (*format == '\0')
	{
		return (-1);
	}
	else
		check_f(format, pr);

	va_end(pr);
	return (0);
}
