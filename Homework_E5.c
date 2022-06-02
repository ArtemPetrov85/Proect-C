#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}


int ArraySum(int array[], int len)
{	
	int sum = 0;
	
	for (int i = 0; i < len; i++)
	{
		if (array[i] > 0)
		{
			sum += array[i];
		}
	}

	return sum;
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	printf("%d", ArraySum(array, N));
	
	return 0;
}

