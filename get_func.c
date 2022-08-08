#include "main.h"

/**
* get_func - get the function for a specific format to be printed to stdout
* @s: The format specifier
*
* Return: Pointer to the function on success
* return NULL on failure
*/

int (*get_func(char s))(va_list)
{
if (s == 'c')
return (print_char);
if (s == 's')
return (print_str);
if (s == '%')
return (print_percent);
if (s == 'd' || s == 'i')
return (print_dec);
if (s == 'b')
return (print_bin);
return (NULL);
}
