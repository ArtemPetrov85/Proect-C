#include <stdio.h>

unsigned long long get_corn (int n){
	unsigned long long corn = 1;
	
	for (int i = 1; i < n; i++){
		corn *= 2;
	}
	
	return corn;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%llu", get_corn(n));

	return 0;
}
