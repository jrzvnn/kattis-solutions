//Filip
#include <stdio.h>

int main()
{
	int A, B, rem, flipA = 0, flipB = 0;

	scanf("%d %d", &A, &B);
	
	while (A != 0)
	{
		rem = A % 10;
		flipA = flipA * 10 + rem;
		A = A / 10;
	}
	
	while (B != 0)
	{
		rem = B % 10;
		flipB = flipB * 10 + rem;
		B = B / 10;
	}
	
	if (flipA > flipB)
		printf("%d\n", flipA);
	else
		printf("%d\n", flipB);
	
	return 0;
}
