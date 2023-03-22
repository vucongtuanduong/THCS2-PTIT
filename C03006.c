#include <stdio.h>
#include <math.h>

// A function to print prime factors of a number
void print_prime_factors(int num)
{
    
	for(int i = 2; i <= sqrt(num); i++) {
    	int count = 0;
		while (num % i == 0){
    		count++;
    		num /= i;
		}
		if (count > 0) {
			printf("%d(%d) ", i, count);
		}
	}
	if (num != 1) {
		printf("%d(1)", num);
	}
	printf("\n");
}

int main()
{
   int t; // Number of test cases


   scanf("%d", &t); // Read number of test cases
	int count = 1;
   while (t--)
   {
   		int n;
       scanf("%d", &n); // Read input number
       
       printf("Test %d: ", count);
       print_prime_factors(n); // Call function to print prime factors
       count++;
   }

   return(0);
}