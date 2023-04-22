#include <stdio.h>

struct sv{
	char name[100];
	char dob[100];
	double m1;
	double m2;
	double m3;
	double mark;
	int id;
};

int main () {
	int n;
	scanf("%d", &n);
	double max;
	int count = 1;
	struct sv sv[n];
	for (int i = 0; i < n; i++) {
		sv[i].id = count;
		count++;
		scanf("\n");
		gets(sv[i].name);
		gets(sv[i].dob);
		scanf("%lf %lf %lf", &sv[i].m1, &sv[i].m2, &sv[i].m3);
		sv[i].mark = sv[i].m1 + sv[i].m2 + sv[i].m3;
		if (i == 0) {
			max = sv[i].mark;
		} else {
			if (sv[i].mark > max) {
				max = sv[i].mark;
			}
		}
		
	}

	for (int i = 0; i < n; i++) {
		
		if (sv[i].mark == max) {
			printf("%d %s %s %.1lf\n", sv[i].id, sv[i].name, sv[i].dob, sv[i].mark);
		}
		
	}
	
	
}