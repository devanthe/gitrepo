/*
 * sort.cpp
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n){srand(time(NULL)); for(int i = 0; i < n; i++){tab[i] = rand() % n;}}
void wyswietl(int tab[], int n){ for(int i=0; i<n; i++){cout << tab[i] << " ";}}
void copytab(int tab1[], int tab2[], int n){for(int i=0; i < n; i++){tab2[i] = tab1[i];}}
void zamien(int &a, int &b){int c = a; a = b; b = c;}
//void insert(int tab[], int n){int i, k, el; for(i=1; i<n; i++){el = tab[i]; k = i - 1; while(k >= 0 && tab[k] < el){tab[k+1] = tab[k]; k--;} tab[k+1] = el;}}
void select(int tab[], int n){int i, j, k; for(i=1; i<n; i++){k = i; for(j = i + 1; j < n; j++){if(tab[j]<tab[k]){k = j;}zamien(tab[k], tab[i]);}}}
void bubso(int tab[], int n){for(int i = n-1; i > 0; i--){cout << "index i = " << i << endl; for(int j = 0; j < i; j++){cout << "index - j: " << j << " "; if(tab[j] < tab[j+1]){zamien(tab[j], tab[j+1]);}}}}

int main(int argc, char **argv)
{
	int tab[50];
    int tab2[50];
    int n;
    cout << "Ile elementów ma zawierać tablica? (max=50)" << endl;
    cin >> n;
    wypelnij(tab, n); 
    copytab(tab, tab2, n);
    wyswietl(tab2, n); cout << endl;
    select(tab2, n);
    wyswietl(tab2, n);
    //insert(tab2, n);
    bubso(tab2, n);
    wyswietl(tab2, n);
	return 0;
}

