#include <stdio.h>
#include <math.h>

#define MAX_CHAR_LENGTH 1000

int main () {
	char a[MAX_CHAR_LENGTH][MAX_CHAR_LENGTH];
	int n = 0;
	while (scanf("%s", &a[n]) != -1) {
		int length = strlen(a[n]);
		for (int i = 0; i < length; i++) {
			if (a[n][i] >= 'A' && a[n][i] <= 'Z') {
				a[n][i] += 32;
			}
		}
		n++;
	}
	for (int i = 0; i < n; i++)
    {
        if (a[i][0] != 0)
        {
            int s = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    s++;
                    a[j][0] = 0;
                }
            }
            printf("%s %d\n", a[i], s);
        }
    }
	
	return 0;
}