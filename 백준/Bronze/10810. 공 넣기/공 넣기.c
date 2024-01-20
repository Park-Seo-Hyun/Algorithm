#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int* arr = (int*)malloc(sizeof(int)* n);
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    for (int j = 0; j < m; j++) {
        int I, J, K;
        scanf("%d %d %d", &I, &J, &K);
        for (int k = I; k < J + 1; k++) {
            arr[k - 1] = K;
        }
    }
    for (int p = 0; p < n; p++) {
        printf("%d ", arr[p]);
    }
    
    free(arr);
    return 0;
}