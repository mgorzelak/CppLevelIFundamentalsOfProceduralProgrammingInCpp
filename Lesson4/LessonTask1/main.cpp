#include<iostream>

using namespace std;

int main()
{

     cout << "fibonacci ciag- kolejne wyrazy"<< endl;
     cout<< endl;
     unsigned int a = 0, b = 1;
     unsigned int n;

     cout <<"podaj ile chesz miec wyrazow ciagu fibbonacciego: "<< endl;
     cin>> n;
     if (n==0)
     {
         cout << "0"<<endl;

     }
     else if (n==1){
        cout<<"0 1"<<endl;
     }
     else
     {
         cout<< "0 1 ";
         for(int i=2; i<=n-1; i++)
         {
                b =b+ a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
                a = b-a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
                cout<<b<<" ";
         }

     }
    return 0;
}



