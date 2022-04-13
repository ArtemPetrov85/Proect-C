#include <stdio.h>

int main()
{
	int a, b, sqr = 0;
	
	scanf("%d%d", &a, &b);
	
	for (; a <= b; a++){
		sqr += a*a;
	}
	
	printf("%d", sqr);
	 
	return 0;
}

