#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	//������� � �������� ������� � ������� ������

	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "�������� ������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int k = 0;
	cout << "�� ������� ��������� �������� ������? "; cin >> k;
	int arrtemp[SIZE];					//��������� ���������
	for (int i = 0; i <SIZE; i++)
	{
		if (i < k)
		{
			arrtemp[i] = arr[i];		//���������� ���������� �������
		}
		arr[i] = arr[i + k];
		//cout << arrtemp[i] << tab ;	//����� ����������� ���������� �������
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (i < k)
		{
			arr[SIZE - k + i] = arrtemp[i];//���������� �������� ��������� �������
		}
	}
	cout << endl << "���������  ������:" << endl;
	for (int i = 0; i < SIZE; i++)
	{		
		cout << arr[i] << tab;
	}
	cout << endl;
}