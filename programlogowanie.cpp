#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

   while((login!="admin")&&(haslo!="admin"))
    {
        cout<<"nieprawidlowy login lub haslo"<<endl;
        cout << "Podaj login: ";
        cin >> login;
        cout << "Podaj haslo: ";
        cin >> haslo;
    }
    cout<<"udalo sie zalogowac";

    return 0;
}