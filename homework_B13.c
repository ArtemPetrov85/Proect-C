#include <stdio.h>

int main()
{
	unsigned int number;
	int x = 0, chet = 0, nechet = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		if (x % 2 == 0){
			chet++;
		}
		else{
			nechet++;
		}
		number /= 10;
	}
	printf("%d %d", chet, nechet);
	
	return 0;
}
