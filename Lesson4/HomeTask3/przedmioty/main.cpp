#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    unsigned int levelOfEducation;


    cout << "wybierz poziom edukacji ucznia: "<< endl;
    cout << "1.Podstawowka"<< endl;
    cout <<"2.Gimnazjum" <<endl;
    cout<<"3.Liceum"<<endl;
    cin >> levelOfEducation;

    switch (levelOfEducation)
    {
    case 1:
        cout << "Podstawowka"<< endl;

        const int SIZE_OF_ARRAY = 4;
        double marks[SIZE_OF_ARRAY];
        int isHalf;
        for(unsigned int i=0; i<SIZE_OF_ARRAY; i++)
        {
            marks[i]= rand ()%6+1;
            if (marks[i]!=6)
            {
                isHalf= rand()%2;
                if (isHalf==1)
                {
                    marks[i]+=0.5;
                }
            }
            cout<<marks[i]<<endl;
        }

        double avarrage, sum;
        sum=0;
        for(unsigned int i=0; i<SIZE_OF_ARRAY; i++)
        {
            sum=sum+marks[i];

        }
        avarrage=sum/SIZE_OF_ARRAY;
        cout<<"srednia jest rowna"<<avarrage<<endl;
        break;
    case 2:
        cout << "gim " << endl;
        break;
    case 3:
        cout << "lic" << endl;
        break;
    default:
        cout << "zly wybor!" << endl;
        break;
    }

    return 0;
}

