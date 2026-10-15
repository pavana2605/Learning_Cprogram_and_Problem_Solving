#include <stdio.h> 
#include <stdlib.h>

int main() {
    int nums=1202105;
    int *freq = (int*)malloc(sizeof(int));
    while (nums > 0) { 
        int digit = nums % 10;
        freq[digit]++;
        nums /= 10;
}
for(int i=0;i<10;i++){
    if(freq[i]>0){
        printf("%d=%d\n",i,freq[i]);
    }
    free(freq);
    return 0;
}
}