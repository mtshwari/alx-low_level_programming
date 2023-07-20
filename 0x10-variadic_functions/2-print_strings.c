#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; ++i)
{
const char *str = va_arg(args, const char*);

if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
}

va_end(args);
printf("\n");
}
