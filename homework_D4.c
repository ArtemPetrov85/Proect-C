#include <stdio.h>

void print_num(int num)
{
	if (num > 0)
	{
		
		print_num(num / 10);
		printf("%d ", num % 10);
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
		print_num(n);		
	}

	
	return 0;
}

