#include <stdio.h>

long UocSo;
void USCLN(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	UocSo = a;
}


int main()
{
	long a, b;
	
	scanf("%ld%ld",&a, &b);
	if(a> 0 && b>0)
	{
		USCLN(a,b);
		printf("%ld\n%lld", UocSo, (long long) a*b/UocSo);
	}
}