#include <stdio.h>

void systema (int n, int p){
	for (int i = n; i > 0; i /= p){
		printf("%d", 0);
	}
	
	if (n >= 0 && p >= 2 && p <= 9){
		for (; n > 0; n /= p){
			printf("\b");
			printf("%d", n % p);
			printf("\b");
		}
	}
}

int main()
{
	int n, p;
	
	scanf("%d%d", &n, &p);
	
	systema(n, p);

	return 0;
}

