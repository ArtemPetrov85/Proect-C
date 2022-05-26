#include <stdio.h>

void enumerateDelta(int a, int b)
{
	if (a > b)
	{
		if (a != b)
		{
			printf("%d ", a);
			enumerateDelta(a - 1, b);
		}
	}
	else if (a < b)
	{
		if (a != b)
		{
			printf("%d ", a);
			enumerateDelta(a + 1, b);
		}
	}
	else
	{
		printf("%d ", a);
	}
	
}
	
int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	enumerateDelta(a, b);
	
	return 0;
}

