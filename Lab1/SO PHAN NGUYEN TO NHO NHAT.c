#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_DIGITS 19
int max_sum = 0;
int divisor(long long n) {
	int res = 0;
	int sqrtN = sqrt(n);
	if (sqrtN * sqrtN == n) {
		res++;
	}
	for (int i = 1; i < sqrt(n); i++) {
		if (n % i == 0) {
			res += 2;
		}
	}
	return res;
}
int max_divisors = -1;
int is_anti_prime(long long n) {
	for (int i = 1; i <= n; i++) {
		int num_divisor = divisor(i);
		if (num_divisor > max_divisors) {
			max_divisors = num_divisor;
		}
	}
	int num_divisors = divisor(n);
	return (num_divisors > max_divisors);
}


long long find(long long n) {
	while (is_anti_prime(n) == 0) {
		n++;
	}
	return n;
	
}
/*
Số nguyên dương N được gọi là phản nguyên tố nếu như số lượng ước số của N lớn hơn số lượng ước số của tất cả các số nguyên dương nhỏ hơn N.

Ví dụ các số phản nguyên tố đầu tiên: 1, 2, 4, 6, 12, 24, …

Cho số nguyên dương X, hãy tìm số phản nguyên tố bé nhất không nhỏ hơn X.

Input:

Dòng đầu ghi số bộ test T (không quá 106)

Mỗi test ghi số nguyên dương X (1 ≤ X ≤ 107)

Output:

Với mỗi test, ghi ra kết quả tính được trên một dòng.

Ví dụ:

Input

Output

1

5

6
*/
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
//		for (long long i = 1; i <= n; i++) {
//			find(n);
//		}
//		int ok = 0;
//		long long x = n + 1;
//		while (ok == 0) {
//			long long num_divisors = divisor(x);
//			if (num_divisors > max_divisors) {
//				printf("%lld\n", x);
//				ok = 1;
//				break;
//			} else {
//				x++;
//			}
//		}
//		printf("%lld\n", find(n));
	for (long long i = 1; i <= n; i++) {
			int num_divisor = divisor(i);
			if (num_divisor > max_divisors) {
				max_divisors = num_divisor;
			}
		}
		int ok = 0;
	while (ok == 0) {
		int divisors = divisor(n);
		if (divisors <= max_divisors) {
			n++;
		}
		else {
			ok = 1;
		}
	}
	printf("%lld\n", n);
	}
	
	
	return 0;
}