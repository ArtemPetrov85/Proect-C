#include <stdio.h>
#define N 12

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
		if (i < len / 3)
		{
			printf("%d ", array[(len - 1) - (((len / 3) * 2) + i)]);
		}
		else if (i >= len / 3 && i < len - (len / 3))
		{
			printf("%d ", array[(len - 1) - (len / 3) + (len - ((len / 3) * 2) - i)]);
		}
		else
		{
			printf("%d ", array[(len - 1) + (((len / 3) * 2) - i)]);
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

