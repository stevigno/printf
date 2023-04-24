#include "main.h"
/**
 * def_char - format specifier functtion to print a single character
 * @args: variadic argument
 * Return: count of characters printed
 */
int def_char(va_list args)
{
char i;

i = va_arg(args, int);
_putchar(i);
return (1);
}
