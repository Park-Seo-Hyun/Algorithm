#include <stdio.h>

int main(void) {
	int num, arr[100][100] = { 0, };
	scanf("%d", &num);
	int x, y;
	while (num > 0) {
		scanf("%d %d", &x, &y);
		for (int i = x - 1; i < x + 9; i++) {
			for (int j = y - 1; j < y + 9; j++) {
				arr[i][j] = 1;
			}
		}
		num--;
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] == 1) cnt++;
		}
	}
	printf("%d", cnt);
							 
	return 0;				 
}	