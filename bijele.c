//Bijele
#include <stdio.h>

int main()
{
	int king, queen, rooks, bishops, knights, pawns;
	int king1, queen1, rooks1, bishops1, knights1, pawns1;
	
	king = 1;
	queen = 1;
	rooks = 2;
	bishops = 2;
	knights = 2;
	pawns = 8;
	
	scanf("%d", &king1);
	king1 = king - king1;
	printf("%d ", king1);
	
	scanf("%d", &queen1);
	queen1 = queen - queen1;
	printf("%d ", queen1);
	
	scanf("%d", &rooks1);
	rooks1 = rooks - rooks1;
	printf("%d ", rooks1);
	
	scanf("%d", &bishops1);
	bishops1 = bishops - bishops1;
	printf("%d ", bishops1);
	
	scanf("%d", &knights1);
	knights1 = knights - knights1;
	printf("%d ", knights1);
	
	scanf("%d", &pawns1);
	pawns1 = pawns - pawns1;
	printf("%d ", pawns1);
	
	return 0;
}
