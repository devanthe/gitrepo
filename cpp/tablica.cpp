/*
 * tablica.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 5;
    
	int tablica[rozmiar];
    
    int i = 0;
    
    for (i=0; i<rozmiar; i++){ //petla zaczyna sie od zera i wykonuje sie 20 razy, koncząc na wartości 19
        cout << "Podaj " << i << " liczbę:" << endl;
        cin >> tablica[i];
        }
        
    for(i=rozmiar; i>rozmiar; i--){
        cout << tablica[i] << " ";
        }
        
        
	return 0;
}

