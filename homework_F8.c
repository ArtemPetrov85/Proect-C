#include <stdio.h>
#define N 100

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void Defrog(int arr[], int n)
{	
	int arr_def[100] = {0};
	int count = 1;
	int step = 0;
			
	for(int j = 0; j < n; j++)
	{
		if(arr[j] == arr[j + 1])
		{
			count++;	
		}
		else
		{
			if (arr[0] == 0)
			{
				arr_def[++step] = count;
				count = 1;
			}
			else
			{
				arr_def[step++] = count;
				count = 1;
			}
		}
	}
	
	printf("%s", "[");
	
	if(arr[0] != 0)
		printf("%d,", 0);
		
	for(int k = 0; k < n; k++)
	{
		if(arr_def[k] != 0 && arr_def[k + 1] != 0)
		{
			printf("%d,", arr_def[k]);
		}	
		else if(arr_def[k] != 0)
		{
			printf("%d", arr_def[k]);
		}
	}
	
	printf("%s", "]");
}

int main(int argc, char **argv)
{
	int array[100] = {0}; 
	
	Input(array, N);
	Defrog(array, N);
	return 0;
}

