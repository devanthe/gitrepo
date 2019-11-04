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
    int count = 0;
    char tekst[ROZMIAR]; //deklaracja tabeli
    cout << "Podaj tekst: " << endl; 
    cin.getline(tekst, ROZMIAR);
    int r = strlen(tekst);
    for(int i=0; i<r; i++){
            if((int(tekst[i]) >= 65 && int(tekst[i]) <= 90) || (int(tekst[i]) >= 97 && int(tekst[i]) <= 122) || int(tekst[i]) == 32 || (int(tekst[i]) >= 48 && int(tekst[i]) <= 57)){
                count += 1;
                }}
    
    cout << count;
                    
                    
                    
	return 0;
}
