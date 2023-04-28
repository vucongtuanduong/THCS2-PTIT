#include <stdio.h>
struct sv{
	char name[1000];
	int id;
	double m1;
	double m2;
	double m3;
	double mark;
};

int main () {
	
	int n;
	scanf("%d", &n);
	struct sv sv[n];
	int current = 1;
	for (int i = 0; i < n; i++) {
		scanf("\n");
		gets(sv[i].name);
		scanf("%s", sv[i].dob);
		sv[i].id = current;
		current++;

		scanf("%lf %lf %lf", &sv[i].m1, &sv[i].m2, &sv[i].m3);
		sv[i].mark = sv[i].m1 + sv[i].m2 + sv[i].m3;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (sv[i].mark < sv[j].mark) {
				struct sv temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %s %s %.1lf\n", sv[i].id, sv[i].name, sv[i].dob, sv[i].mark);
	}
}