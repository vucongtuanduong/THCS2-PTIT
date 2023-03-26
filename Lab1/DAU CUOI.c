#include <stdio.h>
#include <math.h>
#include <string.h>

int check(long long n) {
	int digits = (int)log10(n) - 1;
	int last_digit = (n % 10) + ((n / 10) % 10) * 10;
	int first_digit = n / (pow(10, digits));
	if (first_digit != last_digit) {
		return 0;
	} else {
		return 1;
	}
}
/*
Viết chương trình kiểm tra xem số nguyên dương N có thỏa mãn tính chất: nếu ta lấy hai chữ số đầu và hai chữ số cuối của nó thì sẽ tạo ra số có hai chữ số giống nhau hay không?

Input

Dòng đầu ghi số số test (không quá 20). Mỗi test là 1 số nguyên dương N có ít nhất 4 chữ số, nhưng không quá 18 chữ số.

Output

Ghi ra YES hoặc NO

Ví dụ

Input

Output

3

12321

1234512

10233211111
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (check(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}