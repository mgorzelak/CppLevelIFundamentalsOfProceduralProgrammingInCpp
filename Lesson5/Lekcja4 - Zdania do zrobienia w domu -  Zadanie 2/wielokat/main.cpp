#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const unsigned int SIZE_OF_ARRAY = 20;
unsigned int nrOfAngels [SIZE_OF_ARRAY];

void checkHowManySides ()
{
    if(SIZE_OF_ARRAY<3)
    {
        cout<<"nie da sie zbudowac wielokata"<<endl;
    }
    else
    {

        if (SIZE_OF_ARRAY<7)
        {
            for(unsigned int i=0; i<SIZE_OF_ARRAY; i++)
            {
                cout<<"podaj dl boku: "<<endl;
                cin>>nrOfAngels[i];
            }
        }
        else
        {
            for(unsigned int i=0; i<SIZE_OF_ARRAY; i++)
            {
                nrOfAngels[i]= rand ()%12+1;
            }
        }
    }

}
unsigned int countCircuit()
{
    unsigned int circuit = 0;
    for(unsigned int i=0; i<SIZE_OF_ARRAY; i++)
    {
        circuit=circuit+nrOfAngels[i];
    }
    cout<<"obowd wynosi: "<<circuit<<endl;
    return circuit;
}

int main()
{
    cout << "wielokat- funkcje wlasne!" << endl;
    srand (time(NULL));

        checkHowManySides();

        if(SIZE_OF_ARRAY > 2)
        {
            countCircuit();
        }


    return 0;
}
