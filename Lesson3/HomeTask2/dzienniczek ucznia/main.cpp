#include <iostream>

using namespace std;

int main()
{
    cout << "dzienniczek ucznia " << endl;
    cout << endl;
    string nameAndSurnameOfStudent;
    cout <<" podaj imie i nazwisko ucznia: " << endl;
    getline(cin, nameAndSurnameOfStudent);

    string nameOfSchool;
    cout <<" podaj nazwe szkoly: " << endl;
    getline(cin, nameOfSchool);



    cout << " uczen nazywa sie: "<< nameAndSurnameOfStudent<< endl;
    cout << "szkola nazywa sie: "<< nameOfSchool<< endl;

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
        break;

        case 2:
        cout << "Gimanzjum"<< endl;
        break;

        default:
        cout <<" bledny numer operacji"<< endl;
        break;
    }
    if (levelOfEducation==1)
    {
    unsigned int numberOfClass;
    cout << "wybierz klase: 1-6 podstawowka "<< endl;
    cout << "1.Klasa1"<<endl;
    cout << "2.Klasa2"<<endl;
    cout << "3.Klasa3"<<endl;
    cout << "4.Klasa4"<<endl;
    cout << "5.Klasa5"<<endl;
    cout << "6.Klasa6"<<endl;
    cin >> numberOfClass;

    switch (numberOfClass)
    {
        case 1:
        cout << "kl 1"<< endl;
        break;

        case 2:
        cout << "kl 2"<< endl;
        break;


        case 3:
        cout << "kl 3"<< endl;
        break;

        case 4:
        cout << "kl 4"<< endl;
        break;

        case 5:
        cout << "kl 5"<< endl;
        break;

        case 6:
        cout << "kl 6"<< endl;
        break;
        default:
        cout <<" bledny numer operacji"<< endl;
        break;

    }
    } else
    {
        unsigned int numberOfClassesInGim;
        cout <<"wybierz klase 1-3 Gimanzjum" << endl;
        cout <<"1.Klasa1" << endl;
        cout <<"2.Klasa2" << endl;
        cout <<"3.Klasa3" << endl;
        cin>> numberOfClassesInGim;

        switch (numberOfClassesInGim)
        {
            case 1:
        cout << "kl 1"<< endl;
        break;

        case 2:
        cout << "kl 2"<< endl;
        break;

        case 3:
        cout << "kl 3"<< endl;
        break;
        default:
        cout <<" bledny numer operacji"<< endl;
        break;
        }

    }
    unsigned int profileOfTheClass;
    cout << "wybierz profil klasy: "<< endl;
    cout << "1.Matematyczna"<< endl;
    cout <<"2.Biologiczna" <<endl;
    cout <<"3.Ogolna"<< endl;
    cin >> profileOfTheClass;

    switch (profileOfTheClass)
    {
        case 1:
        cout << "Matematyczna"<< endl;
        break;

        case 2:
        cout << "Biologiczna"<< endl;
        break;

        case 3:
        cout <<"Ogolna" <<endl;

        default:
        cout <<" bledny numer operacji"<< endl;
        break;
    }
    unsigned int listOfsubjects;
    cout << "lista przedmiotow na ktore uczeszcza uczen: "<< endl;
    if (levelOfEducation==1)
    {
        cout << "WF, Jezyk Polski, Matematyka "<< endl;
    }
    else {
        cout <<" WF, Jezyk Polski, Matematyka , Fizyka i Chemia"<< endl;
    }
    string additionalCourses;
    cout << "czy uczen uczeszcza na dodatkowe kursy, jesli tak to jakie: ?"<< endl;
    cin >> additionalCourses;
    if (levelOfEducation==1)
    {
        cout << "uczen uczeszcza na WF, Jezyk Polski, Matematyka oraz na: " <<additionalCourses<< endl;

    }
    else
    {
        cout << "uczen uczeszcza na WF, Jezyk Polski, Matematyka , Fizyka i Chemia oraz na: " <<additionalCourses<< endl;
    }
    cout<<"Imie i nazwisko ucznia:  "<<nameAndSurnameOfStudent<<endl;
    cout << "nazwa szkoly: "<< nameOfSchool<<endl;
    cout <<" poziom nauki: "<<levelOfEducation<<endl;
    cout<< "profil klasy: "<< profileOfTheClass<<endl;
    return 0;
}
