#include "main.h"

/**
* print_str - print a str to stdout
* @args: The string to print
*
* Return: The number of character in the string
*/

int print_str(va_list args)
{
char *str;
int i = 0;

str = va_arg(args, char *);
while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}
