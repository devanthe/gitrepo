/*
 * cw_tab4.cpp
 * 
 */


#include <iostream>
#include <cstring>

using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
    char tekst[ROZMIAR]; //deklaracja tabeli
    cout << "Podaj tekst: " << endl; 
    cin.getline(tekst, ROZMIAR);
    cout << strlen(tekst) << endl;
    
    

	return 0;
}
