//Binary
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//#define VAR_1
void main()
{
	setlocale(LC_ALL, "");
    int decimal;
    cout << "Введите целое число: ", cin >> decimal;
    const int n = 32;
#ifdef VAR_1
    bool bin[n] = {};
    int i = 0;
    while (decimal > 0)
    {
        bin[i] = decimal % 2;
        i++;
        decimal /= 2;
    }
    //int i = 0;
    //for(; decimal; bin[i++] = decimal % 2, decimal /= 2);
    for (--i; i >= 0; i--)
    {
        cout << bin[i];
    }
    cout << endl;
#endif // VAR_1
    //int bins = decimal / 23;
    bool bin[n] = {};
    int i = 0;
    /*while (decimal > 0)
    {
        bin[i] = decimal >> i;
        i++;
        decimal /= 2;
    }*/
    //int i = 0;
    //for(; decimal; bin[i++] = decimal % 2, decimal /= 2);
    for (; decimal; bin[i++] = decimal & 1, decimal >>= 1);
    
    for (--i; i >= 0; i--)
    {
        cout << bin[i];
        if (i % 8 == 0) cout << " ";
        if (i % 4 == 0) cout << " ";
    }
    cout << endl;
}