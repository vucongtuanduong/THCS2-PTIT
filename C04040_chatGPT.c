#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        long long max_sum = -1000000000, current_sum = 0;
        for (int i = 0; i < N; i++) {
            int A_i;
            scanf("%d", &A_i);
            current_sum += A_i;
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
            if (current_sum < 0) {
                current_sum = 0;
            }
        }
        printf("%lld\n", max_sum);
    }
    return 0;
}