#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n) {
	int x = -1;
	while (n > 0) {
		int digit = n % 10;
		
		if (digit <= x) {
			return false;
		}
		x = digit;
		n /= 10;
	}
	return true;
}
//lam lai lan 1
int main() {
    int t; // number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int a, b; // range [a,b]
        scanf("%d%d", &a, &b);
        int count = 0;
		for(int i = a; i <= b; i++) {
        	if (check(i)) {
        		count++;
			}
			
		}
		printf("%d\n", count);
        
    }
    
    return 0;
}