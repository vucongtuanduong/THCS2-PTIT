#include <stdio.h>
#include <string.h>
char a[11] = "0123456789";
void check(char s[])
{
    int d[1000] = {}, n = strlen(s), x = 0;
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0] == '0')
        {
            printf("INVALID\n");
            return;
        }
        if (s[i] < '0' || s[i] > '9')
        {
            printf("INVALID\n");
            return;
        }
        if ((s[i] - '0') % 2 == 0) {
        	count_even++;
		} else {
			count_odd++;
		}
    }
    if (n % 2 == 0) {
    	if (count_even > count_odd) {
    		printf("YES\n");
		} else {
			printf("NO\n");
		}
	} else {
		if (count_odd > count_even) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[1005];
        scanf("%s", a);
        check(a);
    }
}