//Hexadecimal
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    for (int i = 0; i < 256; i++) cout << i << "\t" << char(i) << endl;
    setlocale(LC_ALL, "");
    int decimal;
    cout << "Введите десятичное число : "; cin >> decimal;
    const int n = 8;
    char hex[n] = {};
    int i = 0;
    for (; decimal; hex[i++] = decimal & 15, decimal >>= 4);
    for (--i; i >= 0; i--)
    {
        cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
    }
    cout << endl;
}
