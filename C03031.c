#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

typedef struct Pair{
	int first;
	int second;
}pair;

int gcd(pair a) {
	while (a.second != 0) {
		int r = a.first % a.second;
		a.first = a.second;
		a.second = r;
	}
	return a.first;
}



int main(){

	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		pair x,y;
		scanf("%d %d %d %d", &x.first, &x.second, &y.first, &y.second);
		int uclnX = gcd(x);
		int uclnY = gcd(y);
		if (uclnX == uclnY) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		
	}

	
	
	
	return 0;
}