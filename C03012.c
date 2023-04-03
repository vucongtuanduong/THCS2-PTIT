#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long
bool isFibonacci(int n) {
	ll f1 = 1;
	ll f2 = 1;
	
	while (f2 <= n) {
		ll temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}
	return (f1 == n || f2 == n);
	
}

int main() {
  
  	int n;
  	scanf("%d", &n);
  	
  	if (isFibonacci(n)) {
  		printf("1");
	  } else {
	  	printf("0");
	  }

  	return(0);
}