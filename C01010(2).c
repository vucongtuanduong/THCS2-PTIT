#include <stdio.h>

// lam lai lan 2
int main () {
	int days;
	scanf("%d", &days);
	int years = days / 365;
	int week = (days % 365) / 7;
	int remain_day = (days % 365) % 7;
	printf("%d %d %d", years, week, remain_day);
	return 0;
}