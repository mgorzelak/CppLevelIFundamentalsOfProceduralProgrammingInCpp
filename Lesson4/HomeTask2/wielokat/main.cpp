#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;



int main()
{
   unsigned int nrOfAngels[10000];
   unsigned int side;
   unsigned int circuit;
   unsigned int a,b,c,d,x,y,z;




    cout<< "mechanizm sprawdzajacy czy, rzeczywiscie ilosc katow odpowiada wielokatowi"<<endl;
    cout<<endl;

     if (nrOfAngels[1])
     {
          cout<<"nie da sie zbudowac wielokata z 1 boku, zdefinuj ponownie liczbe bokow"<<endl;

     }


    else if (nrOfAngels[2])
    {
        cout<<"nie da sie zbudowac wielokata z 2 bokow, zdefinuj ponownie liczbe bokow"<<endl;
    }



    else

    {
       cout<<"da sie zbudowac wielokat"<<endl;
    }

    cout<<endl;


    if (nrOfAngels[100000]>7)

    {
        cout<<" dlugosci bokow losowane sa z zakresu 1-12"<<endl;
        srand (time(NULL)); // Pobieramy liczbę sekund jaka uplynela od 1970 do  momentu wywolania tej linijki
        side = rand ()%12+1;
        cout << side<< endl;
        circuit=nrOfAngels[100000]*side;
        cout <<"obwod jest rowny: " <<circuit<<endl;

    }
    else
        cout<<"podaj dlugosc bokow wielokata: "<<endl;
        cin>>x;
        cin>>y;
        cin>>z;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
  cout<<"obwod jest rowny : "<< a+b+c+d+x+y+z<<endl;

    return 0;
}
