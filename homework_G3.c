#include <stdio.h>
#include <stdlib.h>
#define N 1000

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
	
	for(int i = 0; i < count - 1; i++)
	{
		if(arr[count - 1] == arr[i])
		{
			fprintf(f_o, "%d ", i);
		}
	}

	fclose(f_i);
	fclose(f_o);

	return 0;
}
