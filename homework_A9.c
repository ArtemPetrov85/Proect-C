#include <stdio.h>

int main()
{
	int a = -32768, b = -32768, c = -32768, d = -32768, e = -32768, max;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a > b){
		if (a > c){
			if (a > d){
				if (a > e){
					max = a;
				}
			}
			else{
				if (d > e){
					max = d;
				}
				else{
					max = e;
				}
			}
		}
		else{
			if (c > d){
				if (c > e){
					max = c;
				}
			}
		}
	}
	
	else{
		if (b > c){
			if (b > d){
				if (b > e){
					max = b;
				}
			}
			else{
				if (d > e){
					max = d;
				}
				else{
					max = e;
				}
			}
		}
		else{
			if (c > d){
				if (c > e){
					max = c;
				}
				else {
					max = e;
				}
			}
			else{
				if (d > e){
					max = d;
				}
				else {
					max = e;
				}
			}
		}
	}
	
	printf("%d", max);
	return 0;
}

