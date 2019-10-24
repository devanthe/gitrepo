/*
 * znakiem kończącym tablicę znakową jest \0
 *
 *
 */


#include <iostream>
using namespace std;

void koduj(char tabzn[], int rozmiar){
    int i = 0;
    for(i = 0; i < rozmiar; i++){ //jeśli numery zmienimy cyfry na znaki używając char jeśli są w ok zakresie to wydrukuje nam znak do jakiego należy wg kodu ascii
        if (tabzn[i]  == '\n') {
            cout << 10 << " ";
        } else {
            cout << int(tabzn[i]) << " ";
        }
    }
}

void dekoduj(char tabzn[], int rozmiar){
    int i = 0;
    for(i = 0; i < rozmiar; i++){ //jeśli numery zmienimy cyfry na znaki używając char jeśli są w ok zakresie to wydrukuje nam znak do jakiego należy wg kodu ascii
        cout << char(tabzn[i]) << " ";
        }
    }

int main(int argc, char **argv)
{
    int rozmiar = 1000;
    char tekst[rozmiar] = "the setting sun, nostalgia is calling \n of days long lost, the youth, the strolling \nwith my eyes through the code, in IT class, \nthe soft sounds blasts in my ears, it is my blood, like a bass \n \na calming ringing, the sounds of the bell \nthe childhood music, it reminds you well \nof times before, and before, and that \ninception of nostalgia, deja vu to your heart like a gnat \n \nthe corridors of school were empty \nthought of reminiscence is tempting me \nto tell the tale to no one \ni got lost in thoughts, though, so my mind is gone \n \ni was playing games in between \nand now am wondering what could have been \nhad i taken the time to listen \nwould i be able to glisten \n \nand maybe someday shine \nthere is no one to respond \nso i simply lie, \nthe thoughts of my fates beyond \n \nand so i close my eyes and dream, \nand i dream of what could have been \n";
    char kod[rozmiar] = "";
    koduj(tekst, rozmiar);
    cout << endl << endl;
    dekoduj(kod, rozmiar);
	return 0;
}

