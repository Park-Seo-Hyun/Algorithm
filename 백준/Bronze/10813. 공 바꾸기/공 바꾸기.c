#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int* arr = (int*)malloc(sizeof(int)* n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for (int j = 0; j < m; j++) {
        int I, J, temp;
        scanf("%d %d", &I, &J);
        temp = arr[I - 1];
        arr[I - 1] = arr[J - 1];
        arr[J - 1] = temp;
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    
    free(arr);
    return 0;
}