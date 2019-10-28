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
    int k = 10; //kolumny
    int i;
    int j;
    int tabm[w][k];
    int n; 
    cout << "Podaj górną granicę losowanych liczb: " << endl;
    cin >> n;
    srand (time(NULL));

    for(i=0; i < w; i++){
        for(j=0; j < w; j++){
            tabm[i][j] = rand() % n+1;
            cout << setw(4) << tabm[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
	return 0;
}
