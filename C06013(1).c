#include <stdio.h>
#include <string.h>

int main () {
	int test;
	scanf("%d\n", &test);
	char p[11] = "0123456789";
	while (test--) {
		char s[1001];
		scanf("%s", s);
//		printf("%s\n", s);
		int fre[10] = {0};
		int ok = 1;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] < '0' || s[i] > '9' || s[0] == '0') {
				printf("INVALID\n");
				ok = 0;
				break;
			} else {
				
				for (int j = 0; j < strlen(p); j++) {
					if (s[i] == p[j]) {
						fre[j]++;
					}
				}
			}
		}
		if (ok ==  1) {
			for (int i = 0; i < 10; i++) {
				if (fre[i] < 1) {
					printf("NO\n");
					ok = 0;
					break;
				} 
			}
		}
		
		if (ok == 1) {
			printf("YES\n");
		}
	}
}