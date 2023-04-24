/*
Cho hai số nguyên a, b. Nhiệm vụ của bạn là tìm bội số chung nhỏ nhất và ước số chung lớn nhất của a và b. Bội số chung nhỏ nhất của a và b ký hiệu là LCM(a, b) và ước số chung lớn nhất của a và b ký hiệu là GCD(a,b).

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
T dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một cặp số a, b được viết cách nhau một vài khoảng trống.
T, a, b thỏa mãn ràng buộc: 1≤T≤100; 1≤a, b≤108;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input

Output

2

5    10

14  8

10  5

56  2
*/
#include <stdio.h>

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b) {
	long long ucln = gcd(a, b);
	return a * b / gcd(a, b);
}

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", lcm(a, b), gcd(a, b));
	}
	
	
}