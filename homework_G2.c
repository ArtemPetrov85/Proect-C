#include <stdio.h>
#include <stdlib.h>
#define N 26

int main(int argc, char **argv)
{
	int num = 0;
	char ch = 'A';

	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	fscanf(f_i, "%d", &num);
	
	for(int i = 0, j = 2; i < num; i += 2, j += 2)
	{
		fprintf(f_o, "%c", ch++);
		
		if(j < 9)
		{
			fprintf(f_o, "%d", j);
		}
		else
		{
			j = 2;
			fprintf(f_o, "%d", j);
		}
	}
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}

