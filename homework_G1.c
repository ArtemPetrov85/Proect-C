#include <stdio.h>
#include <stdlib.h>
#define N 101
#define C 3

int main(int argc, char **argv)
{
	signed char ch;
	int count = 0;
	char arr[N];
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(((ch = getc(f_i)) != EOF) && (ch != '\n'))
	{
		arr[count++] = ch;
	}
	
	for(int i = C; i > 0; i--)
	{
		for(int j = 0; j < count; j++)
		{
			fprintf(f_o, "%c", arr[j]);
		}
		
		if(i > 1)
		{
			fprintf(f_o, "%c%c", ',', ' ');
		}
		else
		{
			fprintf(f_o, " %d", count);
		}
	}
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}

