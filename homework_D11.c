#include <stdio.h>

int binary(int num)
{	
	if (num > 0)
	{
		if (num % 2 == 1) 
		{
			return binary(num / 2) + 1;
		}
		else
		{
			return binary(num / 2);
		}
	}
	return -1;
}
	
int main()
{
	int n;
	scanf("%d", &n);
	
	if (n == 0)
	{
		printf("%d", 0);
	}
	else
	{
		printf("%d", binary(n) + 1);		
	}

	
	return 0;
}

