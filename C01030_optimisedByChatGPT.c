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
Khởi tạo n là số nguyên cần phân tích.
Trong khi n chia hết cho 2, in ra 2 và chia n cho 2. Điều này loại bỏ tất cả các thừa số 2 của n.
Sau bước 2, n phải là một số lẻ. Bây giờ bắt đầu một vòng lặp từ i = 3 đến căn bậc hai của n. Trong khi i chia hết cho n, in ra i và chia n cho i. Điều này loại bỏ tất cả các thừa số i của n. Sau khi i không chia hết cho n nữa, tăng i lên 2 và tiếp tục. Điều này giúp bỏ qua các số chẵn trong vòng lặp vì chúng không thể là các thừa số nguyên tố của n.
Điều kiện cuối cùng là để xử lý trường hợp khi n là một số nguyên tố lớn hơn 2. Nếu vậy, in ra n.


/*