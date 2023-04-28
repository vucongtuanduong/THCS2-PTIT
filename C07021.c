#include <stdio.h>
#include <string.h>
int current = 1;
struct sv{
	int id;
	char name[1000];
	double m1;
	double m2;
	double m3;
	double mark;

};

struct sv nhap(int n) {
	struct sv temp;
	temp.id = n;
	scanf("\n");
	gets(temp.name);
	scanf("%lf%lf%lf", &temp.m1, &temp.m2, &temp.m3);
	temp.mark = temp.m1 + temp.m2 + temp.m3;
	return temp;
}	

void sort(struct sv a[], int n) {
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j].mark < a[min].mark) {
				min = j;
			}
		}
		struct sv temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
	
void print(struct sv x) {
	printf("%d %s %.1lf %.1lf %.1lf\n", x.id, x.name, x.m1, x.m2, x.m3);
}

int main () {
	struct sv sv[100];
	int sua[100];
	int dem_sua = 0;
	int current = 0;
	while(1) {
		int mode;
		scanf("%d", &mode);
		if (mode == 1) {
			int n;
			scanf("%d", &n);
			for (int i = 0; i < n; i++) {
				sv[current] = nhap(current + 1);
				current++;
			}
		} else if (mode == 2) {
			int id;
			scanf("%d", &id);
			sua[dem_sua] = id;
			dem_sua++;
			struct sv temp = nhap(id);
			sv[id - 1] = temp;
		} else if (mode == 3) {
			printf("%d\n", current);
			for (int i = 0; i < dem_sua; i++) {
				printf("%d ", sua[i]);
			}
			printf("\n");
			sort(sv, current);
			for (int i = 0; i < current; i++) {
				print(sv[i]);
			}
			break;
		}
	}
}