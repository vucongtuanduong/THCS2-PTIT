#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long

//so co 3 uoc so la so chinh phuong co can bac hai la so nguyen to

bool isPrime(ll n) {
	if (n < 2) {
		return false;
	} else {
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

bool check(ll n) {
	int sqrtN = sqrt(n);
	
	if (sqrtN * sqrtN == n && isPrime(sqrtN)) {
		return true;
	} else {
		return false;
	}
}


int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	while (num_test --) {
		ll l, r;
		scanf("%lld %lld", &l, &r);
		int count = 0;
		for(ll i = l; i <= sqrt(r); i++) {
			if(isPrime(i)) {
				count++;
			}
			
		}
		printf("%d\n", count);
	}
	
	
	
	return 0;
}