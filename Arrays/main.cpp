//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE];

	cout << "������� " << SIZE << " ����� �����: " << endl;
	//arr[2] = 2048; // ��������� � �������� ������� �� ������
	//cout << arr[2] << endl; // ��������� � �������� ������� �� ������
	for (int i = 0; i < SIZE; i++)
	{
		cout << " ������� ����� " << i << " : ";
		cin >> arr[i];
	}
	cout << " ����� ��������� �������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}