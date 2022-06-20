#include <stdio.h>

void Input(char number[])
{
	char c;
	int i = 0;
	
	for(scanf("%c", &c); c != '.'; scanf("%c", &c))
	{
		number[i] = c;
		i++;
	}
}

void Numbers(char num[])
{	
	int counts[10] = {0};
	
	for(int i = 0; i < 1000; i++)
	{
		if(num[i] == '0')
			counts[0]++;
		else if (num [i] == '1')
			counts[1]++;
		else if (num [i] == '2')
			counts[2]++;
		else if (num [i] == '3')
			counts[3]++;
		else if (num [i] == '4')
			counts[4]++;
		else if (num [i] == '5')
			counts[5]++;
		else if (num [i] == '6')
			counts[6]++;
		else if (num [i] == '7')
			counts[7]++;
		else if (num [i] == '8')
			counts[8]++;
		else if (num [i] == '9')
			counts[9]++;
	}	
	
	for(int j = 0; j < 10; j++)
	{
		if (counts[j] != 0)
		{
			printf("%d %d\n", j, counts[j]);
		}
	}
}

int main(int argc, char **argv)
{
	char num[1000] = {0};
	Input(num);
	Numbers(num);
	return 0;
}

