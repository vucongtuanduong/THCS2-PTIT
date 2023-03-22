#include <stdio.h>
#include <string.h>
int main(){
	char a[102][100],b[100];
	int pos=0;
	while(scanf("%s",&b)!=-1) strcpy(a[pos++],b);
	for(int i=0;i<pos;i++){
		for(int j=i+1;j<pos;j++){
			if(strcmp(a[j],a[i])==0) a[j][0]=0;
		}
		if(a[i][0]!=0) printf("%s ",a[i]);
	}
}
/*
The code has the following components:

#include <stdio.h>: This is a preprocessor directive that tells the compiler to include the standard input/output header file. This file contains functions for reading and writing data from and to the console2.
#include <string.h>: This is another preprocessor directive that tells the compiler to include the string header file. This file contains functions for manipulating strings, such as copying, comparing, and concatenating2.
int main(): This is the main function of the program. It is where the execution of the program starts and ends2.
char a[102][100],b[100]: These are declarations of two arrays of characters. The array a has 102 rows and 100 columns, and the array b has 100 elements. These arrays are used to store words entered by the user2.
int pos=0: This is a declaration and initialization of an integer variable named pos. It is used to keep track of the number of words stored in the array a2.
while(scanf("%s",&b)!=-1) strcpy(a[pos++],b): This is a while loop that reads a word from the user input and stores it in the array b. Then it copies the word from b to a at the position indicated by pos, and increments pos by one. The loop repeats until the user enters an end-of-file character (Ctrl+D on Linux or Ctrl+Z on Windows), which makes scanf return -12.
for(int i=0;i<pos;i++): This is a for loop that iterates over all the words stored in the array a from index 0 to index pos-12.
for(int j=i+1;j<pos;j++): This is another for loop that iterates over all the words stored in the array a from index i+1 to index pos-12.
if(strcmp(a[j],a[i])==0) a[j][0]=0: This is an if statement that compares two words using the strcmp function. If the words are equal, it sets the first character of the word at index j to zero. This effectively marks the word as a duplicate2.
if(a[i][0]!=0) printf("%s ",a[i]): This is another if statement that checks if the first character of the word at index i is not zero. If it is not, it prints the word to the console using the printf function2.
The output of this code is a list of unique words entered by the user, separated by spaces.


*/