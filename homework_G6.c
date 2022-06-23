#include <stdio.h>
#include <stdlib.h>
#define N 1000

char * is_palindrom(signed char str[])
{
	int count = 0;
	int count_half = 0;
	
	while(str[count] != 0)
	{
		count++;
	}
	
	for(int i = 0; i < count / 2; i++)
	{
		if(str[i] == str[(count - 1) - i])
		{
			count_half++;
		}
	}
	if(count_half == count / 2)
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}

int main(int argc, char **argv)
{
	signed char string[N] = {0};
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	fscanf(f_i, "%s", string);
	fprintf(f_o, "%s", is_palindrom(string));
	
	fclose(f_i);
	fclose(f_o);
	
	return 0;
}
