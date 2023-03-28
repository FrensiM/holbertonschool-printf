#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct print
{
	char *f_type;
	int (*f)(va_list list);
} print_t;

int p_char(va_list list);
int p_str(va_list list);
int p_int(va_list list);
int p_float(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int p_prc(va_list list);

#endif
