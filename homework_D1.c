#include <stdio.h>

void recNumber(int n)
	{
		if (n > 0)
		{
			recNumber(n - 1);
			printf("%d ", n);
		}
	}
	
int main()
{
	int n;
	scanf("%d", &n);
	recNumber(n);
	
	return 0;
}

