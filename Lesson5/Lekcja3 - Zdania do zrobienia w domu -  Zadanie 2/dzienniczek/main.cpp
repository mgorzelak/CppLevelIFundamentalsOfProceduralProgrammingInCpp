#include <iostream>

using namespace std;
string name, surname, nameOfSchool;
unsigned int numberOfClass;

unsigned int profileOfTheClass;

string additionalCourses;

bool checkAdditionalCourses ()
{
    bool isParticipantAddtionalCourses = false;
    cout<<"Czy uczen uczeszcza na zajecia dodatkowe, wpisz true or false"<<endl;
    cin>>isParticipantAddtionalCourses;
    return isParticipantAddtionalCourses;
}

void inputData()
{
    cout<<"wprowadz imie"<<endl;
    cin>>name;
    cout<<"wprowadz nazwisko ucznia " <<endl;
    cin>>surname;
    cout<<"wprowadz nazwe szkoly"<<endl;
    cin>>nameOfSchool;
}

void  showData()
{
    cout<<"imie ucznia "<<name<<endl;
    cout<<"nazwisko ucznia "<<surname<<endl;
    cout<<"nazwa szkoly "<<nameOfSchool<<endl;
    cout<<"nrKlasy klasy "<<numberOfClass<<endl;
    cout<<"profil klasy "<<profileOfTheClass<<endl;
    if(checkAdditionalCourses())
    {
        cout<<"Uczen uczeszcza na dodatkowe kursy :"<<additionalCourses<<endl;
    }
    else
    {
        cout<<"Uczen nie uczeszcza na zajecia dodatkowe"<<endl;
    }

}
void showCourses(unsigned int levelOfEducation)
{
    if(levelOfEducation==1)
    {
        cout<<" przedmioty na ktore uczeszcza uczen to jezyk polski, matematyka i WF"<<endl;
    }
    else
    {
        cout<<" przedmioty na ktore uczeszcza uczen to jezyk polski, matematyka, WF, fizyka i chemia"<<endl;
    }
}


int main()
{
    cout << "dzieniczek- funkcje wlasne" << endl;
    cout<<endl;
    inputData ();

    unsigned int levelOfEducation;
    cout << "wybierz poziom edukacji ucznia: "<< endl;
    cout << "1.Podstawowka"<< endl;
    cout <<"2.Gimnazjum" <<endl;
    cin >> levelOfEducation;
    switch (levelOfEducation)
    {
    case 1:
        cout << "Podstawowka"<< endl;

        cout << "wybierz klase: 1-6 podstawowka "<< endl;
        cin >> numberOfClass;

        cout << "wybierz profil klasy: "<< endl;
        cout << "1.Matematyczna"<< endl;
        cout <<"2.Biologiczna" <<endl;
        cout <<"3.Ogolna"<< endl;
        cin >> profileOfTheClass;

        break;

    case 2:
        cout << "Gimanzjum"<< endl;

        cout <<"wybierz klase 1-3 Gimanzjum" << endl;
        cin>> numberOfClass;

        cout << "wybierz profil klasy: "<< endl;
        cout << "1.Matematyczna"<< endl;
        cout <<"2.Biologiczna" <<endl;
        cout <<"3.Ogolna"<< endl;
        cin >> profileOfTheClass;

        break;
    }

    if(checkAdditionalCourses())
    {
        cin.ignore();
        cout << "Podaj nazwy kursow: " << endl;
        getline(cin, additionalCourses);
    }
    showData();
    return 0;
}
