#include <stdio.h>
#include <math.h>

int main()
{
	int n, points = 0;
	
	scanf("%d", &n);
	
	points = pow((pow(2, n) + 1), 2);
	printf("%d", points);// (2^n + 1)^2
	
	return 0;
}
