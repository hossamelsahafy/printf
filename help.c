#include"main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 *hex - print
 *@num:the num
 *Return:o
 */
int hex(unsigned  int num)
{
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
_putchar(ah[i] + '0' + 7);
}
else
{
_putchar(ah[i] + '0');
}
}
return (size);
}

