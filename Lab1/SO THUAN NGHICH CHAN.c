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

int check_digits(int n) {
	while (n > 0) {
		int	digit = n % 10;
		if (digit % 2 != 0) {
			return 0;
		} 
		n /= 10;
	}
	return 1;
}

int check(int n) {
	int reversed = reverse_number(n);
	int digits = (int)log10(n) + 1;
	if (reversed != n || digits % 2 != 0 || check_digits(n) == 0) {
		return 0;
	} 
	return 1;
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
		for (int i = 2; i < n; i++) {
			if (check(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}