#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

unsigned int SIZE_OF_ARRAY;
int nrOfAngels;


int sizeOfArray()
{
    unsigned const int SIZE_OF_ARRAY = 20;
    unsigned int nrOfAngels[SIZE_OF_ARRAY];

    return SIZE_OF_ARRAY;
}

bool checkIfPossibleToBulidPolygon ()
{
    if(SIZE_OF_ARRAY<3){

        return false;
    }
    else
    return true;
}

    int main()
    {
        cout << "wielokat- funkcje wlasne!" << endl;
        srand (time(NULL));

        sizeOfArray();
        checkIfPossibleToBulidPolygon ();
        cout<<"sprawdz czy da sie zbudowac: "<<checkIfPossibleToBulidPolygon()<<endl;
        return 0;
    }
