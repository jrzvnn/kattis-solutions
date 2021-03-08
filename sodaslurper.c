//Soda Slurper
#include <stdio.h>

int main()
{
	int e, f, c, start, drank, left, total = 0;
	scanf("%d %d %d", &e, &f, &c);
	
	start = e + f;
	while (start >= c)
	{
		drank = start / c;
		left = start % c;
		start = drank + left;
		total += drank;
	}
		
	printf("%d\n", total);

	return 0;
}
