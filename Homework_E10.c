#include <stdio.h>
#define N 12
#define SDVIG 4

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void ArraySdvig(int array[], int len)
{	
	for (int i = 0; i < SDVIG; i++)
	{
		printf("%d ", array[len - (SDVIG - i)]);
	}
	
	for (int i = 0; i < (len - SDVIG); i++)
	{
		printf("%d ", array[i]);
	}
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	ArraySdvig(array, N);
	return 0;
}

