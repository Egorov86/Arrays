﻿//Binary
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
    int celoe;
    cout << "Введите целое число: ";
    cin >> celoe;
    int binary[10];
    int ind = 0;

    if (celoe == 0) 
    {
        cout << "Число " << celoe << " в двоичной системе: " << endl;
    }
    else {
        while (celoe > 0) 
        {
            binary[ind] = celoe % 2;
            celoe = celoe / 2;
            ind++;
        }
        cout << "Число в двоичной системе: ";
        for (int i = ind - 1; i >= 0; i--) 
        {
            cout << binary[i];
        }
        cout << endl;
    }
}