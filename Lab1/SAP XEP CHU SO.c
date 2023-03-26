#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 19

void print(long long n) {
	int a[MAX_DIGITS];
	int i = 0;
	int count = 0;
	while (n > 0) {
		a[i] = n % 10;
		n /= 10;
		i++;
		count++;
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = i; j < count; j++) {
			if (a[j] <= a[i]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		if (a[i] != 0) {
			printf("%d", a[i]);
		}
	}
}
/*
Cho số nguyên dương N có không quá 18 chữ số. Hãy sắp xếp các chữ số của N theo thứ tự tăng dần từ trái sang phải để tạo một số mới và in kết quả ra màn hình.

Input

Dòng đầu ghi số bộ test (không quá 10)

Mỗi bộ test viết trên một dòng số nguyên dương N có không quá 18 chữ số

Output

Với mỗi bộ test, viết ra số tạo được sau khi đã sắp xếp các chữ số.

Chú ý: Bỏ qua các chữ số 0 ở đầu (nếu có).

Ví dụ

Input



2

347120

44774477
Output
12347

44447777
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		print(n);
		printf("\n");
	}
	return 0;
}