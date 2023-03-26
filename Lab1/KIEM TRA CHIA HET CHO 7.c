#include <stdio.h>
#include <string.h>

long long reverse_number (long long n) {
	if (n < 10) {
		return n;
	} else {
		long long res = 0;
		while (n > 0) {
			res = res * 10 + n % 10;
			n /= 10;
		}
		return res;
	}
	
}

void check(long long n) {
	int count = 1;
	long long sum = n;
	int ok = 0;
	while (count <= 1000) {
		
		if (sum % 7 == 0 && sum >= 0) {
			printf("%lld\n", sum);
			ok = 1;
			break;
			
		} else {
			long long reversed = reverse_number(sum);
			sum += reversed;
			if (sum < 0) {
				break;
			}
		}
		count++;
	}
	if (ok != 1) {
		printf("-1\n");
	}
	
}
/*
Cho một số nguyên dương N. Mỗi bước bạn thực hiện tính tổng của N với giá trị số đảo ngược của N. Bạn sẽ dừng lại khi gặp giá trị chia hết cho 7 hoặc khi đã thực hiện quá 1000 bước lặp.

Hãy tính giá trị chia hết cho 7 tìm được theo thủ tục trên hoặc ghi ra -1 nếu không thể tìm ra đáp án.

Input:

Dòng đầu ghi số bộ test (không quá 1000).

Mỗi test ghi số N (1 ≤ N ≤ 1018)

Output:

Ghi ra giá trị chia hết cho 7 đầu tiên tìm được. Hoặc số -1 nếu không thể tìm được đáp án.

Ví dụ:

Input

Output

5

1

2

3

4

999999

77

77

9447438

77

999999

Giải thích test 1: 1 à 2 à 4 à 8 à 16 à 77
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		check(n);
		

	}
	return 0;
}