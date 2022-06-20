#include <stdio.h>
#define N 100

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int Maximum(int arr[], int n)
{	
	int max = arr[0];
	
	for(int j = 0; j < n; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
	}
	return max;
}

int main(int argc, char **argv)
{
	int array[100] = {0};
	int max = 0; 
	
	Input(array, N);
	max = Maximum(array, N);
	printf("%d", max);
	return 0;
}

