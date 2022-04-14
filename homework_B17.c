#include <stdio.h>

int main()
{
	int number, a = 0;
	
	scanf("%d", &number);
	
	for (int i = 10; i <= number; i++){
		int j = i, sum = 0, proizv = 1;
		while (j > 0){
			a = j % 10;
			sum += a;
			proizv *= a;
			j /= 10;
		}
		if (sum == proizv){
			printf("%d ", i);
		}
	}
	
	return 0;
}
