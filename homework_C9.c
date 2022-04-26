#include <stdio.h>

unsigned long long factorial (int n){
	unsigned long long x = 1;
	if (n != 0){
		for (; n > 0; n--){
			x *= n;
		}
	}
	return x;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%llu", factorial(n));

	return 0;
}

