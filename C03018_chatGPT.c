// A function to check if a number is prime
int checkPrime(int number) {
  int count = 0;
  for(int i=2; i<=number/2; i++) {
    if(number%i == 0) {
      count=1;
      break;
    }
  }
  if(number == 1) count = 1;
  return count;
}

// A function to check if a number is in Fibonacci sequence
int checkFibonacci(int number) {
  int a = 0, b = 1, c = 0;
  while(c < number) {
    c = a + b;
    a = b;
    b = c;
  }
  return c == number;
}

// A function to find the sum of digits of a number
int sumOfDigits(int number) {
  int sum = 0;
  while(number > 0) {
    sum += number %10;
    number /=10;
  }
return sum;  
}

// A function to list beautiful numbers between two integers
void listBeautifulNumbers(int a, int b) {
  
 // Swap a and b if a is greater than b
 if(a > b) {
   int temp = a;
   a = b;
   b = temp; 
 }

 // Loop through the segment [a,b]
 for(int i=a; i<=b; i++) {

   // Check if i is prime and sum of digits is Fibonacci
   if(checkPrime(i)==0 && checkFibonacci(sumOfDigits(i))==1){
     printf("%d ",i); // Print the beautiful number
   }
 }
 printf("\n"); // Print a new line at the end
}

// The main function
int main() {

 // Declare two variables to store the input integers
 int x,y;

 // Read the input from user
 printf("Enter two positive integers not exceeding 1000: ");
 scanf("%d %d",&x,&y);

 // Call the function to list beautiful numbers 
 listBeautifulNumbers(x,y);

 return(0);
}