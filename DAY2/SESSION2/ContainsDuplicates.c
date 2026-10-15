#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[]="abcd";
    int hash[26] = {0};
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int index=ch-'a';
        if(hash[index]>0){
            printf("Duplicate");
            return 0;
        }
        else{
            hash[index]=hash[index]+1;
        }
    }
    printf("No duplicates found");
    return 0;
}

//only lower cases are counted and map them..