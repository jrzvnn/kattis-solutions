//I've Been Everywhere, Man
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{	
	int n, t, i, j, count = 0;
	char* city[100];
	char  temp1 = 'o';
	char* temp2 = &temp1;
	
	
	scanf("%d", &t);
	while (t != 0)	
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			city[i] = (char*) malloc(20);
			scanf("%s", city[i]);
		}
	
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (strcmp(city[i], city[j]) == 0)
				{
					city[j] = temp2;
				}
			}
		}
			
		for (i = 0; i < n; i++)
		{
			if (city[i] != temp2)
			{
				count++;
			}
		}
		
		printf("%d\n", count);
		count = 0;
		t--;	
	}
	return 0;
}
