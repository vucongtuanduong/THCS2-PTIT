#include <stdio.h>
#include <math.h>
#define MAX_VALUE 100000

int prime[MAX_VALUE] = {0};
void era() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(MAX_VALUE); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j < MAX_VALUE; j += i) {
				prime[j] = 1;
			}
		}
	}
}

int main () {
	
	
	era();
	int n;
	scanf("%d", &n);
	int a[n];
	int res[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);	
		if (prime[a[i]] == 0) {
			res[count++] = a[i];
		}
	}
	printf("%d ", count);
	for (int i = 0; i < count; i++) {
		printf("%d ", res[i]);
	}
	
		
	return 0;
}