#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int age;
	char name[101];
	int date;
} infor;

int compare(const void* a, const void* b) {
	infor A = *(infor*)a;
	infor B = *(infor*)b;
	if (A.age > B.age) return 1;
	else if (A.age < B.age) return -1;
	else {
		if (A.date > B.date) return 1;
		else return -1;
	}
}


int main(void) {
	int n;
	scanf("%d", &n);
	infor* arr = (infor*)malloc(sizeof(infor) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &arr[i].age, arr[i].name);
		arr[i].date = i + 1;
	}
	qsort(arr, n, sizeof(infor), compare);
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", arr[i].age, arr[i].name);
	}

	return 0;
}