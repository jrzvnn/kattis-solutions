//Death Knight Hero
#include <stdio.h>
#include <string.h>

int main()
{
	int i, n = 0, won = 0;
	char k[10000];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", k);
		if (strstr(k, "CD") == NULL) 
			won++;
	}
	printf("%d\n", won);
	
	return 0;
}
