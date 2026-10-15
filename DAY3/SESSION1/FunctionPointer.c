#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int main() {
    int (*ptr)(int,int)=add;
    int x=10;
    int y=20;
    int *const p=&x;
    *p=50;
    //p=&y; //error
    printf("%d",x);

    printf("\n%d",ptr(10,20)); 
}