/*
 * tablica.cpp
 * 
 */


#include <iostream>
using namespace std;

void pobierzOceny(int t[], int r){ //void pobierzOceny, t[] to deklaracja tablicy, int r to nazwa zmiennej. 
    //tablice w każdym przypadku są od razu referencją bez & znaku, gdyż zamiast nazwy jest przekazywany ich adres.
    int i;
    cout << "Podaj " << r << " ocen." << endl;
    for (i=0; i<r; i++){ //petla zaczyna sie od zera i wykonuje sie 20 razy, koncząc na wartości 19
        cout << "Podaj " << i+1 << " ocenę:" << endl;
        cin >> t[i];
        }
    }
    
void drukujTab(int t[], int r){
    int i;
    for(i=0; i<r; i++){
        cout << t[i] << " ";
        }
    }

float srednia(int t[], int r){
    int i, suma = 0;
    for(i=0; i<r; i++){
        suma = suma + t[i];}
    return suma/r;    
    }

int main(int argc, char **argv)
{
    int rozmiar;
    cout << "Podaj rozmiar: " << endl;
    cin >> rozmiar;
    
	int tablica[rozmiar];

    pobierzOceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    //cout << tablica << endl;
        
    cout << endl << srednia(tablica, rozmiar) << endl;

    //for(i=rozmiar-1; i>=0; i--){
    //    cout << tablica[i] << " ";
    //    }
        
    //cout << endl;
        
        
	return 0;
}

