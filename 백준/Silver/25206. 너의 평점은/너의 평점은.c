#include <stdio.h>
#include <string.h>

int main(void) {
	char name[51];
	float score;
	char grade[3];
	float total, avg = 0, num = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", name, &score, grade);
		if (grade[0] == 'P') continue;
		num += score;
		if (grade[0] == 'A') total = 4;
		else if (grade[0] == 'B') total = 3;
		else if (grade[0] == 'C') total = 2;
		else if (grade[0] == 'D') total = 1;
		else if (grade[0] == 'F') continue;
		if (grade[1] == '+') total += 0.5;
		
		avg += score * total;
	}						 
	printf("%f", avg / num);
							 
	return 0;				 
}	