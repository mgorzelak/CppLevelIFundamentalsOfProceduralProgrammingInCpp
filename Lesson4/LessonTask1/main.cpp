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
     cout <<"0\n";
     for(int i=0;i<n-1;i++)
     {
            cout<<b<<" ";
            b =b+ a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
            a = b-a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
     }

    return 0;
}



