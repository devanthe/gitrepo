/*
 * cw_tab4.cpp
 * 
 */
 //~ctrl + e


#include <iostream>
#include <cstring>

using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
    char tekst[ROZMIAR]; //deklaracja tabeli
    cout << "Podaj tekst: " << endl; 
    cin.getline(tekst, ROZMIAR);
    int r = strlen(tekst); 
    
    int i;
    for(i = r; i >= 0; i--){
        cout << tekst[i];}
                    
	return 0;
}
