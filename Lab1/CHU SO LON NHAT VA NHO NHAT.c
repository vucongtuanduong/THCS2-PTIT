#include <stdio.h>
#include <string.h>
void print_min_max_digit(long long n) {
	int min_digit = n % 10;
	int max_digit = n % 10;
	while (n > 0) {
		int digit = n % 10;
		if (digit >= max_digit) {
			max_digit = digit;
		} 
		if (digit <= min_digit) {
			min_digit = digit;
		}
		n /= 10;
	}
	printf("%d %d", max_digit, min_digit);
}
/*
Cho số nguyên dương N có ít nhất hai chữ số nhưng không quá 18 chữ số.

Hãy in ra chữ số lớn nhất và nhỏ nhất của N.

Input

Dòng đầu ghi số bộ test.

Mỗi bộ test viết trên 1 dòng số N (10 ≤ N ≤ 1018)

Output

Với mỗi bộ test, viết trên 1 dòng 2 chữ số lớn nhất và nhỏ nhất, cách nhau một khoảng trống.

Chú ý: trong trường hợp tất cả các chữ số bằng nhau thì chữ số lớn nhất và nhỏ nhất đều là chính chữ số đó.

Ví dụ

Input

Output

2

1234

45982

4 1

9 2
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		print_min_max_digit(n);
		printf("\n");
	}
	return 0;
}