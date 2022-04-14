#include <stdio.h>

int main()
{
	int number, count = 0;
	
	do {
		scanf("%d", &number);
		if (number != 0){
			count++;
		}
	} while ( number != 0);
	
	printf("%d", count);
	
	return 0;
}
