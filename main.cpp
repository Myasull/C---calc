#include <iostream>

using namespace std;
int a;
int b;
int g;
float c;
int main()
{
    cout << "Podaj 1 liczbe" << endl;
    cin >> a;
    cout << "Podaj 2 liczbe" << endl;
    cin >> b;
    cout << "Dodawanie-1, odejmowanie-2, mnozenie-3, dzielenie-4" << endl;
    cin >> g;
    switch (g){
		case 1:
			c=a+b;
			cout << "Wynik: " << c <<endl;
			break;
		case 2:
			c=a-b;
			cout << "Wynik: " << c <<endl;
			break;
		case 3:
		    c=a*b;
            cout << "Wynik: " << c <<endl;
			break;
        case 4:
		    c=a/b;
            cout << "Wynik: " << c <<endl;
			break;
	}
}
