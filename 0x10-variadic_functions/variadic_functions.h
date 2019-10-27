#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct fm
{
  char *fm;
  void (*p)();
} fm_t;
#endif
