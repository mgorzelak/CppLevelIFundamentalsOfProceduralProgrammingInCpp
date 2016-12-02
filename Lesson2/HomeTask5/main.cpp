#include <iostream>

using namespace std;

int main()
{
    cout << "Pitagoras" << endl;

    unsigned short a,b,c;


    cout<< "podaj a,b,c : "<< endl;
    cin >> a;
    cin>>b;
    cin>>c;
    cout << " a jest rowne:"<< a<<endl;
    cout << "b jest rowne: "<< b<< endl;
    cout << " c jest rowne: "<< c<< endl;

    cout << endl;
    if (a >501)
    cout <<" a, b i c musi byc mniejsze niz 501"<<endl;

    return 0;
}
