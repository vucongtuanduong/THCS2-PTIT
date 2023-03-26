#include <stdio.h>

#define MAX_ELEMENTS 1000005
/*

Cho luồng dữ liệu văn bản chỉ bao gồm các số nguyên dương không quá 18 chữ số. Hãy tìm và in ra giá trị số lớn nhất.

Chú ý: bạn cần đọc đến hết luồng dữ liệu vào.

Input

Luồng văn bản với không quá 1 triệu số nguyên dương. Các số đều không quá 18 chữ số.

Output

Ghi ra số lớn nhất tìm được

Ví dụ

Input

Output

23 545 64334 465 3

54 34 999 11111111111

11111111111

 



*/
int main () {
	long long input_number;
	long long max;
	int i = 1;
	while (scanf("%lld", &input_number) == 1) {
		if (i == 1) {
			max = input_number;
			i--;
		} else {
			if (input_number > max) {
				max = input_number;
			}
		}
		
	}
	printf("%lld", max);
	return 0;
}