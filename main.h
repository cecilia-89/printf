#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

typedef struct printHandler
{
	char c;

	int (*f)(va_list ap, flags_t *f);
} ph;


int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int (*get_print(char s))(va_list, flags_t *);
int _printf(const char *format, ...);
int get_flag(char s, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);

void print_number(int n);

int print_unsigned(va_list l, flags_t *f);

int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);
#endif
