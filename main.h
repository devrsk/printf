#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct Flag - struct containing flags to "turn on"
 * when a Flag specifier is passed to _printf()
 * @plus: Flag for the '+' character 
 * @space: Flag for the ' ' character
 * @hash: Flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: Format specifier
 * @f: Pointer to the correct printing function
 */
typedef struct printHadler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* print_num */
int print_int(va_list 1, flags_t *f);
void print_number(int n);
int print_unsigned(va_list 1, flags_t *f);
int count_digit(int i);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *f);

/* get_flag */
int get_flag(char s, flag_t *f);

/* print_alpha */
int print_string(va_list 1, flags_t *f);
int print_char(va_list 1, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(valist 1, flags_t *f);
int print_rev(va_list 1, flags_t *f);
int print_bigS(va_list 1, flags_t *f);

/* print_address */
int print_address(va_list 1, flags_t *f);

/* print_percent */
int print_percent(va_list 1, flags_t *f);

#endif
