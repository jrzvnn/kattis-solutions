//Batter Up
#include <stdio.h>

int main()
{
	int i, k;
	double out = 0, sum = 0, bat[100], n;
	
	scanf("%lf", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &bat[i]);
	}
	
	k = n;
	for (i = 0; i < k; i++)
	{
		if (bat[i]<0)
		{
			n = n - 1;
			bat[i] = 0;
		}
	}
		
	for (i = 0; i < k; i++)
	{
		sum = sum + bat[i];
	}
	
	out = sum / n;
	printf("%.11lf\n", out);

	return 0;
}
