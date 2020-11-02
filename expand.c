//expand


#include<stdio.h>
#include<ctype.h>
#define maxline 1000
#define string " -a-c 0-9 "

void expand(char s1[],char s2[]);

void main()
{
    char s1[]= string ;
    char s2[maxline];

    expand(s1,s2);

}


void expand(char s1[],char s2[]){
    
    int i,j=0,c,f=-1,l;
    for(i=0;s1[i]==' ';i++);
    // skipping blanks
    while(isalnum(s1[i]) || s1[i]=='-'){
        if(isalnum(s1[i])){
            f=s1[i++];
            if(s1[i]=='-'){
                l=s1[++i];
                ++i;

               
            }
        for (c=f;c<=l;c++)
            s2[j++]=c;
        printf("yelp");
        }

        if(s1[i]=='-'){ 
            if(f!=-1){
                f=l;l=s1[++i];
                for (c=f;c<=l;c++)
                s2[j++]=c;
            }
            else {++i;}
        printf("yelp2");
        }
            
    
        if(s1[i]==' ')
            i++;
        

    }
    s2[j]='\0';
    
printf("\n %s \n",s2);

}

