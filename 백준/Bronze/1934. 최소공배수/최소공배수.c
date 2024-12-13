#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}


int main(void) {
    int n, a, b;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }

    return 0;
}