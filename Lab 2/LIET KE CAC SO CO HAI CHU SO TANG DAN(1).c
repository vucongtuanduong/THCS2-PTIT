#include <stdio.h>
#include <string.h>

int main () {
	char s[1001];
	gets(s);
	int a[1001];
	int b[1001] = {0};
	int current = 0;
	for (int i = 0; i < strlen(s); i++) {
//		if ((i + 1) != (strlen(s) - 1)) {//the final number will be erased because have 1 digit
//			break;
//		}
		int x = (s[i] - '0') * 10 + s[i + 1] - '0';
		if (b[x] != 1) {
			a[current++] = x;
			b[x] = 1;//mark as visited
		}
		i++;
	}
	
	for (int i = 1; i < current; i++) {
		for (int j = i + 1; j <= current; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp; 
			}
		}
	}
	for (int i = 0; i < current; i++) {
		printf("%d ", a[i]);
	}
}