#include<stdio.h>
#include<string.h>
#include<ctype.h>

void standardize_low (char dest[]) {
	dest[0] = toupper(dest[0]);
	for (int i = 1; i < strlen(dest); i++) {
		dest[i] = tolower(dest[i]);
	}
}

void standardize_up(char dest[]) {
	for (int i = 0; i < strlen(dest); i++) {
		dest[i] = toupper(dest[i]);
	}
}

void print(char input[]) {
	char res[20][50];
	int count = 0;
	char *token = strtok(input, " ");
	while (token != NULL) {
		strcpy(res[count], token);
		count++;
		token = strtok(NULL, " ");
	}
	standardize_up(res[0]);
	for (int i = 1; i < count; i++) {
		standardize_low(res[i]);
		if (i != count - 1) {
			printf("%s ", res[i]);
		} else {
			printf("%s", res[i]);
		}
		
	}
	printf(", %s", res[0]);
	printf("\n");
}

int main(){
    int test;
    scanf("%d", &test);
    scanf("\n");
    while (test--) {
    	char input[81];
		gets(input);	
		print(input);
	}
}