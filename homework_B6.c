#include <stdio.h>

int main()
{
	int number, x = 0, a = 0, count = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		if (a == x){
			count++;
		}
		else{
			a = x;
		}
		number /= 10;
	}
	
	if (count > 0){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	return 0;
}
