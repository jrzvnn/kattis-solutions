//Patuljci
#include <stdio.h>

void two_fake_dwarfs(int* arr, int sum);

int i, j, k;

int main()
{
	int sum = 0;
    int arr[10];
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    two_fake_dwarfs(arr, sum);
	
	return 0;
}

void two_fake_dwarfs(int* arr, int sum)
{
    for (i = 1; i < 9; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (sum - arr[i] - arr[j] == 100)
            {
                for (k = 0; k < 9; k++)
                {
                    if (k != i && k != j) 
						printf("%d\n", arr[k]);
                }
            }
        }
    }
}
