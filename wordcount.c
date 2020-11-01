#include<stdio.h>
#include<string.h>

// * eof @ ctrl + d

/**
 * @brief Construct a new main object
 * 
 */
main()
{ long nc;
  nc=025;

  printf("%ld \n",nc);
  nc=0X25;
  printf("%ld \n",nc);
  nc=000;
  while(getchar() != EOF)
    ++nc;
  printf("%ld \n",nc);

}