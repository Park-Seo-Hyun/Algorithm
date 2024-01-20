#include <stdio.h>
int main(void) {
    int h, m, time;
    scanf("%d %d\n", &h, &m);
    scanf("%d", &time);
    h += time / 60;
    m += time % 60;
    if (m >= 60) {
        h++;
        m %= 60;
    }
    printf("%d %d", h % 24, m);
    return 0;
}