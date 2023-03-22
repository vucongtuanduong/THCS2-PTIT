#include <stdio.h>
// A function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// A function to check if a number is valid after cutting
int isValid(int n) {
    while (n > 0) {
        int d = n % 10; // get last digit
        if (d != 0 && d != 1 && d !=8 && d !=9) { // if digit is not valid
            return 0; // return false
        }
        n /= 10; // remove last digit
    }
    return 1; // return true
}

// A function to cut a number horizontally and return the upper half
int cut(int n) {
    int res = 0; // initialize result variable
    while (n > 0) {
        int d = n % 10; // get last digit
        switch (d) { // assign value for each digit after cutting
            case 0:
            case 1:
                res = res *10 + d; // append same digit to result 
                break;
            case 8:
            case 9:
                res = res *10 +0; // append zero to result 
                break;
            default:
                break;
        }
        n /=10; // remove last digit 
    }
    res = reverse(res); // reverse the result 
    return res; // return the result 
}

int main() {
    int t; // declare test cases variable 
    scanf("%d", &t); // read test cases from input 
    while (t--) { // loop for each test case 
        long long int n; // declare input number variable 
        scanf("%lld", &n); // read input number from input 
        int c = cut(n); // call cut function and store result in c variable 
        if (isValid(c)) { // check if c is valid or not 
            printf("%d\n", c); // print c as output 
        } else { 
            printf("INVALID\n"); // print INVALID as output  
        }
        
    }
    
}