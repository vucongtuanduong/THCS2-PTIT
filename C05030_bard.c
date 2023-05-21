#include <stdio.h>

int main() {
  int t, n, m, i, j, k, count = 0;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &n, &m);
    int matrix[n][m];
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        scanf("%d", &matrix[i][j]);
      }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
          for (int k = j + 1; k < m; k++) {
            if (matrix[i][k] != 0 && matrix[i][j] != matrix[i][k]) {
              for (int l = 0; l < n; l++) {
                if (matrix[l][k] == matrix[i][j]) {
                  count++;
                  break;
                }
              }
            }
          }
        }
      }
    }
    printf("%d\n", count);
    count = 0;
  }
  return 0;
}
