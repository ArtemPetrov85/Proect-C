#include <stdio.h>

int get_absolute(int a){
	if (a < 0)
		return a * -1;
	else 
		return a;
}

int main()
{
	int number;
	
	scanf("%d", &number);
	
	printf("%d", get_absolute(number));
	
	return 0;
}
