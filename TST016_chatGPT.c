#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a stack node structure
typedef struct node {
    char data;
    struct node* next;
} node;

// Push a new node to the top of the stack
void push(node** top, char data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

// Pop the top node from the stack and return its data
char pop(node** top) {
    if (*top == NULL) {
        return '\0'; // Return null character if stack is empty
    }
    node* temp = *top;
    char data = temp->data;
    *top = temp->next;
    free(temp);
    return data;
}

// Check if a character is an opening bracket
bool is_opening(char c) {
    return c == '(' || c == '{' || c == '[' || c == '\'' || c == '"';
}

// Check if a character is a closing bracket
bool is_closing(char c) {
    return c == ')' || c == '}' || c == ']' || c == '\'' || c == '"';
}

// Check if two characters are matching brackets
bool is_matching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']') ||
           (open == '\'' && close == '\'') ||
           (open == '"' && close == '"');
}

// Check if a string is balanced
bool is_balanced(char* str) {
    node* stack = NULL; // Initialize an empty stack
    for (int i = 0; str[i] != '\0'; i++) { // Loop through the string
        char c = str[i];
        if (is_opening(c)) { // If it is an opening bracket, push it to the stack
            push(&stack, c);
        }
        else if (is_closing(c)) { // If it is a closing bracket, pop from the stack and check if they match
            char open = pop(&stack);
            if (!is_matching(open, c)) { // If they don't match, return false
                return false;
            }
        }
    }
    return stack == NULL; // Return true if the stack is empty, false otherwise
}

int main() {
    char str[100]; // Declare a string of size 100
    printf("Enter a string of brackets: ");
    scanf("%s", str); // Read the string from input
    bool result = is_balanced(str); // Check if the string is balanced
    printf("%d\n", result); // Print 1 if balanced, 0 otherwise
    return 0;
}