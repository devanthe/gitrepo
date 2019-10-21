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
    cout << "funkcja dodaj2:" << endl;
    a = 20;
    cout << "a = " << a << endl << "b = " << b << endl;
    cout << "Wynik dodawania1: " << a+b << endl;
    b = 50;
    cout << "a = " << a << endl << "b = " << b << endl;
    cout << "Wynik dodawania2: " << a+b << endl;
    return 0;
    }

int main(int argc, char **argv)
{   
    int a = 1;
    int b = 200; // zmienna lokalna
	cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;
    dodaj2(a, b);
	cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;
	return 0;
}

