/*
 * petle_cw1.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    float suma, a = 0;
    while(suma <= 75) {
        cout << "Podaj liczbę:" << endl;
        cin >> a;
        suma += a;
        cout << "Suma jest równa:" << suma << endl;}
	return 0;
}

