#include <stdio.h>


void change(int n) {
	int count = 1;
	if (n == 1) {
		printf("1\n");
	} else {
		
		while (n != 1) {
			if (n % 2 == 0) {
				n /= 2;
				
			} else {
				n = n * 3 + 1;
			}
			count++;
		}
		printf("%d\n", count);
	}
	
}
int main () {
	int n;
	int ok = 1;
	while (ok == 1) {
		scanf("%d", &n);
		if (n == 0) {
			ok = 0;
			break;
		} else {
			change(n);
		}
	}
	
	return 0;
}