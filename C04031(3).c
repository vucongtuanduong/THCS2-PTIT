#include <stdio.h>
#include <math.h>
int main () {
	int test;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++) {
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		int a[n];
		int sub[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sub[i] = 1;
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] > a[j - 1]) {
					sub[i]++;
				} else {
					i = j - 1;
					break;
				}
			}
		}
		int max_sub = -1;
		for (int i = 0; i < n; i++) {
			if (sub[i] > max_sub) {
				max_sub = sub[i];
			}
		}
		printf("%d\n", max_sub);
		for (int i = 0; i < n; i++) {
			if (sub[i] == max_sub) {
				for (int j = i; j < i + max_sub; j++) {
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	
	return 0;
}