#include <iostream>

using namespace std;

int main()
{
    cout << "oblicz pole figury" << endl;
    cout << endl;

    unsigned int areaOfFigure;
    cout << "wybierz figure dla ktorej chcesz zeby zostalo obliczone pole: "<< endl;
    cout << "1.Trojkat"<<endl;
    cout <<"2.kwadrat"<<endl;
    cout <<"3.Kolo"<<endl;
    cout <<"4.prostokat"<<endl;
    cin>> areaOfFigure;

    switch (areaOfFigure)
    {
       case 1:
		cout << "trojkat" << endl;
		break;
	   case 2:
		cout << "kwadrat" << endl;
		break;
		case 3:
		cout << "kolo" << endl;
		break;
	   case 4:
		cout << "prostokat" << endl;
		break;
	default:
		cout << "zla operacja" << endl;
		break;


    }
    if (areaOfFigure==1)
    {
        unsigned int a,h;
		cout << "podaj bok oraz wysokosc trojkata: "<< endl;
        cin>>a;
        cin>>h;
        cout <<"wprowadziles bok a= " <<a<< "oraz wysokosc h= "<< h<<"pole trojkata wynosi: "<< 0.5*a*h<<endl;
    }
     else if (areaOfFigure==2)
     {
         unsigned int a;
		cout << "podaj bok kwadartu: "<< endl;
        cin>>a;
        cout <<"wprowadziles bok a= " <<a<< "pole kwadratu wynosi: "<< a*a<<endl;
     }
     else if (areaOfFigure==3)
     {
         unsigned int r;
		cout << "podaj promien kola: "<< endl;
        cin>>r;
        cout <<"wprowadziles promien r= " <<r<< "pole kola wynosi: "<< 3.14*r*r<<endl;
     }
     else if (areaOfFigure==4)
     {
         unsigned int a,b;
		cout << "podaj boki prostokata: "<< endl;
        cin>>a;
        cin>>b;
        cout <<"wprowadziles bok a= " <<a<< "oraz bok b= "<<b<<" pole prosatokat wynosi: "<< a*b<<endl;
     }
    return 0;
}
