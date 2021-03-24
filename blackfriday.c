//Black Friday
#include <stdio.h>

int main()
{
	int n, i, temp=0, k=0;
	int arr[100] = {0, 0, 0, 0, 0, 0};
	int pos[100] = {0, 0, 0, 0, 0, 0};
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[temp-1]++;
		pos[temp-1] = i + 1;
	}
	
	for (i = 5; i >= 0; i--)
	{	
		if (arr[i] ==  1)
		{
			temp = 1;
			k = i;
			break;
		}	
		else
			temp = 2;
	}
	
	switch(temp){
		case 1: 
			printf("%d\n", pos[k]);
			break;
		case 2:
			printf("none\n");
			break;
	}
	
	return 0;
}
