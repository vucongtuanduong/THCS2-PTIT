#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = - n + 1; i <= n - 1; i++) {
		for (int j = - n + 1; j <= n - 1; j++) {
			if (abs(j) >= abs(i)) {
				printf("%d", abs(j) + 1);
			} else {
				printf("%d", abs(i) + 1);
			}
		}
		printf("\n");
	}
	return 0;
}
/*
This code is written in **C**, which is a general-purpose computer programming language¹. It can be used to develop software like operating systems, databases, compilers, and so on².

The code does the following:

- It includes two header files: `stdio.h` and `math.h`. These files contain predefined functions and macros that can be used in the program. For example, `stdio.h` provides input/output functions like `scanf` and `printf`, and `math.h` provides mathematical functions like `abs`.
- It defines a function called `main`, which is the entry point of the program. This function returns an integer value, which indicates the status of the program execution.
- It declares an integer variable called `n`, which will store the input from the user.
- It uses the `scanf` function to read an integer value from the standard input (usually the keyboard) and store it in `n`. The format specifier `%d` indicates that the input is an integer.
- It uses a `for` loop to iterate from `-n + 1` to `n - 1`, with an increment of 1. The loop variable is `i`, which represents the row number of the output pattern.
- Inside the loop, it uses another `for` loop to iterate from `-n + 1` to `n - 1`, with an increment of 1. The loop variable is `j`, which represents the column number of the output pattern.
- Inside the inner loop, it uses an `if-else` statement to check whether the absolute value of `i` is greater than or equal to the absolute value of `j`. The absolute value of a number is its distance from zero, and it can be obtained using the `abs` function from `math.h`.
- If the condition is true, it uses the `printf` function to print the absolute value of `i` plus one, followed by a space. This means that each row will have a constant value that increases by one as we move away from the center row.
- If the condition is false, it uses the `printf` function to print the absolute value of `j` plus one, followed by a space. This means that each column will have a constant value that increases by one as we move away from the center column.
- After printing each element of a row, it uses the `printf` function to print a newline character (`\n`) to move to the next row.
- After printing all the rows, it returns 0 from the main function, which indicates a successful termination of the program.

The output of this code will depend on the value of `n` entered by the user. For example, if `n` is 3, then the output will be:

```
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
```

This is because:

- The center element is always 1, since both i and j are zero there.
- The elements along the diagonals are equal to i + 1 or j + 1, since either i or j is zero there.
- The elements along the edges are equal to n, since either i or j is equal to -n + 1 or n - 1 there.
- The elements in between are determined by whichever of i or j has a larger absolute value.

I hope this explanation helps you understand how this code works.😊

Source: Conversation with Bing, 3/13/2023(1) C (programming language) - Wikipedia. https://en.wikipedia.org/wiki/C_(programming_language) Accessed 3/13/2023.
(2) Learn C Programming - Programiz: Learn to Code for Free. https://www.programiz.com/c-programming Accessed 3/13/2023.
(3) Learn C | Codecademy. https://www.codecademy.com/learn/learn-c Accessed 3/13/2023.





*/