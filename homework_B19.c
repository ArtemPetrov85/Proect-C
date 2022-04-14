#include <stdio.h>

int main()
{
	int number, x = 0, sum = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		sum += x;
		number /= 10;
	}
	
	if (sum == 10){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	return 0;
}
