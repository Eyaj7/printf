#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#define STRING ((str) ? str : "(null)")

int _printf(const char *format, ...);
int p_char(char a);
int p_string(char *str);
int SpecFunc(char a, va_list args);

#endif