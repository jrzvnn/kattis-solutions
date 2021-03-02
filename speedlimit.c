// Speed Limit

#include <stdio.h>

int main()
{
	int n=0, i, t=0, s=0, d=0, t2=0;
	
	scanf("%d", &n);
	while (n != -1)
	{	
		
		for (i=0 ; i<n; i++)
		{
			scanf("%d %d", &s, &t);
			if (t > t2)
			{
				d += s*(t-t2); 
			}	
			t2 = t;	
		}
		printf("%d miles\n", d);
		d=0, t2=0;	
		scanf("%d", &n);		
	}
	return 0;
}

 

/*
  You can change line 7 and 22 with 'if(scanf("%d", &n)){};' and 
  line 13 with 'if(scanf("%d %d", &s, &t)){};' to prevent this 
  output.
  
  
 ./speedlimit.c: In function 'main':
./speedlimit.c:7:9: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
    7 |  (void) scanf("%d", &n);
      |         ^~~~~~~~~~~~~~~
./speedlimit.c:13:11: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
   13 |    (void) scanf("%d %d", &s, &t);
      |           ^~~~~~~~~~~~~~~~~~~~~~
./speedlimit.c:22:10: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
   22 |   (void) scanf("%d", &n);
      |  
 */
