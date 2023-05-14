#include <stdio.h>
#include <math.h>
#include <stdbool.h>





//lam lai lan 1
int main(){
	
	int test;
	FILE *fo = fopen("C04008.txt", "r");
	fscanf(fo, "%d", &test);
	fscanf(fo, "\n");
	for (int i = 1; i <= test; i++) {
		FILE *fw = fopen("C04008_output.txt", "a");
		fprintf("Test %d:\n", i, fw);
		int lengthA, lengthB;
		fscanf(fo, "%d %d", &lengthA, &lengthB);
//		printf("%d %d", lengthA, lengthB);
		int index;
		fscanf(fo, "\n");
		fscanf(fo, "%d", &index);
		int a[lengthA], b[lengthB];
		
		for (int i = 0; i < lengthA; i++){
			fscanf(fo, "%d", &a[i]);
		}
		fscanf(fo, "\n");
		for(int i = 0; i < lengthB; i++) {
			fscanf(fo, "%d", &b[i]);
		}
		
		
		
		for(int i = 0; i < index; i++) {
			fprintf("%d ", a[i], fw);
		}
		
		for(int i = 0; i < lengthB; i++) {
			fprintf("%d ", b[i], fw);
		}
		
		for(int i = index; i < lengthA; i++) {
			fprintf("%d ", a[i], fw);
		}
		fprintf("\n", fw);
	}
	
	
	
	return 0;
}