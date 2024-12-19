#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Position {
    int x;
    int index;
}Position;

int compare(const void* a, const void* b) {
    Position X = *(Position*)a;
    Position Y = *(Position*)b;
    return X.x - Y.x;
}

int main(void) {
    int n;
    scanf("%d", &n);
    Position* position;
    position = (Position*)malloc(sizeof(Position) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &position[i].x);
        position[i].index =i;
    }
    qsort(position, n, sizeof(Position), compare);

    int* arr = (int*)malloc(sizeof(int) * n);
    int cnt = -1, min = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (position[i].x != min) {
            min = position[i].x;
            cnt++;
        }
        arr[position[i].index] = cnt;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(position);
    free(arr);
    
    return 0;
}