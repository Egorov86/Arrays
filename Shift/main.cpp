//Shift
#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "");
    const int SIZE = 10;
    int arr[SIZE] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    int c = arr[0];
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << "\t";
            arr[i] = arr[i + 1]; // ��������� ����� �����
        }
        for (int i = 0; i < SIZE; i++)
        {
            arr[SIZE - 1] = c; // ���������� ���������� �������� �������� ������� ��������
        }
        for (int i = 0; i < SIZE; i++)
        {
             c = arr[0]; // ����������� ���������� � ����� �������� ������� ��������
        }
        cout << endl;
    }
}