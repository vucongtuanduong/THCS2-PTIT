#include <stdio.h>
#include <math.h>
#include <stdbool.h>



// lam lai lan 1
int main(){
	int n;
	scanf("%d", &n);
	int arr[100000] = {0};
	int x, y;
	
	for (int i = 0; i < n - 1; i++) {
		scanf("%d %d", &x, &y);
		arr[x]++;
		arr[y]++;
	}
	
	for (int i = 0; i < 100000; i++) {
		if (arr[i] == n - 1) {
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	
	
}