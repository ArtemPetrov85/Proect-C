#include <stdio.h>

void recRevert(int n)
{
	if (n > 0)
	{
		printf("%d ", n % 10);
		recRevert(n / 10);
		
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
		recRevert(n);		
	}

	
	return 0;
}

