#include "pch.h"
#include <iostream>


	int Summ(int a, int b) {
			return a + b;
	}



	int Mult(int a, int b) {
		return a * b;
	}

	int Stepen(int a, int b) {
		int res = 1;
		for (int i = 0; i < b; i++)
		{
			res *= a;
		}
		return res;
	}


	int Factor(int a) {
		int res = 1;
		for (int i = 0; i < a; i++)
		{
			res += i;
		}
		return res;
	}

	
int main()
{
	int menu = 0;
	int a; 
	int b;
	while (menu != 5) {
		scanf_s("%d %d", a, b);
		printf("Menu item: \n");
		scanf_s("%d", menu);

		printf("1 - summ: \n");
		printf("2 - mult: \n");
		printf("3 - pov: \n");
		printf("4 - factorial: \n");
		printf("5 - exit: \n");

		switch (menu) {
		case 1: Summ(a, b);
		case 2: Mult(a, b);
		case 3:Stepen(a, b);
		case 4: Factor(a);
		case 5: break;
		}
		
	}
	return 0;
}
