#include <stdio.h>
#define N 100

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int Duble(int arr[], int n)
{	
	for(int j = 0; j < n - 1; j++)
	{
		for(int i = j + 1; i < n; i++)
		{
			if(arr[j] == arr[i])
				return 1;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	int array[100] = {0};
	int duble = 0; 
	
	Input(array, N);
	duble = Duble(array, N);
	printf("%s", (duble == 1) ? "YES" : "NO");
	return 0;
}
