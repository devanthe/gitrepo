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
    cout << "Podaj długości boków trójkąta:";
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a) {
        cout << "Jest to trójkąt";} 
        else{cout << "haha. nie.";}
	if(sqrt((a*a) + (b*b))==sqrt(c*c)){
        cout << "Jest to także trójkąt prostokątny.";}
	return 0;
}

