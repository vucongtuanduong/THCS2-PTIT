#include <stdio.h>
#include <math.h>

struct fraction{
	int denominator;
	int numerator;
};

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int lcd(int a, int b)  {
	int ucln = gcd(a, b); 
	return a * b / ucln;
}
struct fraction *create_fraction() {
	struct fraction *p = malloc(sizeof(struct fraction));
	return p;
}
void scan_two_fractions(struct fraction *p, struct fraction *q) {
	scanf("%d %d %d %d", &p->denominator, &p->numerator, &q->denominator, &q->numerator);
}
struct fraction *simplify_fraction(struct fraction *p) {
	int common_factor = gcd(p->denominator, p->numerator);
	p->denominator /= common_factor;
	p->numerator /= common_factor;
	return p;
}
void common_numerator(struct fraction *p, struct fraction *q) {
	p = simplify_fraction(p);
	q = simplify_fraction(q);
	int common_numerator = lcd(p->numerator, q->numerator);
	p->denominator *= (common_numerator / p->numerator);
	p->numerator = common_numerator;
	q->denominator *= (common_numerator / q->numerator);
	q->numerator = common_numerator;	
	printf("%d/%d %d/%d", p->denominator, p->numerator, q->denominator, q->numerator);
}

void sum_fraction(struct fraction *p, struct fraction *q) {
	struct fraction *sum = malloc(sizeof(struct fraction));
	sum->denominator = p->denominator + q->denominator;
	sum->numerator = p->numerator;
	sum = simplify_fraction(sum);
	printf("%d/%d", sum->denominator, sum->numerator);
}

void divide_fraction(struct fraction *p, struct fraction *q) {
	struct fraction *division = malloc(sizeof(struct fraction));
	division->denominator = p->denominator * q->numerator;
	division->numerator = p->numerator * q->denominator;
	division = simplify_fraction(division);
	printf("%d/%d", division->denominator, division->numerator);
}

int main () {
	int test;
	scanf("%d", &test);
	for (int z = 1; z <= test; z++) {
		printf("Case #%d:\n", z);
		struct fraction *p = create_fraction();
		struct fraction *q = create_fraction();
		scan_two_fractions(p, q);
		common_numerator(p, q);
		printf("\n");
		sum_fraction(p, q);
		printf("\n");
		divide_fraction(p, q);
		printf("\n");
	}
	
	return 0;
}