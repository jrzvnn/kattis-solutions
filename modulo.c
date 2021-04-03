//Modulo
#include <stdio.h>

int main()
{
	int input[100], mod[100], i, j, count = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input[i]);
		mod[i] = input[i] % 42;
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (mod[i] == mod[j])
			{
				mod[j] = -1;
			}
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		if (mod[i] != -1)
		{
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
