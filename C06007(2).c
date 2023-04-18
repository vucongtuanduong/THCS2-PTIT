#include <stdio.h>
#include <string.h>
int current = 0;
void delete_word(char input[], char deleted_word[]) {
	char *p = strtok(input, " ");

	
	while (p != NULL) {
		
		if (strcmp(p, deleted_word) != 0){
			printf("%s ", p);
		} 
		
		p = strtok(NULL, " ");
	}

}

int main () {
	
	char input[101];
	char deleted_word[101];
	gets(input);
	gets(deleted_word);
	delete_word(input, deleted_word);
	
}