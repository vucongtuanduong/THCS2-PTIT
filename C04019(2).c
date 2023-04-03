#include <stdio.h>
#include <math.h>

#define MAX_ARR_VALUE 30005

//lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int max_fre = -1;
		int fre[MAX_ARR_VALUE] = {0};
		for (int i = 0 ; i < n; i++) {
			scanf("%d", &a[i]);
			fre[a[i]]++;
		}
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] > max_fre) {
				max_fre = fre[a[i]];
			}
		}
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] == max_fre) {
				printf("%d ", a[i]);
				fre[a[i]] = -1;//mark as visited
			}
		}
		printf("\n");
	}
	return 0;
}