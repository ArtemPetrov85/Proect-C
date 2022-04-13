#include <stdio.h>

int main()
{
	int number, sum = 0, x = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		sum += x;
		number /= 10;
	}
	
	printf("%d", sum);
	
	return 0;
}
