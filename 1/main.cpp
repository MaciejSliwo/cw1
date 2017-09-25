#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string imie;
    string nazwisko;
    int rok_urodzenia;
    int aktualny_rok;

    cout<<"podaj imie"<<endl;
    cin>>imie;
    cout<<"Podaj nazwisko"<<endl;
    cin>>nazwisko;
    cout<<"Podaj rok urodzenia"<<endl;
    cin>>rok_urodzenia;
    cout<<"Podaj aktualny rok"<<endl;
    cin>>aktualny_rok;

    cout<<imie<<" "<<nazwisko<<" mam lat "<<aktualny_rok-rok_urodzenia;

    system("pause");
    return 0;
}
