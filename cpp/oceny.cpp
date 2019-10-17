/*
 * tablica.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    
    int rozmiar = 0;
    cout << "Ile liczb chcesz wprowadzić?" << endl;
    while(rozmiar>0 && rozmiar<=20){
        cin >> rozmiar;
        }
    
	int tablica[rozmiar];
    
    int i = 0;
    
    for (i=0; i<rozmiar; i++){ //petla zaczyna sie od zera i wykonuje sie 20 razy, koncząc na wartości 19
        cout << "Podaj " << i+1 << " liczbę:" << endl;
        cin >> tablica[i];
        }
        
    for(i=0; i<rozmiar; i++){
        cout << tablica[i] << " ";
        }
        
    cout << endl;

    for(i=rozmiar-1; i>=0; i--){
        cout << tablica[i] << " ";
        }
        
    cout << endl;
        
        
	return 0;
}

