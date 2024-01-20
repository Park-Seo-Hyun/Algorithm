#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num;
    int mul = 0;
    scanf("%d", &num);
    for (int i = 1; i < 10; i++) {
        mul = num * i;
        printf("%d * %d = %d\n", num, i, mul);
    }
}