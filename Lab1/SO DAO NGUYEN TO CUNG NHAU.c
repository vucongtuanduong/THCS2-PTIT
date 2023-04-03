#include <stdio.h>
#include <math.h>
#include <string.h>

int reverse_number (int n) {
	int reversed = 0;
	while (n > 0) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int check_coprime(int a, int b) {
	if (gcd(a, b) == 1) {
		return 1;
	} else {
		return 0;
	}
}

void check(int n) {
	int reversed = reverse_number(n);
	if (check_coprime(n, reversed)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
/*
Trong toán học, cặp số (a,b) được gọi là nguyên tố cùng nhau nếu ước số chung lớn nhất của a và b bằng 1.

Cho số nguyên dương N không quá 9 chữ số. Hãy kiểm tra xem N và số đảo của N có phải là một cặp số nguyên tố cùng nhau hay không.

Input

Dòng đầu ghi số bộ test, không quá 20.

Mỗi bộ test ghi trên một dòng số nguyên dương N, không quá 9 chữ số.

Output

Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra.

Ví dụ

Input

Output

2

123

997

NO

YES
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		check(n);
	}
	return 0;
}