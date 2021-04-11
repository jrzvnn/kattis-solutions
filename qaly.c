//Quality-Adjusted Life-Year
#include <stdio.h>

int main()
{
	int n;
	float q, y, total = 0.0;
	
	scanf("%d", &n);
	while (n != 0)
	{
		scanf("%f %f", &q, &y);
		total += q * y;
		n--;
	}
	
	printf("%.3f", total);
	
	return 0;
}
