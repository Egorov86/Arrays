//Random
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
    setlocale(LC_ALL, "");
    const int n = 5;
    int Arr[n];
    int size;
    int range_1, range_2;
    cout << "������� �������� ����� �� : ";
    cin >> range_1;
    cout << "�� : ";
    cin >> range_2;
    for (int i = 0; i < n; i++)
    {
        Arr[i] = rand() % (range_2-range_1) + range_1;
    }
    cout << "\n�������� ������� �������:\n";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " "; 
    }
    cout << endl;
    cout << "\n�������� ���.�������:\n";
    for (int i = n - 1; i >= 0; --i)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    int min = Arr[0];
    int max = Arr[0];
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] < min)min = Arr[i];
        if (Arr[i] > max)max = Arr[i];
    }
    cout << "\n ������� �������:\n";
    cout << min << "\t";
    cout << "\n �������� �������:\n";
    cout << max << "\t";
    cout << endl;
}