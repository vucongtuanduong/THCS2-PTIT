#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10005
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char s[MAX_SIZE];
		gets(s);
		int length = strlen(s);
		int count = 0;
		int count_even = 0;
		int count_odd = 0;
		for (int i = 0; i <= length; i++) {
			if (s[i] == ' ' || s[i] == '\0') {
				count++;
				if ((s[i - 1] - '0') % 2 == 0) {
					count_even++;
				} else {
					count_odd++;
				}
			}
		}
		if (count % 2 == 0) {
			if (count_even > count_odd) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		} else {
			if (count_odd > count_even) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	
	return 0;
}