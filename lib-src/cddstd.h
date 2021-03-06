#ifndef  __CDDSTD_H
#define  __CDDSTD_H

void *dd_malloc(size_t size);
void *dd_calloc(size_t nmemb, size_t size);
void dd_scanf(int n, const char *format, ...);
int dd_fscanf(FILE *stream, int check, int n, const char *format, ...);
void dd_fgets(char *s, FILE *stream);

#endif  /* __CDD_H */
/* end of cddlib.h */
