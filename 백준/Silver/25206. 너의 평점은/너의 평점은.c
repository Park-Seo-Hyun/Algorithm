#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
	char* name[51];
	char grade[3];
	float rate, score, total = 0.0, num = 0.0;
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", name, &score, grade);
		if (grade[0] == 'P') {
			continue;
		}
		num += score;
		if (grade[0] == 'A') {
			rate = 4;
		}
		else if (grade[0] == 'B') {
			rate = 3;
		}
		else if (grade[0] == 'C') {
			rate = 2;
		}
		else if (grade[0] == 'D') {
			rate = 1;
		}
		else if (grade[0] == 'F') {
			continue;
		}
		if (grade[1] == '+') {
			rate += 0.5;
		}
		total += score * rate;
	}
	printf("%f", total / num);
	return 0;
}