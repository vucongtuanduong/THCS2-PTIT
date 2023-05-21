#include <stdio.h>

int main() {
  int t, i, j, n, flag = 0;
  char num[61];

  scanf("%d", &t);

  while (t--) {
    scanf("%s", num);
    n = strlen(num);

    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        if (num[j] != num[j % n]) {
          flag = 1;
          break;
        }
      }

      if (flag) {
        break;
      }
    }

    if (flag) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }

    flag = 0;
  }

  return 0;
}
