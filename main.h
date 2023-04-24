#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct checker - maps the specifiers for printf
 * @id: char pointer of the specifier
 * @func: type pointer to function for the conversion
 *
 */
typedef struct checker
{
char *id;
int (*func)();
} check_match;
int istring(va_list list);
int ipercent(void);
int iprintchar(va_list arg);
int valint(va_list list);
int valni(va_list list, int print_sign);

#endif
