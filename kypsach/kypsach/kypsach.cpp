#include <iostream>
#include "laba_2.h"
#include "lab_1.h"

int main()
{
	int id;
	std::cin >> id;

	switch (id)
	{
	case 1:
		lab_1();
		break;
	case 2:
		laba_2();
		break;
	default:
		std::cout << "Введено неверное значение";
	}
		
}
