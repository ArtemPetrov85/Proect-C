#include <stdio.h>

int get_absolute(int a){
	if (a < 0)
		return a * -1;
	else 
		return a;
}

int power(int b, int n, int p){
	int result = 1;
	if (b <= 1000 && p >= 0){
		for (int i = 0; i < p; i++){
			result *= n;
		}
		return result;
	}
	else
		return 0;
}

int main()
{
	int n, p;
	
	scanf("%d%d", &n, &p);
	
	printf("%d", power(get_absolute(n), n, p));
	
	return 0;
}
