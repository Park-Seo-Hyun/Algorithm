#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, I, J;
    scanf("%d %d", &n, &m);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int p = 0; p < n; p++) {
        arr[p] = p + 1;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &I, &J);
        while (I < J) {
            int temp = arr[I - 1];
            arr[I - 1] = arr[J - 1];
            arr[J - 1] = temp;
            I++;
            J--;
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    free(arr);
    return 0;
}