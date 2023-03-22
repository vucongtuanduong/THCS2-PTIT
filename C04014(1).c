#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100

// lam lai lan 1
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_SIZE]={0};
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
	}
	
	bool ok[MAX_SIZE] = {0};

	
	for (int i = 0; i < n; i++) {

		if (ok[a[i]] == true) {
			continue;
		} else {
			printf("%d %d\n", a[i], fre[a[i]]);
			ok[a[i]] = true;
		}
	}
	
	return 0;
}