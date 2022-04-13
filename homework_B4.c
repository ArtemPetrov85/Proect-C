#include <stdio.h>

int main()
{
	int number, count = 0;
	
	scanf("%d", &number);
	
	while (number > 0){
		number /= 10;
		count++;
	}
	
	printf("%s", count == 3 ? "YES" : "NO");
	
	return 0;
}

