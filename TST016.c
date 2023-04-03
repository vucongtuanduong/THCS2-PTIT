#include <stdio.h>
#include <string.h>

#define MAX_CHAR_LENGTH 10000
#define MAX_SPECIAL_CHARACTER 6

char s[MAX_CHAR_LENGTH];
int a[MAX_SPECIAL_CHARACTER] = {0};
int b[MAX_SPECIAL_CHARACTER] = {0};

int check(char s[]) {
	for (int i = 0; i < 3; i++) {
		if (a[i] != b[i]) {
			return 0;//false
		}
	}
	if (a[4] % 2 == 1 || b[4] % 2 == 1) {
		return 0;
	}
	return 1;
}

int main () {
	scanf("%s", s);
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		if (s[i] == '\(') {
			a[1]++;
		} else if (s[i] == '\)') {
			b[1]++;
		} else if (s[i] == '\{') {
			a[2]++;
		} else if (s[i] == '\}') {
			b[2]++;
		} else if (s[i] == '\[') {
			a[3]++;
		} else if (s[i] == '\]') {
			b[3]++;
		} else if (s[i] == '\"') {
			a[4]++;
		} else {
			b[4]++;
		}
	}
	if (check(s)) {
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}