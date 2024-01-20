#include <stdio.h>
int main(void) {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = 1; j < num - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}