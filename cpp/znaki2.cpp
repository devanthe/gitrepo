/*
 * znakiem kończącym tablicę znakową jest \0
 * 
 * 
 */


#include <iostream>
using namespace std;

/*void ascii(){
    int i = 0;
    for(i = 65; i < 91; i++){ //jeśli numery zmienimy cyfry na znaki używając char jeśli są w ok zakresie to wydrukuje nam znak do jakiego należy wg kodu ascii
        cout << i << " - " << char(i) << endl;
        }
    }*/

void litery2liczby(char tabzn[], int rozmiar){
    int i = 0;
    for(i = 0; i < rozmiar; i++){ //jeśli numery zmienimy cyfry na znaki używając char jeśli są w ok zakresie to wydrukuje nam znak do jakiego należy wg kodu ascii
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;
        }
    }

int main(int argc, char **argv)
{
    int rozmiar = 15;
    char napis[15] = "Allah ma kota!"; 
    litery2liczby(napis, rozmiar);
    //ascii();
	return 0;
}

