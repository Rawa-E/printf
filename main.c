#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;
       	void *addr;
	 int len;
    int len2;
    unsigned int ui;
    void *addr;
 _printf("Length:[%d, %i]\n", len, len);
 _printf("String:[%s]\n", "I am a string !");
 len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	return (0);
}

