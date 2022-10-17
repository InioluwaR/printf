#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdout.h>

int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	/* Declarations */
	va_list ap;
	char *tmp, *sval;

	/* Statements */
	va_start(ap, format);
	for(p = fmt; *p; p++)
	{
		if (*p != "%")
			putchar(*p);
			continue;

		switch (++p)
		{
			case 'c':
				for (sval = va_arg(ap, char *); *sval; sval++)
            		putchar(*sval);
            		continue;
            	break;
            case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
            		putchar(*sval);
            	break;
            case '%':
            	putchar('%');
            	break;
            default:
            	putchar(*p);
            	break;
		}
	}
	va_end(ap);
}

#endif
