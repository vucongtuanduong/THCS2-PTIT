#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

struct Triangle{
	float a, b, c;
	float perimeter;// nua chu vi tam giac
	float area;
};



int main() {
	int n;
	scanf("%d", &n);
	struct Triangle temp, t[n];
	for (int i = 0; i < n; i++)
    {
        scanf("%f%f%f", &t[i].a, &t[i].b, &t[i].c);
        t[i].perimeter = (t[i].a + t[i].b + t[i].c) * 0.5;
    }
    for (int i = 0; i < n; i++) {
    	t[i].area = sqrt(t[i].perimeter * (t[i].perimeter - t[i].a) * (t[i].perimeter - t[i].b) * (t[i].perimeter - t[i].c));
	}
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (t[j].area < t[i].area)
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
    	printf("%1.f %1.f %1.f\n", t[i].a, t[i].b, t[i].c);
	}
        
    
	return 0;
}
