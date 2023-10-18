#include "main.h"
/**
 * _handler - checks for format specifier
 * @hand:form spec
 * @pr:strings as args
 * Return:returns thr number of printed chars
*/
int _handler(const char* hand, va_list pr)
{
	int logn = 0;

	if (hand)
	{
		switch (hand)
		{
			case '%':
				{
					_putchar('%');
					logn++;
					break;
				}
			case 'c':
				{
					int kn = va_arg(pr, int);

					_putchar(kn);
					logn++;
					break;
				}

			default:
				{
					_handlers(hand, pr);
				}
		}
	}
	return (logn);
}
