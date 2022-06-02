#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void ArraySdvig(int array[], int len)
{	
	printf("%d ", array[len - 1]);
	
	for (int i = 0; i < len; i++)
	{
		if (i != (len - 1))
		{
			printf("%d ", array[i]);
		}
	}
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	ArraySdvig(array, N);
	return 0;
}

