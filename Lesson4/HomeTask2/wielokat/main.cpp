#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;



int main()
{


     srand (time(NULL));
   unsigned const int SIZE_OF_ARRAY = 15;
   unsigned int nrOfAngels[SIZE_OF_ARRAY];


   unsigned int circuit;

   //cout<<sizeof(nrOfAngels)/sizeof(nrOfAngels[0])<< endl;
    cout<< "mechanizm sprawdzajacy czy, rzeczywiscie ilosc katow odpowiada wielokatowi"<<endl;
    cout<<endl;
   if(SIZE_OF_ARRAY<3) {
       cout<<"nie da sie zbudowac wielokata"<<endl;
   } else {

        if (SIZE_OF_ARRAY<7) {
           for(unsigned int i=0;i<SIZE_OF_ARRAY;i++) {
               cout<<"podaj dl boku: "<<endl;
               cin>>nrOfAngels[i];
           }
       } else {
            for(unsigned int i=0;i<SIZE_OF_ARRAY;i++) {
               nrOfAngels[i]= rand ()%12+1;
            }
       }

       circuit=0;
       for(unsigned int i=0;i<SIZE_OF_ARRAY;i++) {
               circuit=circuit+nrOfAngels[i];
            }
       cout<<"obowd wynosi: "<<circuit<<endl;
   }


    return 0;
}
