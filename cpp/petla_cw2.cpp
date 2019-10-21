/*
 * petla.cpp
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    int n = 0;
    int m = 0;
    cout << "Podaj pierwszą liczbę przedziału:" << endl;
    cin >> n;
    cout << "Podaj drugą liczbę przedziału:" << endl;
    cin >> m;
    for(int n; n >= m; n += 1){
        cout << n << endl;
        n += 1;
        } 
     // for(początkowa wartość zmiennej
     // iteracyjnej;warunek iteracji (do kiedy ma się wykonywać)
     // ;co ma się dziać, np ikrementacja (powiększenie o 1: 1++) 
     // lub dekrementacja (zmniejszenie o 1: 1--)
	return 0;
}

