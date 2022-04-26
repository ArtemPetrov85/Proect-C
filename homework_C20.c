#include <stdio.h>

void skobka(char c){
	int z = 40, sum_1 = 0, sum_2 = 0;
	int i = 1;
	
	if (c == z && i == 1){
		for (; c != '.'; scanf("%c", &c), i++){
			if (c == z) sum_1++;
			else sum_2++;
		}
		if (sum_1 == sum_2) printf("%s", "YES");
		else printf("%s", "NO");
	}
	else printf("%s", "NO");
}

int main()
{
	char x;
	
	scanf("%c", &x);
	
	skobka(x);

	return 0;
}
