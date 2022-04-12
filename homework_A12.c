#include <stdio.h>

int main()
{
	unsigned int a;
	int b;
	
	scanf("%u", &a);
	b = (a/100) + (a/10%10) + (a - (a/10*10));
	printf("%d", b);
	return 0;
}

