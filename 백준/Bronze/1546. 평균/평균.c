#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for(int i  = 0; i < num; i++) {
		if (max < arr[i]) max = arr[i];
	}

	float total = 0;
	for (int i = 0; i < num; i++) {
		total += (float)arr[i] / max * 100;
	}
	printf("%f", total / num);



	return 0;
}