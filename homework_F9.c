#include <stdio.h>
#define N 10

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void PrintArray(int * arr, int len)
{
	for(int i = 0; i < len; i++)
		{
			printf("%d ", arr[i]);
		}
}

void Replace(int arr[], int n)
{
	int min = -9999;
	int pos = n - 1;
	int temp = 0;
	
	for(int j = 0; j < n; j++)
	{
		if(arr[j] > min && arr[j] < 0)
		{
			min = arr[j];
			pos = j;
		}
	}
	
	if(pos < n - 1)
	{
		temp = arr[pos];
		arr[pos] = arr[n - 1];
		arr[n - 1] = temp;
	}
}

int main(int argc, char **argv)
{
	int array[N] = {0}; 
	
	Input(array, N);
	Replace(array, N);
	PrintArray(array, N);
	return 0;
}

