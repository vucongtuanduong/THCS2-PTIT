#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int rb = 0, re = n - 1, cb = 0, ce = n - 1, x = 1, a[n][n];
    while (rb <= n / 2 && cb <= n / 2)
    {
        for (int i = cb; i <= ce; i++)
        {
            a[rb][i] = x;
            x++;
        }
        for (int j = rb + 1; j <= re; j++)
        {
            a[j][ce] = x;
            x++;
        }
        for (int i = ce - 1; i >= cb; i--)
        {
            a[re][i] = x;
            x++;
        }
        for (int j = re - 1; j >= rb + 1; j--)
        {
            a[j][cb] = x;
            x++;
        }
        rb++;
        re--;
        cb++;
        ce--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}