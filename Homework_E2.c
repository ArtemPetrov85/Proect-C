#include <stdio.h>
#define N 5

void Input(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}

float AverMath(int arr[], int len)
{
	float sum = 0;
	
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum / len;
}


int main(int argc, char **argv)
{
	int array[N];
	Input(array, N);
	printf("%.3f", AverMath(array, N));
	return 0;
}

