#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b){
		if (a > c){
			d = a;
		}
		else{
			d = c;
		}
	}
	else{
		if (b > c){
			d = b;
		}
		else{
			d = c;
		}
	}	
	
	printf("%d", d);
	return 0;
}

