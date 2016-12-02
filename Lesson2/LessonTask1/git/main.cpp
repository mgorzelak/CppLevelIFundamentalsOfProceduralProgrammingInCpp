#include <iostream>

using namespace std;

int main()
{
    cout << "Kuba Blaszczykowski- parametrs" << endl;

    cout << endl;

    string name("Kuba Blaszczykowski");
    string club ("Wolsburg");
    unsigned short age (31);
    unsigned short hight(176);
    unsigned short numberOnShirt (16);
    unsigned short redCards;
    bool isHeRightfooted (true);

    cout << "name: "<< name <<endl;
    cout << "club: "<< club <<endl;
    cout << "age: "<< age <<" years"<<endl;
    cout << "hight: "<< hight <<"cm"<<endl;
    cout << "number: "<< numberOnShirt <<endl;
    cout << "is he right footed ?: "<< isHeRightfooted <<" yes"<<endl;

    cout <<"give the number of red cards: "<<endl;
    cin >> redCards;
    cout <<redCards<< "red cards"<<endl;


    return 0;

}
