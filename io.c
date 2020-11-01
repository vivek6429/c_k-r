#include <stdio.h>
/* copy input to output */
/* ctrl + D eof on linux */
main()
{ int c;
  c = getchar();
  while(c!=EOF){
      putchar(c);
      printf("---"); // just found out each line is a seperate buffer
      c = getchar();
  }
}
