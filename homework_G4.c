#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(int argc, char **argv)
{
	signed char ch;
	int count = 0;
	int arr_ABC[N] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arr_1_D[N] = {0};
	int arr_2_D[N] = {0};
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(((ch = getc(f_i)) != EOF) && (ch != '\n'))
	{
		if(ch != ' ' && count == 0)
		{
			for(int j = 0; j < 26; j++)
			{
				if(arr_ABC[j] == ch)
				{
					arr_1_D[j]++;
				}
			}
		}
		else if(ch == ' ')
		{
			count++;
		}
		else
		{
			for(int j = 0; j < 26; j++)
			{
				if(arr_ABC[j] == ch)
				{
					arr_2_D[j]++;
				}
			}
		}
	}

	for(int i = 0; i < 26; i++)
	{
		if(arr_1_D[i] == 1 && arr_2_D[i] == 1)
		{
			fprintf(f_o, "%c ", arr_ABC[i]);
		}
	}
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
