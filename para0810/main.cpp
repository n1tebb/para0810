#include <iostream>
#include <Windows.h>
#include <cstdlib>



int plus(int chislo1, int chislo2)
{
	return chislo1 + chislo2;
}

int minus(int chislo1, int chislo2)
{
	return chislo1 - chislo2;
}

int mnojitel(int chislo1, int chislo2)
{
	return chislo1 * chislo2;
}

int delenie(int chislo1, int chislo2)
{
	if (chislo2 != 0)
	{
		return chislo1 / chislo2;
	}
	else
	{
		std::cout << "ƒеление на 0!!!";
		return 0;
	}
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int num1, num2;
	char operation;
	int res;

	std::cout << "¬ведите первое число: \n";
	std::cin >> num1;

	std::cout << "¬ведите оператор (+ - * /): \n";
	std::cin >> operation;

	std::cout << "¬ведите второе число: \n";
	std::cin >> num2;

	switch (operation)
	{
	case '+':
		res = plus(num1, num2);
		break;
	case '-':
		res = minus(num1, num2);
		break;
	case '*':
		res = mnojitel(num1, num2);
		break;
	case '/':
		res = delenie(num1, num2);
		break;
	}

	std::cout << "–езультат: " << res << "\n";

	return 0;
}