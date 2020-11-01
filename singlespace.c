#include<stdio.h>
/* count lines in output */
main()
{ int c,prev;
  
    while((c = getchar()) != EOF){
      if ((c != prev) || (prev != ' ') )
      putchar(c);
    prev=c;
        
    }
}