#include <stdio.h>
#include <string.h>
/*

Cho file văn bản VANBAN.in.

Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. Tạm thời chưa xét đến các dấu câu trong bải toán này.

Hãy chuyển tất cả các từ về dạng chữ thường sau đó liệt kê các từ khác nhau xuất hiện trong file VANBAN.in theo thứ tự từ điển.

Input

File VANBAN.in có không quá 200 dòng.

Output

Ghi ra danh sách các từ khác nhau xuất hiện trong file. Mỗi từ trên một dòng theo thứ tự từ điển.

Ví dụ

VANBAN.in
lap trinh Huong doi tuong

lap trinh Huong thanh phan
Output



doi

huong

lap

phan

thanh

trinh

tuong


*/
void tolower(char input[]) {
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
	}
}
int main () {
	FILE *fo = fopen("VANBAN.in", "r");
	char s[1001][1001];
	int current = 0;
	while (fgets(s[current], 1001, fo) != NULL) {
		current++;
	}
	char res[1001][1001];
	int count = 0;
	for (int i = 0; i < current; i++) {
		char *token = strtok(s[i], " ");
		while (token != NULL) {
			strcpy(res[count++], token);
			token = strtok(NULL, " ");
		}
		
	}
	for (int i = 0; i < count; i++) {
		tolower(res[i]);
	}
//	for (int i = 0; i < count; i++) {
//		printf("%s\n", res[i]);
//	}
	for (int i = 0; i < count; i++) {
		int ok = 1;
		for (int j = 0; j < i; j++) {
			if (strcmp(res[i], res[j]) == 0) {
				ok = 0;
			}
		}
		if (ok == 0) {
			printf("%s\n", res[i]);
		}
	}
	
}