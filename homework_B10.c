#include <stdio.h>

int main()
{
	int number, x = 0, count = 0, a = 32767, iter = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		if (x < a){
			count++;
			a = x;
		}
		iter++;
		number /= 10;
	}
	
	if (count == iter){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	return 0;
}
