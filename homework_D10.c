#include <stdio.h>

int is_prime(int n, int delitel)
{
	if (n == 1) return 1;
	if (delitel >= 3)
	{
		if (n % (delitel - 1) == 0) return 1;
		else
		{
			if (is_prime(n, delitel - 1) == 1)
			{
				return 1;
			}
			else 
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	return -1;
}
	
int main()
{
	int n;
	
	scanf("%d", &n);
	
	if (is_prime(n, n) == 1)
		printf("%s", "NO");
	else
		printf("%s", "YES");
	
	return 0;
}

