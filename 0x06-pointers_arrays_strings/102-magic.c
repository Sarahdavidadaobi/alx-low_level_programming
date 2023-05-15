#include <stdio.h>

int main(void)
{
<<<<<<< HEAD
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;
=======
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
>>>>>>> eb2830ba3ab88de62f26109a4de185a613ac457e
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
<<<<<<< HEAD
 *(p + 5) = 98;
  /* ...so that this prints 98\n */
 printf("a[2] = %d\n", a[2]);
 return (0);
=======
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
>>>>>>> eb2830ba3ab88de62f26109a4de185a613ac457e
}
