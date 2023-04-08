#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 15

int check_increase(char str[MAX_CHAR], int n) {

	for (int i = 6; i < 8; i++) {
		if (str[i + 1] <= str[i]) {
			return 0;
		}
	}
	if (str[11] <= str[10]) {
		return 0;
	}
	return 1;
}
int check_all_equal(char str[MAX_CHAR], int n) {
	for (int i = 6; i < 8; i++) {
		if (str[i + 1] != str[i]) {
			return 0;
		}
	}
	for (int i = 9; i < 11; i++) {
		if (str[i + 1] != str[6]) {
			return 0;
		}
	}
	return 1;
}

int check68(char str[MAX_CHAR], int n) {
	for (int i = 6; i < 12; i++) {
		if (str[i] == '.') {
			continue;
		} else {
			if ((str[i] - '0') != 6 && (str[i] - '0') != 8)  {
				return 0;
			}
		}
		
	}
	return 1;
}

int check_first_3digits(char str[MAX_CHAR], int n) {
	for (int i = 6; i < 8; i++) {
		if (str[i + 1] != str[i]) {
			return 0;
		}
	}
	return 1;
}
int check_last_2digits(char str[MAX_CHAR], int n) {
	for (int i = 10; i < 11; i++) {
		if (str[i + 1] != str[i]) {
			return 0;
		}
	}
	return 1;
}

int check_more(char str[MAX_CHAR], int n) {
	if (check_first_3digits(str, n) == 1 && check_last_2digits(str, n) == 1) {
		return 1;
	} else {
		return 0;
	}
}
int check(char str[MAX_CHAR], int n) {
	if (check_increase(str, n) || check_more(str, n) || check68(str, n) || check_all_equal(str, n)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main ()  {
	int test;
	scanf("%d", &test);
	getchar();
	while (test--) {
		char str[MAX_CHAR];
		fgets(str, MAX_CHAR, stdin);
		int n = strlen(str);
		if (check(str, n)) {
			printf("YES\n");
			
		} else {
			printf("NO\n");
		}
	}
	return 0;
}