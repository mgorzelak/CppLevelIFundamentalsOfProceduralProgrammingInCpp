#include <iostream>

using namespace std;

int main()
{
    cout << " dzienniczek ucznia " << endl;
    cout << endl;
    string nameAndSurnameOfStudent;
    cout <<" podaj imie i nazwisko ucznia: " << endl;
    getline(cin, nameAndSurnameOfStudent);

    string nameOfSchool;
    cout <<" podaj nazwe szkoly: " << endl;
    getline(cin, nameOfSchool);
    cout << endl;
    unsigned int levelOfEducation;
    cout << "wybierz poziom edukacji ucznia: "<< endl;
    cout << "1.Podstawowka"<< endl;
    cout <<"2.Gimnazjum" <<endl;
    cin >> levelOfEducation;
    switch (levelOfEducation)
    {
        case 1:
        cout << "Podstawówka"<< endl;
        unsigned int numberOfClass;
    cout << "wybierz klase: 1-6 podstawowka "<< endl;
    cin >> numberOfClass;
    unsigned int profileOfTheClass;
    cout << "wybierz profil klasy: "<< endl;
    cout << "1.Matematyczna"<< endl;
    cout <<"2.Biologiczna" <<endl;
    cout <<"3.Ogolna"<< endl;
    cin >> profileOfTheClass;
    break;

        case 2:
        cout << "Gimanzjum"<< endl;
        unsigned int numberOfClassesInGim;
        cout <<"wybierz klase 1-3 Gimanzjum" << endl;
        cin>> numberOfClassesInGim;
        unsigned int profileOfTheClassGim;
        cout << "wybierz profil klasy: "<< endl;
        cout << "1.Matematyczna"<< endl;
        cout <<"2.Biologiczna" <<endl;
        cout <<"3.Ogolna"<< endl;
        cin >> profileOfTheClassGim;

        break;
    }
    cout<<"Imie i nazwisko ucznia:  "<<nameAndSurnameOfStudent<<endl;
    cout << "nazwa szkoly: "<< nameOfSchool<<endl;
    cout <<" poziom nauki: "<<levelOfEducation<<endl;
    unsigned int listOfsubjectsGim;
        cout << "lista przedmiotow na ktore uczeszcza uczen: "<< endl;

        if (levelOfEducation==1)
        {
          cout <<" WF, Jezyk Polski, Matematyka"<< endl;
        }
        else if (levelOfEducation==2)
        {
            cout <<" WF, Jezyk Polski, Matematyka , Fizyka i Chemia"<< endl;
        }
        bool additionalCourses;

        cout << "czy uczen uczeszcza na dodatkowe kursy ?"<< endl;
        cin >> additionalCourses;

        cout <<additionalCourses<< endl;

    return 0;
}
