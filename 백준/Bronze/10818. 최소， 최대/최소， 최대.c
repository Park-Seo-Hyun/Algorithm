#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int j = 0; j < n; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
        if (min > arr[j]) {
            min = arr[j];
        }
    }
    printf("%d ", min);
    printf("%d", max);
    
}