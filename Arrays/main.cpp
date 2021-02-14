#include<iostream>
using namespace std;

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}