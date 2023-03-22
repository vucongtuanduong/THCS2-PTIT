#include <stdio.h>

// A function to calculate factorial of n
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

// A function to check if n! is divisible by 2^k
void check_divisible(int n, int k)
{
    // Calculate n!
    int f = factorial(n);

    // Calculate 2^k
    int p = 1 << k;

    // Check if f % p == 0
    if (f % p == 0)
        printf("Yes\n");
    else
        printf("No\n");
}

// Driver code
int main()
{
    // Test cases
//    check_divisible(5, 3); // Yes
//    check_divisible(1, 1); // No
	int n, k;
	scanf("%d %d", &n, &k);
	check_divisible(n, k);
    return 0;
}