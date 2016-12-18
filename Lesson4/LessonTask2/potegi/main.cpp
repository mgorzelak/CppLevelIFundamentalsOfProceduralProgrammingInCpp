#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "program wyznaczajacy n-ta potege liczby x " << endl;
    cout <<endl;

    int n;
    int x;

    cout <<"podaj n oraz x: "<< endl;
    cin>> n;
    cin>>x;
    cout <<"wybrales potege n= "<<n<<endl;
    cout <<"wybrales liczbe ktora chcesz potegowac x= "<<x<<endl;


   int  wynik=1;
    for(int i=0;i<n;i++){
    wynik=wynik*x;
    cout <<wynik<<endl;
    //rozwiazanie 2
    //cout <<"potega n liczby x wynosi: "<<pow(x,n)<<endl;
    // wylaczony komentarz do rozwiazania zadania za pomoca bilioteki math i funkcji pow
    }
    return 0;
}
