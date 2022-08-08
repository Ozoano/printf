#include "main.h"

/**
* print_char - prints a character to stdout
* @args: The character to print
*
* Return: 1 on success
*/

int print_char(va_list args)
{
int c = va_arg(args, int);

return (_putchar(c));
}
