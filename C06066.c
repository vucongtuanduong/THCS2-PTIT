#include <stdio.h>
#include <string.h>

#define MAX_CHAR_LENGTH 205

long long sum_halves(char number[]) {
	int length = strlen(number);
	int mid = length / 2;
	int length_right = length - mid + 1;
	char left[mid + 1];
	char right[length_right];
	strncpy(left, number, mid);
	left[mid] = '\0';
	strcpy(right, number + mid);
	right[length - mid] = '\0';
	long long left_num = atoll(left);
	long long right_num = atoll(right);
	return left_num + right_num;
}

void split_half(char number[]) {
	
	while (strlen(number) > 1) { // loop until the string has only one character
    	long long sum = sum_halves(number);// get the sum of the two halves of the string
    	sprintf(number, "%lld", sum); // convert the sum to a string and store it in the original string
    	printf("%s\n", number); // print the new string
  	}	
}

int main() {
	char str[MAX_CHAR_LENGTH];
	
	gets(str);

	split_half(str);
	
	return 0;
}