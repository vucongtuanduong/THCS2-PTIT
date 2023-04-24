/*
Cho một ký tự S[] chỉ có các chữ số, độ dài không quá 1000, và số nguyên dương N (không quá 9 chữ số). Hãy đếm xem số N xuất hiện bao nhiêu lần trong S[].

Chú ý: các ký tự số không được đếm lặp. Tức là mỗi ký tự chỉ được xét một lần.

Ví dụ: S[] = “1212121112211221121”, N = 121 thì đáp án là 3. 

Input

Dòng đầu ghi số bộ test, không quá 20.

Mỗi test gồm hai dòng, dòng đầu là xâu ký tự S[], dòng sau là số N.

Output

Với mỗi bộ test, ghi ra kết quả tính được trên một dòng.

Ví dụ

Input

Output

2

1212121112211221121

121

2222222222322292

2222

3

2
*/
#include <stdio.h>
#include <string.h>
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char input[1001];
		char number[10];
		scanf("%s", input);
		scanf("%s", number);
		int n = strlen(input);
		int m = strlen(number);		
		int count = 0;
		for (int i = 0; i < n; i++) {
			char temp[10] = {0};
			temp[0] = '\0';
			int current = 0;
			for (int j = i; j < i + m; j++) {
				temp[current] = input[j];
				current++;
			}
			if (strcmp(temp, number) == 0) {
				i += m - 1;
				count++;

			}
			
		}
		printf("%d\n", count);
	}
	
	
}