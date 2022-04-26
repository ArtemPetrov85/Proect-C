#include <stdio.h>

int summa_n (int n){
	int summa = 0; 
	
	for (; n > 0; n--){
		summa += n;
	}
	return summa;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d", summa_n(n));

	return 0;
}
