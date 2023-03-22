#include <stdio.h>
#include<stdbool.h>

// A function that returns true if n is palindrome
int isPalindrome(int n)
{
    // Find reverse of n
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;

    // If n and rev are same, then n is palindrome
    return (n==rev);
}

// A function that returns true if n does not contain digit d
int noDigit(int n, int d)
{
    // Check each digit of n
    for (int i = n; i > 0; i /= 10)
        // If any digit matches d, return false
        if (i%10 == d)
            return false;

    // If no digit matches d, return true
    return true;
}

// A function that returns true if sum of digits of n is divisible by k
int sumDivisible(int n, int k)
{
    // Initialize sum of digits
    int sum = 0;

    // Calculate sum of digits
    for (int i = n; i >0; i /=10)
        sum += i%10;

    // Check divisibility by k using modulo operator (%)
    return (sum % k ==0);
}

// A function that prints all lucky numbers with N digits 
void printLucky(int N)
{
   // Start from first possible number with N/2 digits 
   int start = pow(10,(N-1)/2);

   // End at last possible number with N/2 digits 
   int end = pow(10,(N+1)/2)-1;

   // Generate all possible numbers with half size 
   for (int i=start; i<=end; i++)
   {
      // If current number has any digit as '4', skip it 
      if (!noDigit(i ,4))
         continue;

      // Create first half palindrome 
      int firstHalfPalin= createPalindrome(i,N%2);

      // Check whether second half palindrome makes lucky numbr or not 
      if(sumDivisible(firstHalfPalin ,10))
         printf("%d ",firstHalfPalin);
   }
}

// A utility function to create odd size palindromic numbers 
int createPalindrome(int input,int bOdd) 
{ 
   int num=input;
   int palin=input;
   
   // Checks whether bOdd flag set or not  
   if(bOdd)  
       num=num/10;
   
   while(num>0)  
   {  
       palin=palin*10+(num%10);  
       num=num/10;  
   }  
   
return palin;  
} 

// Driver program to test above function 
int main()
{
     int T,N;
     scanf("%d",&T); /*Enter total test cases*/
     while(T--)
     {
          scanf("%d",&N); /*Enter value of N*/
          printLucky(N); /*Print all lucky numbers with N digits*/
          printf("\n"); /*Print new line after each test case*/
     }
     return 0;
 }