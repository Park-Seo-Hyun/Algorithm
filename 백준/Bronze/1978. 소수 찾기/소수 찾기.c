#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, num = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		int m = arr[i];
		int hap = 0;
		while (m > 0) {
			if (arr[i] % m == 0) hap++;
			m--;
		}
		if (hap == 2) num++;
	}
	printf("%d", num);
	
							 
	return 0;				 
}	