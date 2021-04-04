//Different Distances
#include <stdio.h>
#include <math.h>

int main()
{
	double x1, x2, y1, y2, p, distance;
	
	while(1)
	{
		scanf("%lf", &x1);
		if (x1 == 0)
			break;
		
		scanf("%lf %lf %lf %lf", &y1, &x2, &y2, &p);	
		distance = pow((pow(fabs(x1-x2), p) + pow(fabs(y1-y2), p)), 1.0/p);
		printf("%.10lf\n", distance);
	}
	
	return 0;
}
