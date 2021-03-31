//Trik
#include <stdio.h>
#include <string.h>

int main()
{
	int ball = 1;
	char moves[100];
	size_t len, i;
	
	scanf("%s", moves);
	len = strlen(moves);
	
	for (i = 0; i < len; i++)
	{
		if (moves[i] == 'A')
		{
			if (ball == 1)
			{
				ball++;
				continue;
			}
			if (ball == 2)
			{
				ball--;
				continue;
			}
		}
		else if (moves[i] == 'B')
		{
			if (ball == 2)
			{
				ball++;
				continue;
			}
			if (ball == 3)
			{
				ball--;
				continue;
			}
		}
		else if (moves[i] == 'C')
		{
			if (ball == 1)
			{
				ball = ball + 2;
				continue;
			}
			if (ball == 3)
			{
				ball = ball - 2;
				continue;			
			}
		}		
	}
	
	printf("%d", ball);
	
	return 0; 
}
