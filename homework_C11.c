#include <stdio.h>

int nod (int a, int b){
	int min;
	if (a < b) min = a;
	else min = b;
	
	int x;
	
	for (int i = 1; i < min; i++){
		if (a % i == 0 && b % i == 0) x = i;
	}
	return x;
}

int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	printf("%d", nod(a, b));

	return 0;
}

