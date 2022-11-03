#include <iostream>

using namespace std;

int main() {
    int userInput;

    cout << "Podaj liczbe od 1 do 12:";
    cin >> userInput;

    switch (userInput)
    {
        case 1:
            cout << "Styczen:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        case 2:
            cout << "Luty:" << endl;
            cout << "dni - 28" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        case 3:
            cout << "Marzec:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        case 4:
            cout << "Kwiecien:" << endl;
            cout << "dni - 30" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 5:
            cout << "Maj:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 6:
            cout << "Czerwiec:" << endl;
            cout << "dni - 30" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 7:
            cout << "Lipiec:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 8:
            cout << "Sierpien:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 9:
            cout << "Wrzesien:" << endl;
            cout << "dni - 30" << endl;
            cout << "pogoda - slonecznie" << endl;
            break;

        case 10:
            cout << "Pazdziernik:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        case 11:
            cout << "Listopad:" << endl;
            cout << "dni - 30" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        case 12:
            cout << "Grudzien:" << endl;
            cout << "dni - 31" << endl;
            cout << "pogoda - pochmurno" << endl;
            break;

        default:
            cout << "Podaj prawidlowa liczbe";
            break;
    }


    return 0;
}
