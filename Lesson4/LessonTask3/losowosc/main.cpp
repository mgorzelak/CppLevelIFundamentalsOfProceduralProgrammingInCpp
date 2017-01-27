#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

int liczba;
int nrProvided;
int nrTrialas;


int main()
{
    srand (time(NULL)); // Pobieramy liczbê sekund jaka uplynela od 1970 do  momentu wywolania tej linijki
    int nrTrialas=0;
    cout <<" wprowadz liczbe od 1 do 30"<<endl;
    cin>>nrProvided;
    cout<<endl;
    //cout << "Pomyslalem liczbie od 1 do 30" << endl;

      do
    {
        nrTrialas++;
        liczba = rand ()%30+1;

        cout << "wypadla liczba: "<<liczba<<"  w probie: " <<nrTrialas<<endl;

    }while (liczba != nrProvided);

        cout<<endl;
        cout << "potrzebowalismy "<<nrTrialas<<" prob(y) zeby otrzymac wprowadzona liczbe"<<nrProvided<<endl;


    return 0;
}
