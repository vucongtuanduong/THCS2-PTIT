#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int cmp(const void *a, const void *b) {
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char c1[1000], c2[1000], a[100][100], b[100][100];
		gets(c1);
		gets(c2);
		int cnt1 = 0, cnt2 = 0;
		char *token = strtok(c1, " ");
		while (token != NULL) {
			strcpy(a[cnt1], token);
			cnt1++;
			token = strtok(NULL, " ");
		}
		token = strtok(c2, " ");
		while (token != NULL) {
			strcpy(b[cnt2], token);
			cnt2++;
			token = strtok(NULL, " ");
		}
		qsort(a, cnt1, sizeof(a[0]), cmp);
		for (int i = 0; i < cnt1; i++) {
			while (strcmp(a[i], a[i + 1]) == 0) {
				i++;
			}
			int ok = 0;//false
			for (int j = 0 ; j < cnt2; j++) {
				if (strcmp(a[i], b[j]) == 0) {
					ok = 1;
					break;
				}
			}
			if (ok == 0) {
				printf("%s ", a[i]);
			}
			
		}
		printf("\n");
	}
	
}