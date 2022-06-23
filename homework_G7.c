#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(int argc, char **argv)
{
	signed char ch;
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(((ch = getc(f_i)) != EOF) && (ch != '\n'))
	{
		if(ch >= 65 && ch <= 90)
		{
			count_big++;
		}
		else if(ch >= 97 && ch <= 122)
		{
			count_small++;
		}
	}
	
	fprintf(f_o, "%d %d", count_small, count_big);
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
