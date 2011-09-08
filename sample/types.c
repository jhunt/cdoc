#include "types.h"

/**
  function1 - Documented in the C file

  If you look at the source files types.h and
  types.c, you will see that the parameter names
  in types.h have no bearing on `cdoc`.  Instead
  of $param1, its actually $p.
 */
int function1(int p)
{
	int i;

	for (i = 0; i < p; i++) {
		printf("+");
	}
	printf("\n");
}

/**
  function2 - Embedded Code Sample

  <code>
  // embedded code sample
  int lim=5;
  int i;
  for (i=0;i<lim;i++) {
      printf("%u\n",i);
  }
  </code>
 */
void function2(char *string)
{
	fprintf(stderr, "DEBUG: %s\n", string);
}
