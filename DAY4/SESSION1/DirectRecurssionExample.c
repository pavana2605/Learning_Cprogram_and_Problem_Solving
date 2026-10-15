#include <stdio.h>
int n=0;

int main() {
    //definition

    n=n+1;
    if(n==5)
    return 0; //stops
    printf("%d",n);
    main();
    return 0;
}