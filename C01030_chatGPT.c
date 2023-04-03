#include <stdio.h>
#include <math.h>

// A function to print all prime factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
}

/* Driver program to test above function */
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("The prime factors of %d are: \n", n);
    
    primeFactors(n);
    
    return 0;
}
/*
Một cách tiếp cận là sử dụng vòng lặp while để kiểm tra xem số nguyên có chia hết cho 2 hay không. Nếu có, thì in ra 2 và chia số nguyên cho 2. Sau đó, bắt đầu một vòng lặp từ i = 3 đến căn bậc hai của số nguyên. Trong khi i chia hết cho số nguyên, in ra i và chia số nguyên cho i. Sau khi i không chia hết cho số nguyên nữa, tăng i lên 2 và tiếp tục
*/