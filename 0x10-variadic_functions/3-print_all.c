#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: standard for va_functions
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *s, *seprt = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", seprt, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seprt, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seprt, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", seprt, s);
					break;
				default:
					a++;
					continue;
			}
			seprt = ",";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}
