#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];

	int min, secondMin;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		min = a[0];
		if (a[i] < min) {
			min = a[i];
		}
	}
	
	for(int i = 0; i < n; i++) {
		if (a[i] != min) {
			secondMin = a[i];
		}
	}
	
	for (int i = 0; i < n; i++) {
		
		if (a[i] < secondMin && a[i] != min) {
			secondMin = a[i];
		}
	}
	printf("%d %d", min, secondMin);
	
	return 0;
}