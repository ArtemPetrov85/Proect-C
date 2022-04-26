#include <stdio.h>

float sinus (float x){
	float step = x, sum = 0;
	int count = 1;
	for (int i = 3; i <= x; i += 2){
		for (int j = i; j > 0; j--){
			step = step * x;
		}
		printf("%f", step);
		if (count % 2 != 0){
			sum = sum + step / i;
		}
		else{
			sum = sum - step / i;
		}
		
		count++;
		printf("%d", 0);
	}
	return x - sum;
}

int main()
{
	float x;
	
	scanf("%f", &x);
	
	printf("%.3f", sinus(x));

	return 0;
}

