#include <stdio.h>

int main()
{
	unsigned int s;
	int a, b, c, d;
	
	scanf("%u", &s);
	a = (s/100);
	b = (s/10%10);
	c = (s - (s/10*10));
	
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

