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
	int temp = 0;
	int nechet = 0;
	int count = 0;
	
	for(int k = 0; k < len; k++)
	{
		if (arr[k] % 2 != 0)
			nechet++;
	}
	
	for (int i = 0; i < len; i++)
	{
		if(arr[i] % 2 == 0)
		{
			temp = arr[i];
			
			for (int k = i; k > count; k--)
			{
				arr[k] = arr[k - 1];
			}
			
			arr[count++] = temp;
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

