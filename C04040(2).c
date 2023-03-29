#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100005
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		int a[MAX_SIZE];
		int n;
		scanf("%d", &n);
		long long max_sum = -1000000;
		long long current_sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			current_sum += a[i];
			if (current_sum < 0) {
				current_sum = 0;
			} else if (current_sum > max_sum) {
				max_sum = current_sum;
			}
		}
		printf("%lld\n", max_sum);
	}
	
	return 0;
}