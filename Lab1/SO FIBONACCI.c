#include <stdio.h>
#include <string.h>

long long fibo[93];

void initialise_fibo() {
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= 92; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}
/*

Dãy số Fibonacci được định nghĩa theo công thức như sau:

F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 với n>2
Viết chương trình tính số Fibonacci thứ n (với n không quá 92)

Dữ liệu vào: Dòng đầu ghi số bộ test. Mỗi bộ test là một số nguyên n.

Kết quả: Với mỗi bộ test, ghi ra số Fibonacci thứ n trên một dòng.

Ví dụ

Input


3

2

5

20
Output

1

5

6765
*/
int main () {
	int test;
	scanf("%d", &test);
	initialise_fibo();
	while (test--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", fibo[n]);
	}
	return 0;
}