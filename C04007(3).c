#include <stdio.h>


int main () {
	int length_a, length_b;
	scanf("%d %d", &length_a, &length_b);
	int a[length_a];
	int b[length_b];
	for (int i = 0; i < length_a; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < length_b; i++) {
		scanf("%d", &b[i]);
	}	
	int index;
	scanf("%d", &index);
	int res_array[length_a + length_b];
	int count_res = 0;
	for (int i = 0; i < index; i++) {
		res_array[count_res] = a[i];
		count_res++;
	}
	for (int i = 0; i < length_b; i++) {
		res_array[count_res] = b[i];
		count_res++;
	}
	for (int i = index; i < length_a; i++) {
		res_array[count_res] = a[i];
		count_res++;
	}
	for (int i = 0; i < count_res; i++) {
		printf("%d ", res_array[i]);
	}
	return 0;
}