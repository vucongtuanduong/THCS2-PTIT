#include <stdio.h>

struct product{
	char name[100];
	char type[100];
	double buy;
	double sell;
	double profit;
	int id;
};
int cmp(struct product a, struct product b)
{
    if (a.profit < b.profit)
        return 1;
    return 0;
}
void swap(struct product *a, struct product *b)
{
    struct product c = *a;
    *a = *b;
    *b = c;
}

int main () {
	int n;
	scanf("%d", &n);
	
	int count = 1;
	struct product products[n];
	for (int i = 0; i < n; i++) {
		products[i].id = count;
		count++;
		scanf("\n");
		gets(products[i].name);
		gets(products[i].type);
		scanf("%lf %lf", &products[i].buy, &products[i].sell);
		products[i].profit =  products[i].sell - products[i].buy;
	}

	for (int i = 0; i < n; i++) {
		
		for (int j = i + 1; j < n; j++) {
			if (cmp(products[i], products[j])) {
				swap(&products[i], &products[j]);
			}
		}
		
	}
	for (int i = 0; i < n; i++) {
		printf("%d %s %s %.2lf", products[i].id, products[i].name, products[i].type, products[i].profit);
		printf("\n");
	}
	
}