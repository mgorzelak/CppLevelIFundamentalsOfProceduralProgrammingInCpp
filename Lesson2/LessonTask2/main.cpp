#include <iostream>

using namespace std;

int main()
{
    cout << "liczba assyst" << endl;

    cout << endl;

    int liczbaAssyst = 15;
    int& referencjaDoLiczbyAssyst = liczbaAssyst;

    cout << endl;

    cout << "LA = " << liczbaAssyst << endl;
    cout << "ref do LA = " << referencjaDoLiczbyAssyst << endl;

    liczbaAssyst = 17;

    cout << endl;

    cout << "LA = " << liczbaAssyst << endl;
    cout << "ref do LA = " << referencjaDoLiczbyAssyst<< endl;


    referencjaDoLiczbyAssyst = 20;

    cout << endl;

    cout << "LA = " << liczbaAssyst << endl;
    cout << "ref do LA = " << referencjaDoLiczbyAssyst << endl;



    return 0;
}
