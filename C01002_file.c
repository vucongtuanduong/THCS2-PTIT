#include<stdio.h>

int main(){
	int test;
	FILE *fo = fopen("C01002.txt", "r");
	
	fscanf(fo, "%d", &test);
	
	
	while (test--) {
	    long long input;
	    
	    fscanf(fo, "%lld", &input);
	    printf("%lld\n", input);
	    FILE *fw = fopen("C01002_output.txt", "w");
	    fprintf(fw, "%lld", input * 2);
	    fclose(fw);
	}
	fclose(fo);
	return 0;
}