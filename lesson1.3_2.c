#include <Windows.h>
#include <stdio.h>


int main(int argc, char **argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	printf("������� �����������\n\n");
	int fart;
	
	for(fart = 0; fart <= 300; fart = fart + 20){
		printf("%6dF  %6.1fC\n", fart, 5.0 / 9.0 * (fart - 32));
	}
	return 0;
}
