/*
 * znakiem kończącym tablicę znakową jest \0
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char znak = 'a';
    //dwie metody inicjowania tablic, kiedy zainicjowana z rozmiarem, rozmiaru już nie podajemy 
    char napis[11] = "moj_napis"; 
    //char napis[11] = {'m', 'o', 'j', '_'}; //taki zapis tylko podczas inicjowania tablicy
    
    cout << napis[0];
    /*
    cout << "Podaj znak: ";
    cin >> znak;
    cout << znak << endl;
    cout << "Podaj napis: ";
    cin >> napis;
    cout << napis << endl; */
	return 0;
}

