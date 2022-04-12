#include <stdio.h>

int main()
{
	int a = 32767, b = 32767, c = 32767, d = 32767, e = 32767, min;
	
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	if (a < b){
		if (a < c){
			if (a < d){
				if (a < e){
					min = a;
				}
				else{
					min = e;
				}
			}
			else{
				if (d < e){
					min = d;
				}
				else{
					min = e;
				}
			}
		}
		else{
			if (c < d){
				if (c < e){
					min = c;
				}
				else{
					min = e;
				}
			}
		}
	}
	else{
		if (b < c){
			if (b < d){
				if (b < e){
					min = b;
				}
				else{
					min = e;
				}
			}
			else{
				if (d < e){
					min = d;
				}
				else{
					min = e;
				}
			}
		}
		else{
			if (c < d){
				if (c < e){
					min = c;
				}
				else {
					min = e;
				}
			}
			else{
				if (d < e){
					min = d;
				}
				else {
					min = e;
				}
			}
		}
	}
	
	int max;
	
	if (a > b){
		if (a > c){
			if (a > d){
				if (a > e){
					max = a;
				}
				else{
					max = e;
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
				else{
					max = e;
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
				else{
					max = e;
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
	
	printf("%d", max + min);
	return 0;
}

