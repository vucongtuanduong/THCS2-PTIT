#include<stdio.h>

long long gcd(long long a, long long b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcd(long long a, long long b) {
	long long ucln = gcd(a, b);
	long long bcnn = a * b / ucln;
	return bcnn;
}

int main(){
	
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long ucln = gcd(a, b);
	long long bcnn = a * b / ucln;
	printf("%lld\n%lld", ucln, bcnn);
	
//	printf("%d", ucln);
	
	return 0;
}