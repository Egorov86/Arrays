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
    int Arr[20];
    srand(time(NULL));
    int num;
    int min = 0;
    int max = 0;
    int size;
    cout << "������� ������ ��������� ������� : ";
    cin >> size;
    int range;
    cout << "������� �������� ����� �� 0 ��: ";
    cin >> range;
    for (int i = 0; i < size; i++)
    {
        num = rand() % range;
        Arr[i] = num;
    }
    cout << "\n�������� ������� �������:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " "; 
    }
    cout << endl;
    cout << "\n�������� ���.�������:\n";
    for (int i = size - 1; i >= 0; --i)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
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