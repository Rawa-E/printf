#include "main.h"
/**
 *check_f - checks the string for specs
 *@format:the string form
 *@pr:arguments
*/
void check_f(const char *format, va_list pr)
{
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			_handler(format, pr);
		}
		else
			_putchar(*format);
	}
}
