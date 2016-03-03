#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "cddtypes.h"

void *dd_malloc(size_t size)
{
  void *x = malloc(size);
  if (x == 0) {
    fprintf(stderr, "ERROR: Out of Memory\n");
    exit(EXIT_FAILURE);
  }
  return x;
}
void *dd_calloc(size_t nmemb, size_t size)
{
  void *x = calloc(nmemb, size);
  if (x == 0) {
    fprintf(stderr, "ERROR: Out of Memory\n");
    exit(EXIT_FAILURE);
  }
  return x;
}

void dd_scanf(int n, const char *format, ...)
{
  int rc;

  va_list args;
  va_start(args, format);
  rc = vscanf(format, args);
  va_end(args);

  if (rc != n) {
    if (rc == EOF) {
      perror("scanf");
    } else {
      // rc < n, not all arguments of format could be read
      fprintf(stderr, "ERROR: Invalid input\n");
    }
    exit(EXIT_FAILURE);
  }
}

int dd_fscanf(FILE *stream, int check, int n, const char *format, ...)
{
  int rc;

  va_list args;
  va_start(args, format);
  rc = vfscanf(stream, format, args);
  va_end(args);

  if (rc != n) {
    if (check) {
      return 1;
    } else {
      if (rc == EOF) {
        perror("scanf");
      } else {
        // rc < n, not all arguments of format could be read
        fprintf(stderr, "ERROR: Invalid input\n");
      }
      exit(EXIT_FAILURE);
    }
  }
  return 0;
}
void dd_fgets(char *s, FILE *stream)
{
  char *ret = fgets(s, dd_linelenmax, stream);
  if (ret == NULL) {
    fprintf(stderr, "ERROR: Failed while reading\n");
    exit(EXIT_FAILURE);
  }
}
