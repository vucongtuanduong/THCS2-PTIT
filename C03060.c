#include<stdio.h>
#include <math.h>
#include <stdbool.h>

void divisible(int n, int k) {
	int m;//temp variable
	int count = 0;
	for(int i = 2; i <= n; i++) {
		m = i;
		while (m % 2 == 0) {
			count++;
			if (count == k) {
				break;
			}
			m /= 2;
		}
		if (count == k) {
			break;
		}
	}
	if (count == k) {
		printf("Yes");
	} else {
		printf("No");
	}
}



int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	divisible(n, k);
	
	return 0;
}