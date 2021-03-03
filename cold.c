//Cold-puter Science
#include <stdio.h>

int main()
{
	int n, i, arr[100], sum = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);	
		if (arr[i] < 0)
		{
			sum++;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
