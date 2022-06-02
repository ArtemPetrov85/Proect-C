#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void ArrayInvers(int array[], int len)
{	
	for (int i = 0; i < len; i++)
	{
		if (i < len / 2)
		{
			printf("%d ", array[(len - 1) - (len / 2 + i)]);
		}
		else if (i < len)
		{
			printf("%d ", array[(len - 1) + (len / 2 - i)]);
		}
	}
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	ArrayInvers(array, N);
	return 0;
}

