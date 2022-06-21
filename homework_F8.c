#include <stdio.h>
#define N 1000

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		
		if (arr[i] == 0)
			break;
	}
}

void ArraySort(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if(arr[i] != 0)
		{
			for(int j = 0; j < len; j++)
			{
				if(arr[j] != 0)
				{
					if(arr[i] < arr[j])
					{
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			break;
		}
	}
}

void Skip(int arr[], int n)
{
	int skip = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			if(arr[i] + 1 < arr[i + 1])
			{
				skip = arr[i] + 1;
			}
		}
		else
		{
			break;
		}
	}
	printf("%d", skip);
}

int main(int argc, char **argv)
{
	int array[N] = {0}; 
	
	Input(array, N);
	ArraySort(array, N);
	Skip(array, N);
	
	return 0;
}

