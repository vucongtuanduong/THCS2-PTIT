#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_DIGITS 19



int check(long long n) {
	int digits = (int)log10(n) + 1;
	if (digits <= 3) {
		return 0;
	}
	int index;
	int max = -1;
	while (n > 0) {
		int digit = n % 10;
		if (digit > max) {
			max = digit;
			n /= 10;
		} else if (digit < max) {
			while (n > 0) {
				digit = n % 10;
				n /= 10;
				int current_digit = n % 10;
				if (current_digit >= digit) {
					return 0;
					break;
				} 
				
			}
		} else if (digit == max) {
			return 0;
		}
		
	}
	return 1;
}
/*
Một số nguyên dương được gọi là số tăng giảm nếu thỏa mãn các điều kiện:

Có từ 3 chữ số trở lên
Tìm ra một vị trí trong dãy chữ số sao cho từ bên trái đến vị trí đó thỏa mãn thứ tự tăng dần (tăng chặt) còn từ vị trí đó đến hết thì thỏa mãn thứ tự giảm dần (giảm chặt).
Viết chương trình kiểm tra một số có phải số tăng giảm hay không.

Input

Dòng đầu ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương N không quá 18 chữ số

Output

Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra.

Ví dụ

Input

Ouput

3

12342

23342

5678961

YES

NO

YES
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