#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	int fre[1001] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		fre[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (fre[a[i]] > 1) {
			printf("%d ", a[i]);
			fre[a[i]] = -1;//mark as visited
		} 
	}
}