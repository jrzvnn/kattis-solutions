//Autori
#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	size_t len, i;


	scanf("%s", s);
	len = strlen(s);
	
	for (i = 0; i < len; i++)
	{
		if (s[i] > 64 && s[i] < 91)
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
	
	return 0;
}
