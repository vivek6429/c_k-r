#include <stdio.h>
/* arrays count digits and whatnot*/

int main()
{ int c,i,nwhite,nother;
  int ndigit[10];

  nwhite=nother=0;
  for (i=0;i<10;++i)
    ndigit[i]=0;

 while((c=getchar()) != EOF)
    if (c >='0' && c<= '9')
        ++ndigit[c-'0'];
    else if( c == ' ' || c == '\n' || c == '\t')
        ++nwhite;
    else
        ++nother;
    
 printf("digits=\n");
 for(i=0;i<10;++i)
    printf(" %d",ndigit[i]);
    for(int j=0 ; j < ndigit[i];++j)
    printf("-");
 printf(", whitespace = %d, other = %d \n",nwhite,nother);


}