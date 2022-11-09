#include "main.h"
/**
 * match_fucntion - function that match format with printf format
 * @format: match the format with the function format
 * @arg: list of arguments prinff witll recieve
 * Return: the number of caracters printed
 */
int match_function(const char *format, va_list arg, st_fmt st_format[])
{
    int i = 0, j, k = 0, done = 0;
    int c = 0;
    /*prints ordinary charactrs without the token % */
    for  (i = 0; format && format[i] != 0; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            c = c + 1;
        }
        /*the token % exists: start the conversion specificaion*/
        else
        {
            for (j = 0; st_format[j].fmt; j++)
            {
                if (format[i + 1] == st_format[j].fmt[k])
                {
                    /*pick element of va-list and apply the function on it */
                    done = st_format[j].funct(arg);
                /*counting the characters printed*/
                    c += done;
                    break;
                }
            }
            /*the token can be duplicated (w can print a special caracter)*/
            if (st_format[j].fmt == NULL && format[i + 1] != ' ')
            {
                if (format[i + 1] != 0)
                {
                    _putchar(format[i]);
                    _putchar(format[i + 1]);
                    c = c + 2;
                    i++;
                }
                else
                    return (-1);
            }
        }
    }
        if (format == NULL)
            return (-1);
        return (c);
}
