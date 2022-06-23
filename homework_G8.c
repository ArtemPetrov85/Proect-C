#include <stdio.h>
#include <stdlib.h>
#define N 1000

void Sort(long long int arr[], int n)
{
	int temp = 0;
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char **argv)
{
	signed char ch;
	long long int arr_num[N] = {0};
	char arr_temp[N] = {'a'};
	int count_temp = 0;
	int count_num = 0;
	int count_eof = 0;
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(!count_eof && (ch != '\n'))
	{
		if((ch = getc(f_i)) == EOF)
		{
			count_eof++;
		}
		
		if(ch >= '0' && ch <= '9')
		{
			arr_temp[count_temp++] = ch;
		}
		else if(count_temp > 0)
		{
			sscanf(arr_temp, "%lld", &arr_num[count_num]);
			
			for(int i = 0; i < count_temp; i++)
			{
				arr_temp[i] = 'a';
			}
			
			count_temp = 0;
			count_num++;
		}
	}

	Sort(arr_num, count_num);
	
	for(int i = 0; i < count_num; i++)
		fprintf(f_o, "%lld ", arr_num[i]);
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
