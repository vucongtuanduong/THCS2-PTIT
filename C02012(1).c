#include <stdio.h>



/*

4 4

1234 i = 1; tang 3 lan

2123 ; i = 2; tang 2 lan;


3212 ; i = 3; tang 1 lan

4321

4 6

123456

212345

321234

432123

6 4

1234

2123

3212

4321

5432

6543

 




*/
int main() {
	
	
	int rows, columns;
	scanf("%d %d", &rows, &columns);
	
	for (int i = 1; i <= rows; i++) {
		int init = i;
		for (int j = 1; j <= columns; j++) {
			if (j < i) {
				printf("%d", init--);
			} else {
				printf("%d", init++);
			}
			
		} 
		printf("\n");
	}
	
	return 0;
}