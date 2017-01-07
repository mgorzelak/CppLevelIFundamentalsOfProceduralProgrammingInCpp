#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "program wyznaczajacy n-ta potege liczby x " << endl;
    cout <<endl;

    int n;
    int x;

    cout <<"podaj n:";
    cin>> n;
    cout<<endl;
    cout <<"podaj x:";
    cin>>x;
    cout<<endl;
    cout <<"wybrales potege n= "<<n<<endl;
    cout <<"wybrales liczbe ktora chcesz potegowac x= "<<x<<endl;


    int  wynik=1;
    for(int i=0;i<n;i++){
    wynik=wynik*x;

    }
    cout <<"wynik: "<<wynik<<endl;

    //rozwiazanie 2
    // wylaczony komentarz do rozwiazania zadania za pomoca bilioteki math i funkcji pow
     //cout <<"potega n liczby x wynosi: "<<pow(x,n)<<endl;

    return 0;
}
