#include <stdio.h>
#include <string.h>

int main () {
	char str[1001];
	gets(str);
	int count_letter = 0;
	int count_number = 0;
	int count_other = 0;
	int n = strlen(str);
	for (int i = 0; i < n; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			count_letter ++;
		} else if ( str[i] >= '0' && str[i] <= '9') {
			count_number ++;
		}
	}
	count_other = n - (count_letter + count_number);
	printf("%d %d %d", count_letter, count_number, count_other);
}