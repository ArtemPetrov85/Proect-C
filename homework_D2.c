#include <stdio.h>

int recNumSum(int n)
{
	if (n > 0)
	{
		return recNumSum(n - 1) + n;
	}
	return 0;
}
	
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", recNumSum(n));
	
	return 0;
}

