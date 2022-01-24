#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;
int main() {
    int max = INT_MAX;
    int n, x;
    cout << "Podaj ilosc liczb : ";
    cin >> n;

    if( n > 0 )
    {
        cout << " Podaj liczby : " << endl;

        for( int i = 0; i < n; i++ )
        {
            cin >> x;
            if( x > max )
                max = x;

        }
        cout << " Najwieksza liczba to : " << max << endl;
    }
    else
        cout << " Ilosc liczb musi byc wieksza od 0.";

    return 0;

}