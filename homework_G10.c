#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(int argc, char **argv)
{
	signed char ch;
	char arr[N] = {' '};
	char arr_temp[N] = {' '};
	int count_temp = 0;
	int count = 0;
	int count_eof = 0;
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(!count_eof)
	{
		if((ch = getc(f_i)) == EOF)
		{
			count_eof++;
		}
		
		if(ch != ' ' && ch != EOF && ch != '\n')
		{
			arr_temp[count++] = ch;
		}
		else
		{
			if(count > count_temp)
			{
				for(int i = 0; i < count; i++)
				{
					arr[i] = arr_temp[i];
					arr_temp[i] = ' ';
				}
				count_temp = count;
				count = 0;
			}
			else if(count == count_temp)
			{
				for(int i = 0; i < count; i++)
				{
					arr_temp[i] = ' ';
					arr[i] = ' ';
				}
				count = 0;
			}
			else
			{
				for(int i = 0; i < count; i++)
				{
					arr_temp[i] = ' ';
				}
				count = 0;
			}
		}
	}
	
	for(int i = 0; i < count_temp; i++)
	{
		fprintf(f_o, "%c", arr[i]);
	}
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
