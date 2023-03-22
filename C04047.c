#include <stdio.h>

#define MAX_PEOPLE 10000
struct people {
	int t;
	int d;
};

struct people temp, p[MAX_PEOPLE];



//void swap(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}


void sort(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (p[i].t > p[j].t)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main () {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &p[i].t, &p[i].d);
	}
	sort(n);
	int sum = p[1].t;
	p[n + 1].t = 0;
	for (int i = 1; i <= n; i++) {
		sum += p[i].d;
		if (sum < p[i + 1].t) {
			sum = p[i + 1].t;
		}
	}
	printf("%d", sum);
	
	return 0;
}