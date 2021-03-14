//ABC
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[3], temp, i, j;
	char str[3];
	
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	scanf("%s", str);
	
	for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
	
	if(strcmp(str, "ABC") == 0) 
	{
		printf("%d %d %d", arr[0], arr[1], arr[2]);
    }
    if(strcmp(str, "ACB") == 0) 
	{
		printf("%d %d %d", arr[0], arr[2], arr[1]);
    }
    if(strcmp(str, "BAC") == 0) 
	{
		printf("%d %d %d", arr[1], arr[0], arr[2]);
    }
	if(strcmp(str, "BCA") == 0) 
	{
		printf("%d %d %d", arr[1], arr[2], arr[0]);
    }
    if(strcmp(str, "CAB") == 0) 
	{
		printf("%d %d %d", arr[2], arr[0], arr[1]);
    }
    if(strcmp(str, "CBA") == 0) 
	{
		printf("%d %d %d", arr[2], arr[1], arr[0]);
    }   

	return 0;
}
