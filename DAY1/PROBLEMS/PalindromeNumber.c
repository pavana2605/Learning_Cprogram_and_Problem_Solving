#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=0){
        printf("False");
    }
    int original = n;
    int rem=0;
    int reverse = 0;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
}
    if(original==reverse){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}