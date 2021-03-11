//Pet
#include <stdio.h>

int main()
{
	int a[10], b[10], c[10], d[10], sum[10], i;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		sum[i] = a[i] + b[i] + c[i] + d[i];
	}
	
	if (sum[0] >= sum[1] && sum[0] >= sum[2] && sum[0] >= sum[3] && sum[0] >= sum[4])
		printf("1 %d", sum[0]);
	
	else if (sum[1] >= sum[0] && sum[1] >= sum[2] && sum[1] >= sum[3] && sum[1] >= sum[4])
		printf("2 %d", sum[1]);
	
	else if (sum[2] >= sum[0] && sum[2] >= sum[1] && sum[2] >= sum[3] && sum[2] >= sum[4])
		printf("3 %d", sum[2]);
	
	else if (sum[3] >= sum[0] && sum[3] >= sum[1] && sum[3] >= sum[2] && sum[3] >= sum[4])
		printf("4 %d", sum[3]);
	
	else if (sum[4] >= sum[0] && sum[4] >= sum[1] && sum[4] >= sum[2] && sum[4] >= sum[3])
		printf("5 %d", sum[4]);
	
	return 0;
}
