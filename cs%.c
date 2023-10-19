#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Custom printf function.
 * @format: The format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int rollout = 0;
	va_start(args, format);
	if (format == NULL || *format == '\0') 
	{
		va_end(args);
		return -1;
	}
	while (*format) 
	{
		if (*format == '%') 
		{
			format++;
			if (*format == 'c') 
				{
					putchar(va_arg(args, int));
					rollout++;
				}
			else if (*format == 's') 
			{
				char *str = va_arg(args, char *);
				while (*str) 
				{
					putchar(*str);
					rollout++;
					str++;
				}
            } 
			else if (*format == '%') {
                putchar('%');
                rollout++;
            } else {
                putchar(*format);
                rollout++;
            }
        } 
		else 
		{
			putchar(*format);
			rollout++;
		}
		format++;
    }
	va_end(args);
	return rollout;
}
