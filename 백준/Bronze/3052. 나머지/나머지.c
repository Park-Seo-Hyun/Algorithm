#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[10] = { 0 };
    int num, result = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[i] = num % 42;
    }
    for (int k = 0; k < 10; k++) {
        int hap = 0;
        for (int j = 0; j < k; j++) {
            if (arr[k] == arr[j]) {
                hap++;
            }
        }
        if (hap == 0) {
            result++;
        }
    }
    printf("%d", result);
    
    return 0;
}