#include <stdio.h>
#include<math.h>

struct point{
	double x;
	double y;
	
};

double length(struct point a, struct point b){
	double length = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
//	printf("%d - %d\n", b.x, a.x);
//	printf("%d - %d\n", b.y, a.y);
	return length;
}
void input_point(struct point a) {
	scanf("%d %d", &a.x, &a.y);
}
int check_valid_triangle(double length1, double length2, double length3){
	if (length1 + length2 > length3 && length2 + length3 > length1 && length1 + length3 > length2) {
		return 1;
	}
	return 0;
}
double triangle_perimeter(double length1, double length2 , double length3) {
	double p = (length1 + length2 + length3) * 1.0;
	double s = sqrt(p * (p - length1) * (p - length2) * (p - length3));
	return p;
}
void implements(double length1, double length2, double length3) {
	if (check_valid_triangle(length1, length2, length3) == 0) {
		printf("INVALID");
	} else {
		printf("%.3lf", triangle_perimeter(length1, length2, length3));
	}
}
int main() {
	
	int test;
	scanf("%d", &test);
	while (test--) {
		struct point points[3];
		for (int i = 0; i < 3; i++) {
			scanf("%lf %lf", &points[i].x, &points[i].y);
		}
		double length1 = length(points[0], points[1]);
		double length2 = length(points[1], points[2]);
		double length3 = length(points[0], points[2]);
		implements(length1, length2, length3);
		printf("\n");
	}
	
}