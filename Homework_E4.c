#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}


int ArrayMAX2(int array[], int len)
{
	int temp = 0;
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	return array[0] + array[1];
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	printf("%d", ArrayMAX2(array, N));
	
	return 0;
}

