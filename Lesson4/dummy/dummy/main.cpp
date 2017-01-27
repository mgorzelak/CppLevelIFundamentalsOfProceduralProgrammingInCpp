#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wpisz_oceny (float a[10][10])
{
    int i,j,ilo;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
            a[i][j]=0;
    }
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
        ilo=rand()%11;
        for(j=0; j<ilo; j++)
            a[i][j]=rand()%11/2+1;
    }
}

void wyswietl_oceny (float a[10][10])
{
    system("cls");

    int i,j;

    cout<<"uczniowie        oceny"<<endl<<endl;
    for(i=0; i<10; i++)
    {
        cout<<i+1<<"                ";
        for(j=0; j<10; j++)
        {
            if(a[i][j]!=0)cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
    system("pause");
}

void srednia_oceny (float a[10][10])
{
    system("cls");
    float suma[1000],srednia[1000],ilosc[1000];

    int i,j;

    for(i=0; i<10; i++)
    {
        suma[i]=0;
        ilosc[i]=0;

        for(j=0; j<10; j++)
        {
            suma[i]+=a[i][j];
            if(a[i][j]!=0)ilosc[i]++;
        }
    }
    for(i=0; i<10; i++)
    {

        srednia[i]=suma[i]/ilosc[i];

        cout<<i+1<<"   "<<srednia[i]<<endl;
    }
    cout<<endl;
    system ("pause");
}

int main()
{
    char w;
    float oceny[10][10];
    do
    {
        system ("cls");
        cout<<"Wybierz co chcesz zrobic:";
        cout<<"\n\n1. Wpisywanie liczb do tablicy - 1";
        cout<<"\n2. Wyswietlenie liczb z tablicy - 2";
        cout<<"\n3. Obliczenie sredniej - 3";
        cout<<"\n4. Koniec - 4\n";
        cout<<"\n->";
        cin>>w;
        switch(w)
        {
        case '1':
            wpisz_oceny(oceny);
            break;
        case '2':
            wyswietl_oceny(oceny);
            break;
        case '3':
            srednia_oceny(oceny);
            break;
        }
    }
    while(w!='4');
    return 0;
}
