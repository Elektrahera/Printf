#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - test file for 1_printf file
 * Return: 0
 */
int main(void)
{
	_printf("character: %c\n", 'A');/*char test*/
	_printf("string %s\n", "Efuru and Mercy are ladies");/*string test*/
	_printf("percent sign: %%\n");/*test for printing % sign*/
	return (0);
}
