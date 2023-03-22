#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define ll long long

//chua giai xong




int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	int sqrtA = sqrt(a);
	int sqrtB = sqrt(b);
	
	int count = 0;
	
	if (sqrtA * sqrtA != a) {
		sqrtA ++;
	}
	
	int res[1000000] = {};
	
	for(int i = sqrtA; i <= sqrtB; i++) {
		res[count] = i * i;
		count++; 
	}
	
	
	printf("%d\n", count);
	for(int i = 0; i < count; i++) {
		printf("%d\n", res[i]);
		
	}
	
	
	return 0;
}