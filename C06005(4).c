#include <stdio.h>
#include <string.h>
void to_lower(char s[]) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
}
int main () {
	char s[10001];
	gets(s);
	char res[1001][1001];
	int count = 0;
	char *token = strtok(s, " ");
	while (token != NULL) {

		strcpy(res[count], token);
		to_lower(res[count]);
		count++;
		
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < count; i++) {
		int ok = 1;
		int dem = 1;
		for (int j = 0; j < i ; j++) {
			if (strcmp(res[i], res[j]) == 0) {
				ok = 0;
			}
		}
		if (ok == 1) {
			for (int j = i + 1; j < count; j++) {
				if (strcmp(res[i], res[j]) == 0) {
					dem++;
				}
			}
			printf("%s %d\n", res[i], dem);
		}
	}
}