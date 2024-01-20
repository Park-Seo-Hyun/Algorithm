#include <stdio.h>
int main(void) {
    int num, hap = 0;
    scanf
        ("%d", &num);
    for (int i = 1; i < num + 1; i++) {
        hap += i;
    }
    printf("%d", hap);
}