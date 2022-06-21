#include <stdio.h>
#define N 1000

void Input(char str[], int n)
{
	fgets(str, n, stdin);
}

void Wrap(char str[])
{
	int count = 1;
	int i = 0;
	
	while(str[i] != '.')
	{
		if(str[i] == str[i + 1])
		{
			count++;
		}
		else
		{
			printf("%c%d", str[i], count);
			count = 1;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	char string[N]; 
	
	Input(string, N);
	Wrap(string);
	
	return 0;
}

