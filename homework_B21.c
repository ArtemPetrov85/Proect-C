#include <stdio.h>

int main()
{
	char c;
	
	for (scanf("%c", &c); c != '.'; scanf("%c", &c)){
		if (c > 64 && c < 91){
			c = c + 32;
		}
		printf("%c", c);
	}
	return 0;
}
