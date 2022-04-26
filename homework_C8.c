#include <stdio.h>

void uppercase (char n){
	for (; n != '.'; scanf("%c", &n)){
		if (n >= 97 && n <= 122){
			n = n - 32; 
		}
		printf("%c", n);
	}
}

int main()
{
	char n;
	
	scanf("%c", &n);
	
	uppercase(n);

	return 0;
}

