#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);

    int count = 1;
    char prev = str[0];

    for (int i = 1; i < len; i++) {
      if (str[i] == prev) {
        count++;
      } else {
        printf("%c%d", prev, count);
        count = 1;
      }

      prev = str[i];
    }

    printf("%c%d\n", prev, count);
  }

  return 0;
}
