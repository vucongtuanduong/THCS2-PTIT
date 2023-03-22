#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long

typedef struct point {
	int x;
	int y;
} point;



int main(){
	
	int num_test;
	scanf("%d", &num_test);
	
	while (num_test --) {
		point a, b;
		scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
		int firstSide = abs(b.x - a.x);
		int secondSide = abs(b.y - a.y);
		if (firstSide == secondSide) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
	
	
	
	
	return 0;
}