#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces an output according to a given format
 * @format: The format to be printed out to stdout
 *
 * Return: The length of the string printed to stdout
 */

int _printf(const char *format, ...)
{
va_list args;
int i, count;
int (*ptr)(va_list);

va_start(args, format);
count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
ptr = get_func(format[i + 1]);
if (ptr)
{
count += ptr(args);
i++;
}
else
count += _putchar('%');
}
}
va_end(args);
return (count);
}
