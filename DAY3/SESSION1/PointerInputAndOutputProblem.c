#include <stdio.h>

void calculate(int *p) {
    printf("Input value: %d\n", *p);
    *p = 20;
}

int main() {
    int a = 10;

    calculate(&a);

    printf("Output value: %d\n", a);

    return 0;
}