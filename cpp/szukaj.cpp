/*
 * szukaj.cpp
 * 
 * w domu rere ale przeszukuje tablicę od końca 
 */


#include <iostream>
using namespace std;

int szukaj_it(int liczby[], int ile, int n){
    int indeks = -1;
    for(int i = 0; i < ile; i++) if(liczby[i] == n) return i;
    return indeks;
    }

int rere(int liczby[], int lewy, int prawy, int n){
    if(lewy > prawy){cout << "elementu nie znaleziono" << endl; return -1;} //nie znaleziono elementu e 
    else {if(liczby[lewy] == n){cout << "element jest" << endl; return lewy;} else {rere(liczby, lewy+1, prawy, n);}}}
    
int erer(int liczby[], int lewy, int prawy, int n){ //od końca tutaj
    if(lewy < prawy){cout << "elementu nie znaleziono" << endl; return -1;} //nie znaleziono elementu e 
    else {if(liczby[lewy] == n){cout << "element jest" << endl; return lewy;} else {rere(liczby, lewy-1, prawy, n);}}}

int main(int argc, char **argv)
{
	int liczby[] = {3, 8, 3, 9, 10, 45, 37};
    int n;
    cout << "podaj szukany element" << endl; cin >> n;
    //int indeks = szukaj_it(liczby, 7, n);
    int indeks = erer(liczby, 0, 6, n);
    if(indeks > -1){
        cout << liczby[indeks] << endl;
        }
	return 0;
}

