//Ladder
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x;
	
	scanf("%d %d", &a, &b);	
	x = ceil(a / sin(b * M_PI / 180));
	
	printf("%d", x);
	
	return 0;
}
