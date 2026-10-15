#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=0){
        printf("false\n");
    }
    else{
        while(n%3==0){
            n/=3;
        }
        if(n==1){
            printf("true\n");
        }
        else{
            printf("false\n");
        }
    }
    return 0;
}