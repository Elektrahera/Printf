#ifndef MAIN_H
#define MAIN_H
/* begin standard C header files */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
/* macros */
#define BUFSIZE 1024
#define TRUE (1 == 1)
#define FALSE !TRUE
#define LOWHEX 0
#define UPHEX 1
/* initializing and ending functions */
int _printf(const char *format, ...);
inventory_t *build_inventory(va_list *args_list, const char *format);
int end_func(inventory_t *arg_inv);
/* custom memory allocation and buffer */
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void write_buffer(inventory_t *inv);
void puts_buffer(inventory_t *inv, char *str);
/* string functions */
void rev_string(char *s);
int _strlen(char *s);
int _strlenconst(const char *s);
int _putchar(char c);
void puts_mod(char *str, unsigned int l);
#endif
