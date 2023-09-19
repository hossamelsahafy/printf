#include"main.h"
/**
 * p_char - print
 * @ar:the ar
 * @o:the o
 * Return:o
 */
int p_char(va_list ar, int o)
{
int s = va_arg(ar, int);
_putchar(s);
return (o + 1);
}
/**
 * p_mod - print
 * @o:the o
 * Return:o
 */

int p_mod(int o)
{
_putchar(37);
return (o + 1);
}
/**
 * p_str - print
 * @ar:the ar
 * @o:the o
 * Return:o
 */
int p_str(va_list ar, int o)
{
int i, u = 0;
char *s = va_arg(ar, char *);
if (s == NULL)
{
s = "(null)";
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (o + 6);
}
else
{
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
u++;
}
return (o + u);
}
}

/**
 * p_int - print
 * @ar:the ar
 * @o:the o
 * Return:o
 */
int p_int(va_list ar, int o)
{
int num = va_arg(ar, int);
int prim, l = num % 10;
int d, e = 1;
int  i = 1;
num = num / 10;
prim = num;
if (l < 0)
{
_putchar('-');
prim = -prim;
num = -num;
l = -l;
i++;
}
if (prim > 0)
{
while (prim / 10 != 0)
{
e = e * 10;
prim = prim / 10;
}
prim = num;
while (e > 0)
{
d = prim / e;
_putchar(d + '0');
prim = prim - (d *e);
e = e / 10;
i++;
}
}
_putchar(l + '0');
return (o + i);
}

/**
 * p_dec - print
 * @ar:the ar
 * @o:the o
 * Return:o
 */

int p_dec(va_list ar, int o)
{
int num = va_arg(ar, int);
int prim, l = num % 10, d;
int  i = 1;
int e = 1;
num = num / 10;
prim = num;
if (l < 0)
{
_putchar('-');
prim = -prim;
num = -num;
l = -l;
i++;
}
if (prim > 0)
{
while (prim / 10 != 0)
{
e = e * 10;
prim = prim / 10;
}
prim = num;
while (e > 0)
{
d = prim / e;
_putchar(d + '0');
prim = prim - (d *e);
e = e / 10;
i++;
}
}
_putchar(l + '0');
return (o + i);
}
