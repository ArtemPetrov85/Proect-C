#include <stdio.h>

int function_x(int a){
	int result;
	
	if (a >= -2 && a < 2){
		result = a * a;
	}
	else if (a < -2){
		result = 4;
	}
	else{
		result = (a * a) + (4 * a) + 5;
	}
	
	return result;
}

int main()
{
	int a, fx, max = 0;
	
	for(scanf("%d", &a); a != 0; scanf("%d", &a)){
		fx = function_x(a);
		max = (max <= fx) ? fx : max;
	}
	
	printf("%d", max);
	
	return 0;
}
