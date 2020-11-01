#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*
prints fahrenheit-celsius table
*/

main()
{ 
    float fahr,celsius;
    int lower,upper,step;
    
    // lower=0;
    // upper=300;
    // step=20;

    fahr= LOWER;
    printf("\t Temperature conversion chart\n");
    while (fahr<=UPPER){
        celsius = (5.0/9.0)*(fahr-32);
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr + STEP ;   
        /* code */
    }
    


}