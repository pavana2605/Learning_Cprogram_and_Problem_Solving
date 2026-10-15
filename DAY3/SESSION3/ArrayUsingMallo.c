#include <stdio.h>

int main() {
    int n=0,sum=0;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
printf("%d ",arr[i]);
    }
}