#include <stdio.h>
#include <string.h>
#define MAX 1005
int prime[MAX] = {0};
void era() {
	prime[0] = prime[1] = 1;
	for (int i = 0; i <= sqrt(MAX); i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j < MAX; j += i) {
				prime[j] = 1;
			}
		}
	}
}
int main () {
	int n;
	scanf("%d", &n);
	era();
	int a[n][n];
	int max = 0;
	int b[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (prime[a[i][j]] == 0) {
				count++;
			}
		}
		b[i] = count;
		if (count > max) {
			max = count;
		}
	}
	for (int i = 0; i < n; i++) {
		if (b[i] == max) {
			printf("%d\n", i + 1);
			for (int j = 0; j < n; j++) {
				if (prime[a[i][j]] == 0) {
					printf("%d ", a[i][j]);
				}
			}
			return 0;
		}
	}
	
	
}