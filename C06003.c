#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d\n", &n);
	
	while (n--) {
		char str[200];
		gets(str);
		int count = 1;
		int length = strlen(str);
		for (int i = 0; i < length; i++) {
			if (str[i] != ' '  && str[i - 1] == ' ') {
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}