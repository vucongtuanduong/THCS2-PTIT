#include <stdio.h>
#include <string.h>

int main(){
	char str[10000];
	gets(str);
	int n = strlen(str);
	int countLetter = 0, countNumber = 0, countSpecial = 0;
	for (int i = 0; i < n; i++) {
		if (str[i]>= 65 && str[i] <= 90) {
			countLetter++;// uppercase letter
		}
		else if (str[i] >= 48 && str[i] <= 57) {
			countNumber++;//number from 0-9
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			countLetter++;//lowercase letter
		}
		else {
			countSpecial++;
		}
		
	}
	printf("%d %d %d", countLetter, countNumber, countSpecial);
	return 0;
}