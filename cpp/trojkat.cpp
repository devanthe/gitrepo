/*
 * trojkat.cpp
 * 
 * Copyright 2019  <>
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)


{   
    float a, b, c;
    cout << "Podaj długości boku a:" << endl;
    cin >> a;
    cout << "Podaj długości boku b:" << endl;
    cin >> b;
    cout << "Podaj długości boku c:" << endl;
    cin >> c;
    if(a+b>c && a+c>b && b+c>a) {
        cout << "Jest to trójkąt." << endl;
        if(sqrt((a*a) + (b*b)) == sqrt(c*c)){
        cout << "Jest to także trójkąt prostokątny." << endl;} else{
            cout << "Ale to nie jest trójkąt prostokątny!" << endl;}} 
        else{cout << "haha. nie." << endl;}
	
	return 0;
}

