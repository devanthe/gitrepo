/*
 * funkcje2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int b = 10; //zmienne globalne nie są zalecane w długich programach

int dodaj(){ 
    int a = 0; //zmienna lokalna
    int b = 50;
    cout << a << endl << "zmienna globalna b = " << b << endl;
    return 0;
    }
    
int dodaj2(int a, int b){ //a i b deklarowane tutaj stają się zmiennymi lokalnymi, deklarowanie ich po raz drugi w funkcji to byłoby nadpisanie
    return a+b;
    }

void modyfikuj(int x, int y, int &z){ //void nie zwraca NICZEGO, no chyba że przekażesz argument przez referencje
    cout << "Adres zmiennej nadpisanej: " << &z << endl;
    z = x + y + 50;}

int main(int argc, char **argv)
{   
    int a = 1;
    int b = 200; // zmienna lokalna
	cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;
    int suma = dodaj2(a, b);
    cout << "Wynik: " << suma << endl;
    modyfikuj(a, b, suma);
    cout << "Wynik po modyfikacji: " << suma << endl;
    cout << "they're the same picture" << endl;
    cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;
	return 0;
}

