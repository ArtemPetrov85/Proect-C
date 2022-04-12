#include <stdio.h>

int main()
{
	int month;
	
	scanf("%d", &month);
	
	if ((month >=1 && month < 3) || month == 12){
		printf("winter");
	}
	else{
		if (month >=3 && month < 6){
			printf("spring");
		}
		else{
			if (month >=6 && month < 9){
			printf("summer");
			}
			else{
				printf("autumn");
			}
		}
	}
		
	return 0;
}

