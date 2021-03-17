//Anthony and Diablo
#include <stdio.h>
#include <math.h>

int main()
{
	float A, N;
	
	scanf("%f %f", &A, &N);
	
	if ((N*N/(4*M_PI))>=A)
	{
		printf("Diablo is happy!");
	}
	else
	{
		printf("Need more materials!");
	}
	
	return 0;
}
