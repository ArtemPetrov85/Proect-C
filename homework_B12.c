#include <stdio.h>

int main()
{
	unsigned int number;
	int x = 0, min = 32767, max = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		number /= 10;
		if (x > max){
			max = x;
			if (min == 32767){
				min = x;
			}
		}
		else if (x < min){
			min = x;
		}
	}
	
	printf("%u %u", min, max);
	
	return 0;
}
