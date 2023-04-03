#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long

ll gcd(ll a, ll b) {
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;	
	}
	return a;
}

ll lcd(ll a, ll b) {
	ll ucln = gcd(a, b);
	return a * b / ucln;
}






int main(){


	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		ll a, b;
		scanf("%lld %lld", &a, &b);
		
		ll ucln = gcd(a, b);
		ll bcnn = lcd(a, b);
		printf("%lld %lld\n", bcnn, ucln); 
	}
	
	return 0;
}