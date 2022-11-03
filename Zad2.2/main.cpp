#include <iostream>

using namespace std;

int main() {
    int a,b = 0;

    cout << "Podaj a i b po spacji:";
    cin >> a >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;


    cout << "Wiersz o dlugosci a:" << endl;
    for (int i = 1; i <= a; i++)
    {
        cout << "*";
    }
    cout << endl << endl;


    cout << "Kolumna o dlugosci b:" << endl;
    for (int i = 1; i <= b; i++)
    {
        cout << "*" << endl;
    }
    cout << endl;


    cout << "Prostokat o wymiarach 'a' na 'b':" << endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;


    cout << "Obwod prostokata o wymiarach 'a' na 'b':" << endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == 1 || i == b)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == a)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
