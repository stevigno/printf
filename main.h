#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct format - structure that defines
 * the format specifier and the function that defines it
 * @id: character to identify specifier
 * @function: pointer to function for specifier
 */
typedef struct format
{
char *id;
int (*function)();
} all_prot;

int def_percent(void);
int def_string(va_list args);
int def_char(va_list args);


#endif
