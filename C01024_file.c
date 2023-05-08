#include<stdio.h>
#include <stdbool.h>

bool startEndDigit(unsigned int input_number) {
	int startDigit = 0;
	int endDigit = input_number % 10;
	while(input_number > 0) {
		startDigit = input_number % 10;
		input_number /= 10;
	}
	if (startDigit == endDigit) {
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int num_tests;
	FILE *fo = fopen("C01024.txt", "r");
	fscanf(fo, "%d", &num_tests);
	
	bool res[num_tests];
	
	for(int i = 0;i < num_tests; i++) {
		fscanf(fo, "\n");
		
		unsigned int input_number;
		fscanf(fo, "%u", &input_number);
		res[i] = startEndDigit(input_number);
	}
	
	for(int i = 0;i < num_tests; i++) {
		FILE *fw = fopen("C01024_output.txt", "a");
		if (res[i] == true) {
		
			fputs("YES\n", fw);
		} else {
			fputs("NO\n", fw);
		}
		fclose(fw);
	}
	fclose(fo);
	
	return 0;
}