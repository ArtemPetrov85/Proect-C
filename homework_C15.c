#include <stdio.h>

void grow_up(int x){
	int a = 0, b = 0;
	int count_1 = 0, count_2 = 0;
	
	for (int i = 1; i <= x; i *= 10){
		b = i;
	}
	for (int i = b; i > 0; i /= 10){
		if (a < x / i){
			a = x / i;
			count_1++;
		}
		count_2++;
		x -= (x / i) * i;
	}
	
	if (count_1 == count_2) printf("%s", "YES");
	else printf("%s", "NO");
}

int main()
{
	int x;
	
	scanf("%d", &x);
	
	grow_up(x);

	return 0;
}

