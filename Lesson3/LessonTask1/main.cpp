#include <iostream>

using namespace std;

int main()
{
    cout << "kalkurator" << endl;

    cout << endl;
    double a, b;

    cout << "podaj dwie liczby: "<< endl;
    cin >> a;
    cin >>b;

    cout << endl;
    cout << "podales liczbe a : "<< a<< "oraz b : "<< b<< endl;

    unsigned int operation;
    cout << "wybierz numer operacji : "<< endl;
    cout << "1.dodawanie"<< endl;
    cout << "2.odejmowanie"<< endl;
    cout << "3.mnozenie"<< endl;
    cout << "4.dzielenie"<< endl;
    cin >> operation;


    switch (operation)
    {
        case 1:
        cout << "dodawanie"<< a+b<< endl;
        break;

        case 2:
        cout << "odejmowanie"<< a-b<< endl;
        break;


        case 3:
        cout << "mnozenie"<< a*b<< endl;
        break;


        case 4:
        cout << "dzielenie"<< a/b<< endl;
        break;

        default:
        cout <<" bledny numer operacji"<< endl;
        break;
    }
    //c=a+b;
    //cout << "po dodaniu liczb a i b: "<< c << endl;

    return 0;
}
