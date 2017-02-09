#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

    int abc =5;

    void dodajTrzy(int liczba){
    liczba = liczba + 3;
    cout << "Liczba = " << liczba << endl;
    cout << "Abc = " << abc << endl;

    }

int main()
{
    dodajTrzy(abc);

    return 0;
}

