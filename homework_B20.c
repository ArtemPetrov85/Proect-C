#include <stdio.h>

int main()
{
	int number, x = 0, count = 0;
	
	scanf("%d", &number);
	
	x = number;
	
	while (number > 0){
		if (x % number == 0){
			count++;
		}
		number--;
	}
	
	if (count == 2){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	
	return 0;
}
