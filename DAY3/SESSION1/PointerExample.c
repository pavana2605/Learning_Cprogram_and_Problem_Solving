#include <stdio.h>

int main(){
    int n=10;
    int *ptr=&n;
    int *ptr2=NULL;
    printf("%d",n);
   // printf("%p",(void *)&n); //prints address of n
    printf("%p",(void*)ptr2);
    *ptr=*ptr+10;
    char ch='A';
    char *p=&ch;
    p='B';
    printf("\n%c",ch);
    
}