#include <stdio.h>
#include <string.h>
int main()
{
    char a[201];
    gets(a);
    int n = strlen(a);
    while (n != 1)
    {
        int check = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                int num = a[n / 2 - 1 - i];
                a[n / 2 - 1 - i] = a[n - 1 - i] - '0' + a[n / 2 - 1 - i];
                if (a[n / 2 - 1 - i] - '0' < 10)
                {
                    if (check == 1 && a[n / 2 - 1 - i] != '9')
                        a[n / 2 - 1 - i]++;
                    else if (check == 1 && a[n / 2 - 1 - i] == '9')
                    {
                        a[n / 2 - 1 - i] = 10;
                        check = 2;
                    }
                    else
                        check = 0;
                }
                if (a[n / 2 - 1 - i] - '0' >= 10 || check == 2)
                {
                    if (check != 2)
                    {
                        a[n / 2 - 1 - i] = a[n - 1 - i] - '0' + num - '0';
                        a[n / 2 - 1 - i] = a[n / 2 - 1 - i] %10 + '0';
                        if (check == 1)
                            a[n / 2 - 1 - i]++;
                    }
                    else
                    {
                        a[n / 2 - 1 - i] = a[n / 2 - 1 - i] %10 + '0';
                    }
                    if (n / 2 - 1 - i == 0)
                    {
                        for (int q = n / 2; q >= 0; q--)
                        {
                            if (q == 0)
                                a[q] = '1';
                            else
                                a[q] = a[q-1];
                        }
                    }
                    check = 1;
                    continue;
                }
                check = 0;
            }
            if (check != 1)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    printf("%c",a[i]);
                }
            }
            else
            {
                for (int i = 0; i < n /2 +1; i++)
                {
                    printf("%c",a[i]);
                }
            }
            if (check !=1)
                n /=2;
            else
                n = n/2 +1;
        }
        else
        {
            int sum = a[n/2];
            if (sum-'0'==0)
            {
                for (int i=n/2;i<strlen(a)-1;i++)
                {
                    a[i]=a[i+1];
                }
                n--;
                continue;
            }
            else
            {
                for (int i=0;i<=n/2;i++)
                {
                    if(i==n/2)
                        a[n/2-i]=sum;
                    else
                        a[n/2-i]=a[n-1-i]-'0' + a[n / 2 - 1 - i];
                        if (a[n / 2 - i] - '0' < 10) {
  if (check == 1 && a[n / 2 - i] - '0' != 9)
    a[n / 2 - i]++;
  else if (check == 1 && a[n / 2 - i] - '0' == 9) {
    a[n / 2 - i] = 10;
    check = 2;
  } else
    check = 0;
}
if (a[n / 2 - i] - '0' >= 10 || check == 2) {
  if (i != n / 2) {
    if (check != 2) a[n / 2 - i] = a[n / 2 - 1 - i] - '0' + a[n - 1 - i] - '0';
    a[n / 2 - i] = a[n / 2 - i] % 10 + '0';
    if (check == 1) a[n / 2 - i]++;
  } else if (i == n / 2) {
    for (int q = n / 2 + 1; q >= 0; q--) {
      if (q == 0)
        a[q] = '1';
      else if (q == 1)
        a[q] = '0';
      else
        a[q] = a[q - 1];
    }
  }
  check = 1;
  continue;
}
check = 0;
}
if (check == 1) {
  for (int i = 0; i <= n / 2 + 1; i++) {
    printf("%c", a[i]);
  }
  n = n / 2 + 2;
} else {
  for (int i = 0; i <= n / 2; i++) {
    printf("%c", a[i]);
  }
  n = n / 2 + 1;
}
}
}
printf("\n");
}
}