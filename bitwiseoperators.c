// * << >> 

#include <stdio.h>

unsigned getbits(unsigned x,int p,int n);
void bin(unsigned n) ;
unsigned setbits(unsigned x, int p, int n,unsigned y);
unsigned invert(unsigned x,int p , int n);
unsigned rightrot(unsigned x ,int n);
void main(){
    unsigned int x,n,p,y,res;
    x=0xF0FF;
    y=0x0F00;
    p=3;
    n=2;
    res= getbits(x,p,n);
    printf("x :\n");bin(x);
    printf("position %d, batch size %d \n",p,n);
    bin(res);
    printf("position %d, batch size %d \n",p,n);
    printf("y :\n");bin(y);
    res = setbits(x,p,n,y);
    bin(res);
    res= invert(x,p,n);
    printf("\n");
    bin(res);
    bin(0x80000001);
    bin(rightrot(0x80000001,1));



}


//* binary operation
unsigned getbits(unsigned x,int p,int n){
    return (x>> (p+1-n)) & ~(~0 <<n);
}

/**
 * @brief prints binary of int
 * 
 * @param n 
 */
void bin(unsigned n) 
{ 
    unsigned i; 
    for (i = 1 << 31; i > 0; i = i / 2){
        (n & i)? printf("1"): printf("0");       
    }
    printf("\n");
} 


/**
 * @brief  copys from to in a batch size 
 * 
 * @param x first
 * @param p postion 
 * @param n batch size
 * @param y to
 * @return unsigned 
 */

unsigned setbits(unsigned x, int p, int n,unsigned y){
printf("-----------set bits----------\n");
unsigned temp = getbits(x,p,n);
bin(y);
printf(">>\n");
y= y>>n;
bin(y);
printf("<<\n");
y=y<<n;
bin(y);
printf("temp : \n");
bin(temp);
printf("|\n");
y= y | temp;
bin(y);
printf("---------------------\n");
return y;

}

/**
 * @brief returns x with n bits that begin at position p 
 *         inverted
 * 
 * @param x 
 * @param n 
 * @return unsigned 
 */
unsigned invert(unsigned x,int p ,int n){
   printf("====invert\n");
   unsigned  vals =getbits(x,p,n);
   vals = ~vals; 
   vals = vals << (p+1-n);
   unsigned mask_l = ~0 << (p+n-1);
   unsigned mask_r = ~0;
   mask_r=mask_r >>((sizeof(unsigned)*8)-(p+1-n));
   mask_l |= mask_r ; // hehe l= l | r
   vals = vals & ~mask_l ;
   bin(vals);
   x= mask_l & x;
   bin(x | vals);
   printf("==========");
   return(x | vals);
}
// right rotation
unsigned rightrot(unsigned x ,int n){
    while (n-- >0){
        unsigned temp = x & 0x00000001;
        temp= temp << sizeof(temp)*8-1;
        x= x >>1;
        x = x | temp;
        
    }
    return x;
}