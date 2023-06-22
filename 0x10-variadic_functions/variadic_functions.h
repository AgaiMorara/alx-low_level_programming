#ifndef FILE_H
#define FILE_H
#include <unistd.h>

#include <stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_number(int);
void print_separator(const char *separator);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
