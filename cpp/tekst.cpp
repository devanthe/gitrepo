/*
 * tekst.cpp
 */


#include <iostream>
using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i;
    cout << "Podaj zdanie: " << endl;
    cin.getline(tekst, ROZMIAR);
    //cout << tekst << endl; 
    for(int i = 0; i < ROZMIAR; i++){
        cout << tekst[i] << " ";
        }
    cout << endl;
    
    int count = 0;
    i = 0;
    while (tekst[i] != '\0') {
        cout << tekst[i];
        i++;
        count += 1;
        }
    cout << endl << count;
	return 0;
}

