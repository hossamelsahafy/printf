#include "main.h"

/**
 * p_char - function to print char
 *
 * @ar: parameter to identify va_list
 *
 * @o: parameetr to identify integer
 *
 * Return: will be o + 1
 */
int p_char(va_list ar, int o)
{
	int s;

	s = va_arg(ar, int);
	_putchar(s);
	return (o + 1);
}

/**
 * p_mod - function to print % charachter
 *
 * @o: parameter to identify integer
 *
 * Return: will be o + 1
 */
int p_mod(int o)
{
	_putchar (37);
	return (o + 1);
}

/**
 * p_str - function to print string
 *
 * @ar: parameter to identify va_list
 *
 * @o: parameter toidentify integer
 *
 * Return: will be o + 6 if s == NULL otherwise o + u
 */

int p_str(va_list ar, int o)
{
	int i;
	int u = 0;
	char *s;

	*s = va_arg(ar, char *);
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
		}
		u++;
	}
	return (o + u);
}

/**
 * p_int - function to print integer
 *
 * @ar: parameetr to identify va_list
 *
 * @o: parameter to identify integer
 *
 * Return: will be o + i
 */
int p_int(va_list ar, int o)
{
	int num;
	int prim, l;
	int d;
	int i = 1, e = 1;

	num = va_arg(ar, int);
	l = num % 10;
	prim = num;
	if (1 < 0)
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
			_putchar (d + '0');
			prim = prim - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (o + i);
}

/**
 * p_dec - function to print integer and return the number
 * of digit that was printed
 *
 * @ar: parameter to indentify va_list
 *
 * @o: parameetr to identify integer
 *
 * Return: number of digits that was printedi (o + i)
 */

int p_dec(va_list ar, int o)
{
	int num;
	int prim;
	int d, l;
	int i = 1;
	int e = 1;

	num = va_arg(ar, int);
	l = num % 10;
	num = num / 10;
	prim = num;
	if (1 < 0)
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
			_putchar (d + '0');
			prim = prim - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (o + i);
}
