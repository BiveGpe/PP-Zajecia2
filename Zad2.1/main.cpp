#include <iostream>

using namespace std;

int main() {

    int n = 6;
    int sum = 0;

    cout << "Podaj n:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int littleSum = 0;

        for (int j = 1; j <= i; j++)
        {
            littleSum += j;
        }

        sum += littleSum;
    }

    cout << "Suma: " << sum << endl;

    return 0;
}
