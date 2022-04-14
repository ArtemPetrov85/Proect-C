#include <stdio.h>

int main()
{
	int a, b, nod = 0;
	
	scanf("%d%d", &a, &b);
	
	while (1){
		if (a > b){
			a = a - b;
		}
		else if (a < b){
			b = b - a;
		}
		else{
			nod = a;
			break;
		} 
	}
	
	printf("%d", nod);
	
	return 0;
}
