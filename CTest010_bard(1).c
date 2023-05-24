#include <stdio.h>

int main() {
  int t, i, j, count;
  char str[101];

  scanf("%d", &t);

  while (t--) {
    scanf("%s", str);

    count = 1;
    for (i = 1; str[i] != '\0'; i++) {
      if (str[i] == str[i - 1]) {
        count++;
      } else {
        printf("%c%d", str[i - 1], count);
        count = 1;
      }
    }

    printf("%c%d\n", str[i - 1], count);
  }

  return 0;
}
