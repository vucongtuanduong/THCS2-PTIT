#include <stdio.h>
#define MAX_VALUE 100000
int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[MAX_VALUE] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
	}


	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 0) {
			printf("%d %d\n", a[i], fre[a[i]]);
			fre[a[i]] = -1;
		}
	}
	return 0;
}