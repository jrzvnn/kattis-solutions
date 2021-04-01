//Greetings!
#include <stdio.h>
#include <string.h>

int main()
{
	char greet[10000];
	int count = 0;
	size_t len, i, times;
	
	scanf("%s", greet);
	len = strlen(greet);
	
	for (i = 0; i < len; i++)
	{
		if (greet[i] == 'e')
			count++;
	}
	
	times = count * 2;
	
	printf("h");
	for (i=0; i < times; i++)
	{
		printf("e"); 
	}
	printf("y");
	
	return 0;
}
