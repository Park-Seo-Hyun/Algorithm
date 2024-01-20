#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int j = 1; j < n; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    double hap = 0;
    for (int k = 0; k < n; k++) {
        hap += (double)arr[k] / max * 100;
    }
    printf("%lf", hap / n);
    free(arr);
    return 0;
}