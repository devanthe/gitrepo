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
    int rozmiar = 5;
    int tab1[rozmiar];
    int tab2[rozmiar];
    int i;
    int j;
    int tabm[5][5]; //tabm[rozmiar] basically
    
    for(i = 0; i < rozmiar; i++){
        cout << "Podaj " << i+1 << " liczbę pierwszej tablicy: " << endl;
        cin >> tab1[i];
        }
    
    cout << endl << endl;
        
    for(j = 0; j < rozmiar; j++){
        cout << "Podaj " << j+1 << " liczbę drugiej tablicy: " << endl;
        cin >> tab2[j];
        }
    
    cout << endl << endl;
        
    for(i=0; i < rozmiar; i++){
        for(j=0; j < rozmiar; j++){
            tabm[i][j] = tab1[i] + tab2[j];
            cout << setw(4) << tabm[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
	return 0;
}
