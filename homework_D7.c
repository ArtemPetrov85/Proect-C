#include <stdio.h>

void  enumerate(int num)
{
	if (num > 0)
	{
		printf("%d ", num);
		enumerate(num - 1);
		
	}
}
	
int main()
{
	int num;
	
	scanf("%d", &num);
	
	enumerate(num);
	
	return 0;
}

