#include <stdio.h>
int main(void) {
    int total, amount, price, thing, hap = 0;
    scanf("%d", &total);
    scanf("%d", &amount);
    for (int i = 0; i < amount; i++) {
        scanf("%d %d", &price, &thing);
        hap += price * thing;
    }
    if (total == hap) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}