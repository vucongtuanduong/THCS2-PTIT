#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_CHAR_LENGTH 10005
#define MAX_SPECIAL_CHAR 6

int pair1[MAX_SPECIAL_CHAR] = {0}, pair2[MAX_SPECIAL_CHAR] = {0};
void implement(char str[MAX_CHAR_LENGTH]) {
	int n = strlen(str);
	for (int i = 0; i < n; i++) {
		if (str[i] == '\(') {
			pair1[0]++;
		} else if (str[i] == '\)') {
			pair2[0]++;
		} else if (str[i] == '\[') {
			pair1[1]++;
		} else if (str[i] == '\]') {
			pair2[1]++;
		} else if (str[i] == '\{') {
			pair1[2]++;
		} else if (str[i] == '\}') {
			pair2[2]++;
		} else if (str[i] == '\"') {
			pair1[3]++;
		} else {
			pair2[3]++;
		}
	}
}

int check(int pair1[MAX_SPECIAL_CHAR], int pair2[MAX_SPECIAL_CHAR]) {
	for (int i = 0; i < 3; i++) {
		if (pair1[i] != pair2[i]) {
			return 0;
		}
	}
	if (pair1[3] % 2 == 1 || pair2[3] % 2 == 1) {
		return 0;
	}
	return 1;
}

// lam lai lan 1
int main () {
	char str[MAX_CHAR_LENGTH];
	scanf("%s", str);
	implement(str);
	printf("%d", check(pair1, pair2));
	return 0;
}