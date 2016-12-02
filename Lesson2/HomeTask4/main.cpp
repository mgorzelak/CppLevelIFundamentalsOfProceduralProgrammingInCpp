#include <iostream>
#include <string>

using namespace std;


int main()

{
    cout << "number of chairs" << endl;

    int numberOfChairs = 10;
    int& numberOfGoests = numberOfChairs;

    cout <<endl;

    cout << " Number of chairs:  " << numberOfChairs << endl;
    cout << "Number of guest: " << numberOfGoests << endl;

    numberOfChairs = 15;

    cout << endl;

    cout << " Number of chairs:  " << numberOfChairs << endl;
    cout << "Number of guest: " << numberOfGoests << endl;

    numberOfGoests= 29;

    cout << endl;

    cout << " Number of chairs:  " << numberOfChairs << endl;
    cout << "Number of guest: " << numberOfGoests << endl;

    return 0;
}
