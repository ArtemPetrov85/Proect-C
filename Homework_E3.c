#include <stdio.h>
#define N 10

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int ArrayMIN(int array[], int len, int * posMin)
{
	int min = array[0];
	*posMin = 0;
	
	for (int i = 1; i < len; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			*posMin = i;
		}
	}
	
	*posMin += 1;
	return min;
}

int ArrayMAX(int array[], int len, int * posMax)
{
	int max = array[0];
	*posMax = 0;
	
	for (int i = 1; i < len; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			*posMax = i;
		}
	}

	*posMax += 1;
	return max;
}


int main(int argc, char **argv)
{
	int array[N], posMax, posMin;
	Input(array, N);
	printf("%d %d ", posMax, ArrayMAX(array, N, &posMax));
	printf("%d %d ", posMin, ArrayMIN(array, N, &posMin));
	
	return 0;
}

