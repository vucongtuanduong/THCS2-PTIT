#include <stdio.h>

/*

Cho luồng dữ liệu vào gồm tối đa 10 triệu số nguyên dương, các số đều không quá 8 chữ số. Hãy in ra số lớn nhất và số nhỏ nhất

Input

Luồng dữ liệu vào chỉ bao gồm các số nguyên dương không quá 18 chữ số.

Cần đọc đến hết luồng.

Output

Ghi số số lớn nhất, một khoảng trống, sau đó đến số nhỏ nhất.

Ví dụ

Input

Ouput

323 545 5464354

3 4343 423 623

53523 24 23 23 2 52 9999

5464354 2

*/
int main () {
	long long input_number;
	long long max;
	long long min;
	int i = 1;
	while (scanf("%lld", &input_number) == 1) {
		if (i == 1) {
			max = input_number;
			min = input_number;
			i--;
		} else {
			if (input_number > max) {
				max = input_number;
			}
			if (input_number < min) {
				min = input_number;
			}
		}
		
	}
	printf("%lld %lld", max, min);
	return 0;
}