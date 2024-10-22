#include <stdio.h>
long long int LCM(long long int a, long long int b);
long long int gcd(long long int a, long long int b);

int main(void) {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", LCM(a, b));

				 
	return 0;				 
}			

long long int gcd(long long int a, long long int b) {
	if (b == 0) return a;
	else gcd(b, a % b);
}

long long int LCM(long long int a, long long int b) {
	return a * b / gcd(a, b);
}