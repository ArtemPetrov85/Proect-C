#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(int argc, char **argv)
{
	signed char ch;
	char arr[N] = {' '};
	int count_temp = 0;
	int count = 0;
	FILE *f_i;
	FILE *f_o;
	
	f_i = fopen("input.txt", "r");
	f_o = fopen("output.txt", "w");
	
	while(((ch = getc(f_i)) != EOF) && (ch != '\n'))
	{
		if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			for(int i = 0; i <= count; i++)
			{
				if(ch == arr[i])
				{
					count_temp++;
				}
			}
			
			if(count_temp == 0)
			{
				arr[count++] = ch;
			}
		}
		count_temp = 0;
	}
	
	for(int i = 0; i < count; i++)
		fprintf(f_o, "%c", arr[i]);
	
	fclose(f_i);
	fclose(f_o);

	return 0;
}
