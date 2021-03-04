//Electrical Outlets
#include <stdio.h>

int main()
{
	int i, n, j, k, arr[100], out[100], sum=0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &arr[j]);
			sum = (sum + arr[j])-1;
		}
		out[i] = sum;
		sum = 0;
	}
	
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", out[i] + 1);
		
	}
	
	return 0;
}
