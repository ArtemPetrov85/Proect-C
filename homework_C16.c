#include <stdio.h>

int is_prime(int x){
	int count = 0;
	if (x == 0 || x == 1) return 0;
	
	for (int i = x; i > 0; i--){
		if (x % i == 0) count++;
	}
	
	 if(count > 2) return 0;
	 else return 1;
}

int main()
{
	int x;
	
	scanf("%d", &x);
	
	if (is_prime(x) == 1) printf("%s", "YES");
	else printf("%s", "NO");

	return 0;
}

