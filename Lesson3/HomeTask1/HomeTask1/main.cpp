#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << " skrzynka pocztowa -sprawdzanie czy sa w niej wiadomosci"<< endl;

    cout <<endl;
    cout<<endl;
	//bool a;
	//cout << " odpowiedz na pytanie czy masz wiadomosc w skrzynce? 1 znaczy tak a 0 znaczy ze nie : "<< endl;
	//cin >> a;
    bool a(1);
	cout << (a==1 ? "Masz wiadomosc " : "skrzynka jest pusta") << endl;


	return 0;
	}
