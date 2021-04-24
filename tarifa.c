//Tarifa 
#include <stdio.h>

int main()
{
	int x, n, p, i, total = 0;
	
	scanf("%d", &x);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p);
		total = (total + x) - p;
	}
	
	printf("%d", total + x);
	
	return 0;
}
