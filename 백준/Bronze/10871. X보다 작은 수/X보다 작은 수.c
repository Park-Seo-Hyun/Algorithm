#include <stdio.h>

int main(void) {
    int n, m, num;
    scanf("%d %d", &n, &m);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++) {
        if (arr[j] < m) {
            printf("%d ", arr[j]);
        }
    }
}