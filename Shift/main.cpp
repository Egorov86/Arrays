//Shift
#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "");
    const int SIZE = 10;
    int arr[SIZE] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    bool c = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[j];
            arr[j] = arr[j + c];
            arr[SIZE] = 0;
        }
        cout << endl;
    }
}