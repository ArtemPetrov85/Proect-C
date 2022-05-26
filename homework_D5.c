#include <stdio.h>

void binary(int num)
{
	if (num > 0)
	{
		
		binary(num / 2);
		printf("%d", num % 2);
	}
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
		binary(n);		
	}

	
	return 0;
}

