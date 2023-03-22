#include<stdio.h>
#include<math.h>

typedef struct point{
	int x;
	int y;
}point;
//lam lai lan 1
int main(){
	int testCase;
	scanf("%d", &testCase);
	
	while (testCase--) {
		point a, b;
		scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
		int length = abs(b.x - a.x);
		int width = abs(b.y - a.y);
		
		if (length == width) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
	
	return 0;
}