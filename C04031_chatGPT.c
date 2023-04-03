#include <stdio.h>
#define MAX 100

int main() {
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int a[MAX];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int max_length = 0;
        int start[MAX], end[MAX], count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                int j = i + 1;
                while (j < n - 1 && a[j] < a[j + 1]) j++;
                if (j - i + 1 > max_length) {
                    max_length = j - i + 1;
                    count = 0;
                    start[count] = i;
                    end[count++] = j;
                } else if (j - i + 1 == max_length) {
                    start[count] = i;
                    end[count++] = j;
                }
                i = j;
            }
        }
        printf("Test %d:\n%d\n", test, max_length);
        for (int k = 0; k < count; k++) {
            for (int l = start[k]; l <= end[k]; l++) printf("%d ", a[l]);
            printf("\n");
        }
    }
    return 0;
}