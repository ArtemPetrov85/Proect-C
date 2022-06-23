#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(int argc, char **argv)
{
	signed char ch;
	int arr_ABC_1[] = {'a','b','A','B'};
	int arr_ABC_2[] = {'b','a','B','A'};
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(((ch = getc(f_i)) != EOF) && (ch != '\n'))
	{
		int count = 0;
		
		for(int i = 0; i < 4; i++)
		{
			if(ch == arr_ABC_1[i])
			{
				fprintf(f_o, "%c", arr_ABC_2[i]);
				count++;
			}
		}
		if(count == 0)
		{
			fprintf(f_o, "%c", ch);
		}
	}
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
