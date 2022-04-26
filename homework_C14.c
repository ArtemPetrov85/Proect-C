#include <stdio.h>

void chet_nechet(int x){
	int summa = 0;
	
	for (int i = x; i > 0; i /= 10){
		summa = summa + (x % 10);
		x /= 10;
	}
	
	if (summa % 2 == 0){
		printf("%s", "YES");
	}
	else 
		printf("%s", "NO");
}

int main()
{
	int x;
	
	scanf("%d", &x);
	
	chet_nechet(x);

	return 0;
}

