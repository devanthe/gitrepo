/*
 * cw1.cpp
 * 
 * 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{   
    int w = 5; //wiersze
    int k = 7; //kolumny
    int i, j, a, r;
    int tabm[w][k];
    cout << "Podaj liczbę startową: " << endl;
    cin >> a;
    cout << "Podaj liczbę o którą powiększać: " << endl;
    cin >> r;
    
    srand (time(NULL));

    for(i=0; i < w; i++){
        for(j=0; j < k; j++){
            tabm[i][j] = a+(i+1)*(j+1)*r;
            cout << setw(4) << tabm[i][j] << " ";}
        cout << endl;
    }
    
    
    
	return 0;
}
