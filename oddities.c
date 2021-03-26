//Oddities
#include <stdio.h>

int main()
{
	int n, x[20], i;
	
	scanf("%d", &n);
	
	for (i=0; i < n; i++)
	{
		scanf("%d", &x[i]);	
	}
	
	for (i=0; i < n; i++)
	{	
		if (x[i] % 2 == 0)
		{
			printf("%d is even\n", x[i]);
		}
		else
		{
			printf("%d is odd\n", x[i]);		
		}
	}
	
	return 0;
}
