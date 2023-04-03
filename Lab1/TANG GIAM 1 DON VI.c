#include <stdio.h>
#include <string.h>

/*

Trong lập trình cơ bản, phép toán ++ và -- được sử dụng để tăng hoặc giảm một đơn vị của số nguyên. Cả hai phép toán này đều có thể viết trước hoặc viết sau một biến nguyên. Ví dụ X++; X--; ++X; --X.

Cho trước giá trị X = 0 và một dãy N dòng mô tả các phép toán tăng giảm 1 đơn vị. Hãy tính giá trị cuối cùng của X.

Input

Dòng đầu ghi số N là số phép toán (không quá 100). Tiếp theo là N dòng mô tả các phép toán tăng, giảm 1 đơn vị.

Output

Ghi ra giá trị biến X sau khi kết thúc N phép toán.

Ví dụ

Input

Output

2

X++

--X

0

*/
int main () {
	int test;
	scanf("%d", &test);
	getchar();
	int x = 0;
	while (test--) {
		char command[5];

		gets(command);
		if (strcmp("X++", command) == 0) {
			x++;
			
		} else if (strcmp("X--", command) == 0) {
			x--;
			
		} else if (strcmp("++X", command) == 0) {
			++x;
			
		} else if (strcmp("--X", command) == 0) {
			--x;
			
		}
//		printf("%d\n", x);
	}
	printf("%d", x);
	return 0;
}