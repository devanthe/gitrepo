/*
 * petla.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    // int i; // Deklaracja zmiennej
    int i = 0; // Deklaracja i inicjacja zmiennej
    while(i <= 20) { // error i was not declared in this scope - kompilator znalazł nieznaną nazwę
        cout << i << endl; //endl dodaje nową linię po wydrukowaniu
        i += 1; // na końcu instrukcji lol
        }
    
    /* for(int i=0; i <= 20; i += 2) {
        cout << i << endl;
        cout << "Hey;;; ";
        } */
     // for(początkowa wartość zmiennej
     // iteracyjnej;warunek iteracji (do kiedy ma się wykonywać)
     // ;co ma się dziać, np ikrementacja (powiększenie o 1: 1++) 
     // lub dekrementacja (zmniejszenie o 1: 1--)
	return 0;
}

