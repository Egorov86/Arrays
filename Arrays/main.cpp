﻿//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");
    cout << "Hello Arrays" << endl;
    int SIZE;
    int sum = 0;
    cout << "Введите размер массива: ";
    cin >> SIZE;
    int arr[] = { 1, 2, 3 };
    int MIN = arr[0];
    int MAX = arr[0];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
    cout << "Элементы массива:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nЭлементы обр.массива:\n";
    for (int i = SIZE - 1; i >= 0; --i)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n Сумма элементов массива:\n";
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << sum << "\t";
    cout << "\n Средне-арифметическое элементов массива:\n";
    cout << double(sum) / SIZE << "\t";
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < MIN)
            MIN = arr[i];
        if (arr[i] > MAX)
            MAX = arr[i];
    }
    cout << "\n минимум массива:\n";
    cout << MIN << "\t";
    cout << "\n максимум массива:\n";
    cout << MAX << "\t";
    cout << endl;
}