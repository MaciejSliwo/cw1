#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie = "Maciej";
    string nazwisko = "Sliwonik";
    int rok_urodzenia = 1996;
    int aktualny_rok = 2017;

    cout<<imie<<" ";
    cout<<nazwisko;
    cout<<" mam ";
    cout<<aktualny_rok - rok_urodzenia;

    return 0;
}
