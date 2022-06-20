#include <stdio.h>
#define N 20

void Input(int* arr, int len)
{
	for(int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void Print(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

void ArraySort(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for(int j = 0; j < len; j++)
		{
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(int argc, char **argv)
{
	int arr[N];
	Input(arr, N);
	ArraySort(arr, N);
	Print(arr, N);
	return 0;
}

