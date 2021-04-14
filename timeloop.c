//Stuck In a Time loop
#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	for (i = 0; i <  n; i++)
	{
		printf("%d Abracadabra\n", i + 1);
	}
	
	return 0;
}
