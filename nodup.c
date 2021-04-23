#include <stdio.h>  
#include <string.h>  
#include <ctype.h>
       
int main()  
{     
	char string[1000]; 
    char words[100][100];  
    int i = 0, j = 0, k, length, count = 0;  
          
	scanf("%[^\n]s", string);
	
	for (k = 0; string[k] != '\0'; k++)
	{
		if (string[k] != ' ' && string [k] != '\0')
		{
			words[i][j++] = tolower(string[k]);
		}
		else
		{
			words[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	
	length = i+1;  
     
    for(i = 0; i < length; i++)
    {    
        for(j = i+1; j < length; j++)
        {  
			if((strcmp(words[i], words[j]) == 0) && (strcmp(words[j],"0") != 0))
			{  
				count++;   
			}
		}
	}
	
	if (count == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;	
}
