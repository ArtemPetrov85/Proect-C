#include <stdio.h>

int main()
{
	int number, x = 0, count = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		x = number % 10;
		if (x == 9){
			count++;
		}
		number /= 10;
	}
	
	if (count == 1){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	return 0;
}
