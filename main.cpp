/*#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;



int main() {
    int n;
    cout << "podaj rozmiar tablicy\n";
    cin >> n;
    double  *wsk;
    wsk = new double[n];
    for (int i =0; i < n; i++) {
        cout << "podaj wartosc " << i+1 << endl;
        cin >> *(wsk + i);
    }
    double suma {0};

    for (int i =0; i < n; i++) {
    suma += *(wsk +i);
    }
    *(wsk+n)=5;
    delete[] wsk;
    cout << "suma: " << suma << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    const int rozmiar=5;
    int tablica[rozmiar];
    cout << "Podaj elementy tablicy: " << endl;
    for(int i = 0; i <= 4; i++)
    {
        cout << "Element "<< i+1 <<": ";
        cin >> tablica[i];
    }
    cout << "\nWprowadzone elementy tablicy to: " << endl;
    for(int i = 0; i <= 4; i++)

    {
        cout << tablica[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}*/
/*#include <iostream>//znajdowanie najwiekszej i najmniejszej liczby i ich dodawanie
using namespace std;
int main()
{
    int tablica[5];
    int min;
    int max;

    cout << "Podaj elementy tablicy: " << endl;
    for(int i = 0; i <= 4; i++)
    {
        cout << "Element "<< i+1 <<": ";
        cin >> tablica[i];
    }
    min = tablica[0];
    for(int i = 0; i <= 4; i++)
    {
        if(tablica[i] < min)
            min = tablica[i];
    }
    cout << "\nNajmniejszy element w tablicy to: " << min << endl;
    max = tablica[0];
    for(int i = 0; i <= 4; i++)
    {
        if(tablica[i] > max)
            max = tablica[i];
    }
    cout << "\nNajwiekszy element w tablicy to: " << max << endl;
    cout << "\nWprowadzone elementy tablicy to: " << endl;
    for(int i = 0; i <= 4; i++)
    {
        cout << tablica[i] << " ";
    }
    cout <<"Suma liczb=" <<max+min<<endl;
    system("pause");
    return 0;
}*/
