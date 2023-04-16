#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
char a[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int b[7] = {1, 5, 10, 50, 100, 500, 1000};
int find (char c) {
	for (int i = 0; i < 7; i++) {
		if (a[i] == c) {
			return b[i];
		}
	}
	return 0;
}
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char input[MAX_LENGTH];
		gets(input);
		int n = strlen(input);
		int k1, k2;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			k1 = find(input[i]); 
			k2 = 0;
			if (i != n - 1) {
				k2  = find(input[i + 1]);
			}
			if (k1 < k2) {
				ans += k2 - k1;
				i++;
			} else {
				ans += k1;
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}