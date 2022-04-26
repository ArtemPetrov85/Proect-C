#include <stdio.h>

int digit_to_number(char c){
	int sum = 0;
	
	for (; c != '.'; scanf("%c", &c)){
		if (c >= 48 && c <= 57){
			sum = sum + (c - 48);
		}
	}
	
	return sum;
}

int main()
{
	char x;
	
	scanf("%c", &x);
	
	printf("%d", digit_to_number(x));

	return 0;
}
