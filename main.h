#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct form - structure to hold the char id and function
 * pointer
 *
 * @id: the id of function
 *
 * @f: the pointer of the function
 */

typedef struct form
{
	char id;
	int (*f)();
}form;

int _printf(const char *format, ...);

int p_str(va_list ar, int o);

int p_char(va_list ar, int o);

int p_mod(int o);

int pr_hex(va_list ar, int o);

int pr_HEX(va_list ar, int o);

int pr_oct(va_list ar, int o);

int pr_bin(va_list ar, int o);

int p_int(va_list ar, int o);

int p_dec(va_list ar, int o);

int strx(va_list ar, int o);

int hex(unsigned  int num);

int _putchar(char c);
#endif
