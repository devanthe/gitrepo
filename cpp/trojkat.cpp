/*
 * trojkat.cpp
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)


{
    float a, b, c;
    cout << "Podaj dlugosc boku a:" << endl;
    cin >> a;
    cout << "Podaj dlugosc boku b:" << endl;
    cin >> b;
    cout << "Podaj dlugosc boku c:" << endl;
    cin >> c;
    if(a+b>c && a+c>b && b+c>a) {
        cout << "Jest to trojkat." << endl;
        if(sqrt((a*a) + (b*b))==sqrt(c*c)){
        cout << "Jest to takze trojkat prostokatny." << endl;} else{
            cout << "Ale to nie jest trojkat prostokątny!" << endl;}}
        else{cout << "haha. nie. (to nie jest trojkat.)" << endl;}

	return 0;
}

