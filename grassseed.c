//Grass Seed Inc.
#include <stdio.h>

int main()
{
	int n, i;
	double cost, w, l, area = 0.0;
	
	scanf("%lf", &cost);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf", &w, &l);
		area += (w * l);
	}
	
	printf("%.8lf\n", cost * area);
	
	return 0;
}
