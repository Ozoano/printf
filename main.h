#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_percent(va_list args);
int (*get_func(char s))(va_list);
int _printf(const char *format, ...);
int get_int_len(int value);

#endif /* MAIN_H */
