#include <stdio.h>

int main(void) {
    int n, num;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int hap = 0;
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            hap++;
        }
    }
    printf("%d", hap);
}