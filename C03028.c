#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int pascalTriangle(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	} else if (k < 0 || k > n){
		return 0;
	} 
	return pascalTriangle(n - 1, k - 1) + pascalTriangle(n - 1, k);
}

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[10][10];
    
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j <= i; j++) {
    		if (j == 0 || j == i) {
    			arr[i][j] = 1;
			} else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			} 
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}