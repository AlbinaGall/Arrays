#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	//минимум и максимум сделала в прошлой ƒом–аб

	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "»сходный массив: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int k = 0;
	cout << "Ќа сколько элементов сдвинуть массив? "; cin >> k;
	int arrtemp[SIZE];					//временное хранилище
	for (int i = 0; i <SIZE; i++)
	{
		if (i < k)
		{
			arrtemp[i] = arr[i];		//заполнение временного массива
		}
		arr[i] = arr[i + k];
		//cout << arrtemp[i] << tab ;	//вывод содердимого временного массива
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (i < k)
		{
			arr[SIZE - k + i] = arrtemp[i];//заполнение хвостика исходного массива
		}
	}
	cout << endl << "—двинутый  массив:" << endl;
	for (int i = 0; i < SIZE; i++)
	{		
		cout << arr[i] << tab;
	}
	cout << endl;
}