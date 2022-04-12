#include <stdio.h>

int main()
{
	int x1, x2, y1, y2;
	float K, B;
	
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	
	K = ((y1 - y2) * 1.0) / ((x1 - x2) * 1.0);
	
	B = -1 * ((K * x2) - y2);
	
	printf("%.2f %.2f", K, B);
	
	return 0;
}

