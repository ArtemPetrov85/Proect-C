#include <stdio.h>

int main()
{
	int number, x = 0, a = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		a = a * 10 + x;
		number /= 10;
	}
	
	printf("%d", a);
	
	return 0;
}
