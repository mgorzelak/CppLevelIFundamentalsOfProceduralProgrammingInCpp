#include <iostream>

using namespace std;

string  inputData()
{
    string name, surname, nameOfSchool;
    cout<<"wprowadz imie, nazwisko ucznia oraz nazwe szkoly"<<endl;
    cin>>name;
    cin>>surname;
    cin>>nameOfSchool;
    return name, surname, nameOfSchool;
}

void  showData()
{
    string name, surname, nameOfSchool;
    cout<<"imie, nazwisko ucznia nazwe szkoly"<<name<<endl;
}

void coursesPrimary ()
{
    cout<<" przedmioty na ktore uczeszcza uczen to jezyk polski, matematyka i WF"<<endl;
}
void coursesGim ()
{
    cout<<" przedmioty na ktore uczeszcza uczen to jezyk polski, matematyka, WF, fizyka i chemia"<<endl;
}
bool additionalCourses ()
{
    bool addtionalCourses;
    cout<<"czy uczen uczeszcza na zajecia dodatkowe, wpisz true or false"<<endl;
    if(addtionalCourses==1)
    {
     cin>>addtionalCourses;
     cout<<"wpisz jakie to kursy: "<<endl;
     string kurs1, kurs2, kurs3;
     cin>>kurs1>>kurs2>>kurs3;

    }
    else



    return false;
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
        unsigned int numberOfClass;
        cout << "wybierz klase: 1-6 podstawowka "<< endl;
        cin >> numberOfClass;
        unsigned int profileOfTheClass;
        cout << "wybierz profil klasy: "<< endl;
        cout << "1.Matematyczna"<< endl;
        cout <<"2.Biologiczna" <<endl;
        cout <<"3.Ogolna"<< endl;
        cin >> profileOfTheClass;
        coursesPrimary();
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

        showData();


        coursesGim();

        break;
    }
     additionalCourses();
    return 0;
}
