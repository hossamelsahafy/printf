#include"main.h"
/**
 *_printf - print
 *@format:the fm
 *Return:o
 */

int _printf(const char *format, ...)
{
int o;
int i, j;
va_list ar;
form sp[] = {{'s', p_str}, {'c', p_char}, {'%', p_mod}, {'x', pr_hex},
{'X', pr_HEX}, {'o', pr_oct}, {'b', pr_bin},
{'i', p_int}, {'d', p_dec}, {'S', strx}};
va_start(ar, format);
o = 0;
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{ return (-1);
}
if (format[0] == '%' && format[1] == ' ' && !format[2])
{return (-1);
}
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{i++;
for (j = 0; j < 10; j++)
{
if (sp[j].id == format[i])
{
if (format[i] == '%')
{
o = sp[j].f(o);
}
else
{
o = sp[j].f(ar, o);
}
}
}
}
else
{
_putchar(format[i]);
o++;
}
}
va_end(ar);
return (o); }
