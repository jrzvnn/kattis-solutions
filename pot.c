//Pot
#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, x = 0, p[10000], lastDigit[10000], output[10000];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		lastDigit[i] = p[i] % 10; 
		p[i] /= 10; 
	}
	
	for (i = 0; i < n; i++)
	{
		output[i] = pow(p[i], lastDigit[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		x += output[i];
	}
	
	printf("%d\n", x);
	
	return 0;
}
