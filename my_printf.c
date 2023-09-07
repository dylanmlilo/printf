#include "main.h"

/**
 * _printf - function that prints anything
 * 
 * @format: the format string
 * 
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 *         write output to stdout, the standard output stream
*/

int _printf(const char *format, ...)
{
    int d, j = 0;
    char *str;
    char c;
    size_t len = 0;
    va_list args;

    va_start(args, format);
    
    if (format != NULL)
    {
        while (format[j] != '\0')
        {
            if (format[j] == '%')
            {
                j++;

                switch (format[j])
                {
                    case 'c':
                        c = (char)va_arg(args, int);
                        _putchar(c);
                        len++;
                        break;
                    case 's':
                        str = va_arg(args, char *);
                        _puts(str);
                        len += _strlen(str);
                        break;

                    case '%':
                        _putchar('%');
                        len++;
                        break;

                    case 'd':
                        d = va_arg(args, int);
                        len += print_dec(d);
                        break;

                    case 'i':
                        d = va_arg(args, int);
                        len += print_dec(d);
                        break;

                    case 'u':
                        d = va_arg(args, int);
                        len += print_dec(d);
                        break;

                    case 'x':
                        d = va_arg(args, int);
                        len += print_dec(d);
                        break;

                    case 'o':
                        d = va_arg(args, int);
                        len += print_dec(d);
                        break;

                    default:
                        j++;
                        continue;
                }   
            }
            else
            {
                _putchar(format[j]);
                len++;
            }
            j++;
        }
    }
        va_end(args);
        return (len);
}
