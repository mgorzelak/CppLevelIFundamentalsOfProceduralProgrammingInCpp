#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    cout << "odtwarzacz muzyki" << endl;
    cout << endl;

    unsigned int typeOfMusic;

    cout << "witaj uzytkowniku, wybierz swoj ulubiony gatunek muczny"<< endl;
    cout <<" 1.Rock" <<endl;
    cout <<" 2.Pop" <<endl;
    cout <<" 3.Jazz" <<endl;
    cout <<" 4.Rnb" <<endl;
    cin>> typeOfMusic;

    switch (typeOfMusic)
    {
        case 1:
		cout << "Rock" << endl;
		break;
	    case 2:
		cout << "Pop" << endl;
		break;

		case 3:
		cout << "Jazz" << endl;
		break;

	    case 4:
		cout << "Rnb" << endl;
		break;

	    default:
		cout << "brak takiej operacji !" << endl;
		break;
	}
    unsigned int regulationOfVolumnes;
    cout << "jak chcesz wyregulowac glosniki: ?"<< endl;
    cout <<"1.Glosno"<<endl;
    cout<<"2.Cicho"<<endl;
    cin>> regulationOfVolumnes;

    switch (regulationOfVolumnes)
    {
        case 1:
        cout <<" glosno "<<endl;
        break;

        case 2:
        cout <<" cicho "<<endl;
        break;

        default:
        cout << "bledny numer operacji";
        break;
    }
unsigned int regulationOfTones;
    cout << "jak chcesz wyregulowac tony: ?"<< endl;
    cout <<"1.Niskie"<<endl;
    cout<<"2.Sredie"<<endl;
    cout <<"3.Wysokie"<<endl;
    cout <<"4. wszystkie"<<endl;
    cout <<"5.Niskie i wysokie tony"<<endl;
    cout<< "6.Srednie i wysokie tony" <<endl;
    cout <<"7.Niskie i Srednie tony"<<endl;
    cin>> regulationOfTones;

    switch (regulationOfTones)
    {
        case 1:
        cout <<" niskie tony "<<endl;
        break;

        case 2:
        cout <<" srednie tony "<<endl;
        break;

        case 3:
        cout <<" wysokie tony "<<endl;
        break;

        case 4:
        cout <<" wszyskie  tony "<<endl;
        break;

        case 5:
        cout <<" niskie i srednie tony "<<endl;
        break;

        case 6:
        cout <<" niskie i wysokie tony "<<endl;
        break;

        case 7:
        cout <<" srednie i wysokie tony "<<endl;
        break;

        default:
        cout << "bledny numer operacji";
        break;
    }
       unsigned int leftVolumne;
       unsigned int rightVolumne;
       cout <<"prawy i lewy glosnik jest wyregulowany jesli oba pracuja tak samo: "<< endl;
       cout <<" podaj natezenie lewego glosnika: od 0 do 10 Db"<<endl;
       cin >> leftVolumne;

       cout<< "skoro lewy glosnik pracuje o natezeniu "<< leftVolumne<< "prawy glosnik pracuje o natezeniu : " << 10-leftVolumne<<"Decybeli"<<endl;
       cout <<"typ muzyki "<<typeOfMusic<<endl;
       cout <<"regulacja tonu: "<<regulationOfTones<<endl;
       cout <<"regulacja glosnosci "<<regulationOfVolumnes<<endl;
       cout <<"lewy glosnik ma w decybelach" <<leftVolumne<< endl;
       cout <<"prawy glosnik w decybelach "<< 10-leftVolumne<<endl;
    return 0;
}
