#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 == num2 && num2 == num3) {
        printf("%d", 10000 + 1000 * num1);
    }
    else if (num1 == num2 || num1 == num3) {
        printf("%d", 1000 + 100 * num1);
    }
    else if (num2 == num3) {
        printf("%d", 1000 + 100 * num2);
    }
    else {
        if (num1 > num2 && num1 > num3) {
            printf("%d", 100 * num1);
        }
        else if (num2 > num1 && num2 > num3) {
            printf("%d", 100 * num2);
        }
        else {
            printf("%d", 100 * num3);
        }
    }
    

    
    return 0;
}