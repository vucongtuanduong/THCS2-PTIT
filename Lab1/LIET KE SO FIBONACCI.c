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
Cho hai số nguyên dương a và b (1 <= a < b < 93). Viết chương trình liệt kê các số Fibonacci từ số thứ a đến số thứ b.

Input

Dòng đầu ghi số bộ test, không quá 10.

Mỗi bộ test viết trên một dòng hai số a và b.

Output

Ghi ra kết quả của mỗi test trên một dòng, mỗi số cách nhau một khoảng trống.

Ví dụ

Input

Output

1

1 10

1 1 2 3 5 8 13 21 34 55
*/
int main () {
	int test;
	scanf("%d", &test);
	initialise_fibo();
	while (test--) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++) {
			printf("%lld ", fibo[i]);
		}
		printf("\n");
	}
	return 0;
}