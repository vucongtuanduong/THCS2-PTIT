#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	if (n < 2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}


int main () {
	int test;
	FILE *fo = fopen("C01026.txt", "r");
	fscanf(fo, "%d", &test);
	while (test--) {
		int n;
		FILE *fw = fopen("C01026_output.txt", "a");
		fscanf(fo, "%d", &n);
		if (is_prime(n) == 1) {
			fputs("YES\n", fw);
		} else {
			fputs("NO\n",fw);
		}
		fclose(fw);
	}
	fclose(fo);
	return 0;
} 