#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int rows, columns;
		scanf("%d %d", &rows, &columns);
		char a[rows][columns];
		getchar();
		for (int i = 0; i < rows; i++) {
			for (int j =0; j < columns ;j++) {
				scanf("%c", &a[i][j]);
			}
			getchar();
		}
		long long res = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				long long p1 = 0;
				long long p3 = 0;
				if (a[i][j] == '1') {
					for (int h = 0; h < columns; h++) {
						if (a[i][h] == '2') {
							p1++;
						}
					}
					for (int g = 0; g < rows; g++) {
						if (a[g][j] == '2') {
							p3++;
						}
					}
					if (p1 * p3 != 0) {
						res += p1 * p3;
					}
				}
				else if (a[i][j] == '2') {
					for (int h = 0; h < columns; h++) {
						if (a[i][h] == '1') {
							p1++;
						}
					}
					for (int g = 0; g < rows; g++) {
						if (a[g][j] == '1') {
							p3++;
						}
					}
					if (p1 * p3 != 0) {
						res += p1 * p3;
					}
				}
			}
		}
		printf("%lld\n", res);
	}
}