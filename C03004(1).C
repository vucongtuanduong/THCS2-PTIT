#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define ll long long 

long long gcd(ll a, ll b) {
	while (b != 0){
		ll r = a  % b;
		a = b;
		b = r;
	}
	
	return a;
}

long long lcd(ll a, ll b) {
	ll ucln = gcd(a, b);
	return a * b / ucln;
}

//LAM LAI LAN 1
int main(){
	
	ll a, b;
	scanf("%lld%lld", &a, &b);
	ll ucln = gcd(a, b);
	long long bcnn = lcd(a, b);
	
	printf("%lld\n%lld", ucln, bcnn);
	
	return 0;
}