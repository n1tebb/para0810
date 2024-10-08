#include <iostream>
#include <Windows.h>
#include <cstdlib>


const int size = 10; 

void fillmass(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void findMinMax(const int arr[], int size, int &minValue, int &maxValue, int &minIndex, int &maxIndex)
{
	minValue = arr[0];
	maxValue = arr[0];
	minIndex = 0;
	maxIndex = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
			minIndex = i;
		}
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
			maxIndex = i;
		}
	}
}

void printarr(const int arr[], int size)
{
	std::cout << "Массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void printresult(int minValue, int maxValue, int minIndex, int maxIndex)
{
	std::cout << "Минимальный элемент: " << minValue << " (значение и номер: " << minIndex << ")\n";
	std::cout << "Максимальный элемент: " << maxValue << " (Значение и номер: " << maxIndex << ")\n";
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int arr[size];
	int minValue, maxValue, minIndex, maxIndex;

	fillmass(arr, size);
	findMinMax(arr, size, minValue, maxValue, minIndex, maxIndex);
	printarr(arr, size);
	printresult(minValue, maxValue, minIndex, maxIndex);

	return 0;
}