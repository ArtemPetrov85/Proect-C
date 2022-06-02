#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void ArraySort(int array[], int len)
{	
	for (int i = len; i > 0; i--)
	{	
		for (int j = len; j > 1; j--)
		{
			int temp = array[j - 2];
			
			if (array[j - 1] % 10 < temp % 10)
			{
				array[j - 2] = array[j - 1];
				array[j - 1] = temp;
			}
		}
		
		printf("%d ", array[len - i]);
	}
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	ArraySort(array, N);
	return 0;
}

