#include"main.h"
/**
 *pr_hex - print
 *@ar:the ar
 *@o:the count
 *Return:o
 */
int pr_hex(va_list ar, int o)
{
unsigned int num = va_arg(ar, unsigned int);
unsigned int prim = num;
int i, size = 1;
int *ah;
while (num / 16)
{
num /= 16;
size++;
}
ah = malloc(size *sizeof(int));
for (i = 0; i < size; i++)
{
ah[i] = prim % 16;
prim /= 16;
}
for (i = size - 1; i >= 0; i--)
{
if (ah[i] > 9)
{
_putchar(ah[i] + '0' + 39);
}
else
{
_putchar(ah[i] + '0');
}
}
return (o + size);
}
/**
 *pr_oct - print
 *@ar:the ar
 *@o:the count
 *Return:o
 */
int pr_oct(va_list ar, int o)
{
unsigned int num = va_arg(ar, unsigned int);
unsigned int prim = num;
int i, size = 1;
int *ah;
while (num / 8)
{num /= 8;
size++;
}
ah = malloc(size *sizeof(int));
for (i = 0; i < size; i++)
{
ah[i] = prim % 8;
prim /= 8;
}
for (i = size - 1; i >= 0; i--)
{
_putchar(ah[i] + '0');
}
return (o + size);
}

/**
 *pr_HEX - print
 *@ar:the ar
 *@o:the count
 *Return:o
 */

int pr_HEX(va_list ar, int o)
{
unsigned int num = va_arg(ar, unsigned int);
unsigned int prim = num;
int i, size = 1;
int *ah;
while (num / 16)
{num /= 16;
size++;
}
ah = malloc(size *sizeof(int));
for (i = 0; i < size; i++)
{
ah[i] = prim % 16;
prim /= 16;
}
for (i = size - 1; i >= 0; i--)
{
if (ah[i] > 9)
{
_putchar(ah[i] + '0' + 7);
}
else
{
_putchar(ah[i] + '0');
}
}
return (o + size);
}

/**
 *pr_bin - print
 *@ar:the ar
 *@o:the count
 *Return:o
 */
int pr_bin(va_list ar, int o)
{
unsigned int num = va_arg(ar, unsigned int);
unsigned int prim = num;
int i, size = 1;
int *ah;
while (num / 2)
{num /= 2;
size++;
}
ah = malloc(size *sizeof(int));
for (i = 0; i < size; i++)
{
ah[i] = prim % 2;
prim /= 2;
}
for (i = size - 1; i >= 0; i--)
{
_putchar(ah[i] + '0');
}
return (o + size);
}
/**
 *strx - print
 *@ar:the ar
 *@o:the count
 *Return:o
 */
int strx(va_list ar, int o)
{char *s = va_arg(ar, char *);
int j, i = 0, c = 0;
while (s[i])
{
if (s[i] < 32 || s[i] > '~')
{
_putchar('\\');
_putchar('x');
j = s[i];
if (j < 16)
{
_putchar('0');
c++;
}
c = c + hex(j) + 2;
}
else
{
_putchar(s[i]);
c++;
}
i++;
}
return (o + c);
}
