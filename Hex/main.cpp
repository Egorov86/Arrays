//Hex
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");
    int celoe;
    cout << "������� ����� �����: ";
    cin >> celoe;
    int binary[10];
    int ind = 0;

    if (celoe == 0)
    {
        cout << "����� " << celoe << " � ����������������� �������: " << endl;
    }
    else {
        while (celoe > 0)
        {
            binary[ind] = celoe % 16;
            celoe = celoe / 16;
            ind++;
        }
        cout << "����� � ����������������� �������: ";
        for (int i = ind - 1; i >= 0; i--)
        {
            cout << binary[i] << " ";
        }
    }
}
