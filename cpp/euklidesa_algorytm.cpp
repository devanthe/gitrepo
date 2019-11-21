/*
 * euklidesa_algorytm.cpp
 * connect to necessary_evil.html
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a, b, i, znak;
    i = 0;
    cout << "Podaj pierwszą liczbę" << endl;
    cin >> a;
    cout << "Podaj drugą liczbę" << endl;
    cin >> b;
    cout << "Wpisz 1 aby wybrać optymalny algorytm, wpisz 2 by wybrać klasyczny. " << endl;
    cin >> znak;
    switch(znak){
        case 1: //optimal
            while(a>0){a = a%b; b=b-a;}
            cout << "Wynik: " << b;
            break;
        case 2: //classic
            while(a != b){
            if(a>b){a = a - b; i+=1;} else {b = b - a; i+=1;}}
            cout << "Obie liczby są już równe. Wynik: " << a << " Powtórzenia: " << i;
            break;
        }

    
    
    
    
	return 0;
}

