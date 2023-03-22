#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int main() 
 { 
    int test, n; 
    scanf("%d", &test); 

    for (int z = 1; z <= test; z++)
    { 
        printf("Test %d:\n", z);
		scanf("%d", &n); 
        int a[n];
        int sub[n];
        for(int i = 0; i < n; i++) 
        {  
            scanf("%d", &a[i]);
			sub[i] = 1; 
        } 
        for (int i = 0; i < n - 1; i++) {
        	for (int j = i + 1; j < n; j++) {
        		if (a[j] > a[j - 1]) {
        			sub[i]++;
				} else {
					i = j - 1;
					break;
				}
			}
		} 
        int max = -1;// length of max subarray elements
        for (int i = 0; i < n; i++) {
        	if (sub[i] > max) {
        		max = sub[i];
			}
		}
        
        printf("%d\n",max); 
        
        for (int i = 0; i < n; i++) {
        	if (sub[i] == max) {
        		for (int j = i; j < i + max; j++) {
        			printf("%d ",a[j]);
				}
				printf("\n");
			}
			
		}
        printf("\n"); 
        
    }
}