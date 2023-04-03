#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_PEOPLE 10005
struct people{
	int t;
	int d;
};
struct people people[MAX_PEOPLE], temp;
void sort(int num) {
	int min_index;
	for (int i = 0; i < num - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < num; j++) {
			if (people[j].t < people[min_index].t) {
				min_index = j;
			}
		}
		if (min_index != i) {
			temp = people[i];
			people[i] = people[min_index];
			people[min_index] = temp;
		}
	}
}


// lam lai lan 1
int main () {
	int num;
	scanf("%d", &num);
	for (int  i = 0; i < num; i++) {
		scanf("%d %d", &people[i].t, &people[i].d);
	}
	sort(num);
	int sum = people[0].t;
	people[0].t = 0;
	for (int i = 0; i < num; i++) {
		sum += people[i].d;
		if (sum < people[i + 1].t) {
			sum = people[i + 1].t;
		}
	}
	printf("%d", sum);
	return 0;
}