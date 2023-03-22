#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int tien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int money;
		scanf("%d", &money);
		
		int count = 0;
		if (money >= 1000) {
			count += money / 1000;
			money = money % 1000;
		}
		for (int i = 9; i >= 0; i--) {
			while (money > 0 && money >= tien[i]) {
				count++;
				money -= tien[i];
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}