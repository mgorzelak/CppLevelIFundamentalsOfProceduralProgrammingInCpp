#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int a,b;

int inputNumberFrom1To30 ()
{

    cin>>a;
   return a;
}

//int randNumberFrom1To30 ()
//{
//    srand (time(NULL));
 //   int b;
 //   b= rand ()%30+1;
 //   return b;
//}

int main()
{
    srand (time(NULL));
    cout << "wprowadz liczbe- funkcje wlasne" << endl;

    int nrTrialas=0;

    inputNumberFrom1To30();

do
   {
       nrTrialas++;
        b= rand ()%30+1;

        cout << "wypadla liczba: "<<b<<"  w probie: " <<nrTrialas<<endl;

    }
   while (b != a);

    cout<<endl;
    cout << "potrzebowalismy "<<nrTrialas<<" prob(y) zeby otrzymac wprowadzona liczbe"<<a<<endl;


    return 0;
}



