#include <stdio.h>

int main()
{
	int n, a = 1, b = 0, c = 0;
	
	scanf("%d", &n);
	
	while (n > 0){
		printf("%d ", a);
		c = a + b;
		b = a;
		a = c;
		n--;
	}
	
	return 0;
}
