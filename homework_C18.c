#include <stdio.h>

int is_happy_number(int n){
	int sum = 0, proiz = 1;
	for (int i = n; i > 0; i /= 10){
		sum = sum + (n % 10);
		proiz = proiz * (n % 10);
		n /= 10;
	}
	
	if (sum == proiz) return 1;
	else return 0;
}

int main()
{
	int x;
	
	scanf("%d", &x);
	
	if (is_happy_number(x) == 1) printf("%s", "YES");
	else printf("%s", "NO");

	return 0;
}

