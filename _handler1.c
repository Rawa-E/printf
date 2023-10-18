#include "main.h"
/**
 * _handlers - handles the string case of the _printf
 *
 * @prk:the argument passes to print
 *@pr:arguments string
 *
 *Return:returns the number of printed chars
*/

int _handlers(const char* prk, va_list pr)
{
	int log = strlen(prk);

	if (prk)
	{
		switch (prk)
		{
			case 's':
				{
					char* prk_s = (char*)malloc((log + 1) * sizeof(char));

					strcpy(prk_s, prk);
					log = strlen(prk_s);
					_puts(prk_s);

					free(prk_s);
					break;
				}
			default:
				{
					int nm = va_arg(pr, int);

					handle_i(nm);
					break;
				}
		}
	}
	return (log);
}
