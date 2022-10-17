#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen - function for length of string
 * @s: string to get length
 * i: a counter variable
 *
 * Return: return the length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Do nothing */
	}
	return (i);
}


int _printf(const char *format, ...)
{
	/* Declarations */
	va_list ap;
	char cval, *sval;
	int count, i = 0;

	/* Statements */
	count = _strlen(format);
	va_start(ap, format);
	for (i = 0; i < count; i++)
	{
		if (format[i] != '%')
			putchar(format[i]);
			continue;

		switch (format[i++])
		{
			case 'c':
				cval = va_arg(ap, int);
				putchar(cval);
            	break;
            case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
            		putchar(*sval);
            	break;
            case '%':
            	putchar('%');
            	break;
            default:
            	putchar(*format);
            	break;
		}
	}
	va_end(ap);

}

int main(void)
{
	int s;

	s = _printf("Hello %c World", "el");
	printf("%d", s);
	return(0);
}
