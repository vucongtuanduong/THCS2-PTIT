#include <stdio.h>

// A function to find the greatest common divisor of two numbers
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

// A function to check if two numbers are coprime
int coprime(int x, int y)
{
    return gcd(x, y) == 1;
}

// A function to print all coprime pairs in an interval
void print_coprime_pairs(int a, int b)
{
    // Loop through all possible pairs
    for (int i = a; i <= b; i++)
    {
        for (int j = i + 1; j <= b; j++)
        {
            // Check if they are coprime
            if (coprime(i, j))
            {
                // Print them in the format (i,j)
                printf("(%d,%d)\n", i, j);
            }
        }
    }
}

// The main function
int main()
{
    // Declare and read two positive integers a,b satisfying 2<a<b<100
    int a, b;
    printf("Enter two positive integers a,b satisfying 2<a<b<100: ");
    scanf("%d %d", &a, &b);

    // Print all coprime pairs in the interval [a,b]
    printf("The coprime pairs in [%d,%d] are:\n", a, b);
    print_coprime_pairs(a, b);

    return 0;
}
/*
First, I include the standard input/output library to use the printf and scanf functions.
Then, I define a function called gcd that takes two integers x and y as parameters and returns their greatest common divisor using a recursive algorithm based on Euclid’s method.
Next, I define a function called coprime that takes two integers x and y as parameters and returns 1 if they are coprime (i.e., their greatest common divisor is 1) or 0 otherwise. This function uses the gcd function to check the condition.
After that, I define a function called print_coprime_pairs that takes two integers a and b as parameters and prints all coprime pairs in the interval [a,b] in ascending order. This function uses a nested loop to iterate over all possible pairs of numbers in the interval and calls the coprime function to check if they are coprime. If they are, it prints them in the format (i,j) using printf.
Finally, I define the main function that declares and reads two positive integers a,b satisfying 2<a<b<100 from the user using scanf. Then it calls the print_coprime_pairs function with a and b as arguments to print all coprime pairs in the interval [a,b].

*/