#include <stdio.h>
#include <math.h>

int tien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void change_money(int money) {
	int res = 0;
	if (money >= 1000) {
		res += (int)(money / 1000);
		money = money % 1000;
	}
	for (int i = 9; i >= 0; i--) {
		while (money > 0 && money >= tien[i]) {
			money -= tien[i];
			res++;
		}
		
	}
	printf("%d\n", res);
}

//lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int money;
		scanf("%d", &money);
		change_money(money);
	}
	return 0;
}