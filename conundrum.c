//Cryptographer's Conundrum
#include <stdio.h>
#include <string.h>

int main()
{
	char c[100000000];
	int days = 0;
	size_t i, len;
	
	
	scanf("%s", c);
	len = strlen(c);
	
	for (i = 0; i < len; i += 3)
	{
		if (c[i] != 'P')
		{
			days++;
		}
		if (c[i+1] != 'E')
		{
			days++;
		}
		if (c[i+2] != 'R')
		{
			days++;
		}
	}
	
	printf("%d", days);
	
	return 0;
}
