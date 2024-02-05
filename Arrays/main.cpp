//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE];

	cout << "¬ведите " << SIZE << " целые числа: " << endl;
	//arr[2] = 2048; // обращение к элементу массива на запись
	//cout << arr[2] << endl; // обращение к элементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << " Ёлемент номер " << i << " : ";
		cin >> arr[i];
	}
	cout << " ¬ывод элементов массива: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}