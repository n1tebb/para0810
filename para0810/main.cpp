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

double delenie(double chislo1, double chislo2)
{
	if (chislo2 != 0)
	{
		return chislo1 / chislo2;
	}
	else
	{
		std::cout << "ƒеление на 0!!!\n";
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

	if (operation == '+') 
	{
		res = plus(num1, num2);
	}
	else if (operation == '-')
	{
		res = minus(num1, num2);
	}
	else if (operation == '*')
	{
		res = mnojitel(num1, num2);
	}
	else if (operation == '/')
	{ 
		res = delenie(num1, num2);
	}

	std::cout << "–езультат: " << res << "\n";

	return 0;
}