#include <stdio.h>

int main() {
    char text[]="REVA";
    char *ptr=text;

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
}

