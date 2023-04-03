#include <stdio.h>
#include <string.h>

int main()
{
    // declare a char array to store input string
    char input[101];
    // read input string using scanf
    scanf("%s", input);
    
    // declare another char array to store output string
    char output[201];
    // initialize output string with empty string
    output[0] = '\0';
    
    // declare two variables: current character and its count
    char curr_char = input[0];
    int curr_count = 1;
    
    // loop through each character of input string
    for (int i = 1; i < strlen(input); i++)
    {
        // if current character is different from previous one
        if (input[i] != curr_char)
        {
            // append previous character and its count to output string
            sprintf(output + strlen(output), "%c%d", curr_char, curr_count);
            // reset current character and its count with new one
            curr_char = input[i];
            curr_count = 1;
        }
        else // if current character is same as previous one
        {
            // increment current count by one
            curr_count++;
        }
    }
    
    // append last character and its count to output string
    sprintf(output + strlen(output), "%c%d", curr_char, curr_count);
    
    // print output string
    printf("%s\n", output);
    
    return 0;
}