/*
 * tablica2w.cpp
 * indeks wiersza-indeks kolumny
 * https://en.wikipedia.org/wiki/Unix_time
 * 32 bitowa liczba sekund
 * 
 * 
 * w domu dokończyć żeby drukował tabliczkę mnożenia
 */


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;


#define N   9 //tak zdefiniowane oznaczenia są nazywane stałymi 
#define M   9 //stałe powinny być oznaczane dużymi literami, w przeciwieństwie do zmiennych, które są oznaczane małymi
//stałe nie mogą być zmieniane podczas działania programu 
//stałe są definiowane w sposób wyżej opisany, NIE jak zmienne.

int main(int argc, char **argv)
{
    int tab2W[N][M];
    int i, j; //zmienne iteracyjne, konwencja mówi są one często i, j
    srand(time(NULL)); //inicjacja generatora liczb pseudo-losowych
    
    for(i=0; i<N; i++){ //po wykonaniu wszystkich pętli wewnętrznych dodaje do i 1 po czym kontynuuje cykl 
        //cout << endl << "》》》》》Tablica " << i+1 << "《《《《《" << endl << endl;
        for(j=0; j<M; j++){ //wewnętrzna pętla j manipuluje j
            //cout << "Wiersz: " << i+1 << " Kolumna: " << j+1 << endl;
            //tab2W[i][j] = rand() % 10;
            tab2W[i][j] = j;
            //cout << "Wartość losowa: " << tab2W[i][j] << endl;  
            cout << setw(4) << tab2W[i][j] << " " ;
            }
        }
    
	return 0;
}

