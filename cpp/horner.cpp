/*
 * horner.cpp
 * 
 */


#include <iostream>
using namespace std;

void drukujw(int n, float tbwsp[]){
    int i = 0;
    for(i = 0; i<n+1; i++){
        cout << tbwsp[i] << "x^" << n-1 << "+";
        }
        cout << tbwsp[i] << endl; 
    }
    
float horner_it(int n, float x, float tbwsp[]){
    int i;
    float wynik = tbwsp[0];
    for(i=1; i<n+1; i++){
        wynik = wynik * x + tbwsp[i];
        }
    return wynik;}

int main(int argc, char **argv)
{
	int n = 0;
    float *tbwsp; //tbwsp - tablica współczynników, * - jest wskaźnikiem; przechowuje adres komórki
    float x;
    cout << "Podaj stopień: "; cin >> n;
    tbwsp = new float [n+1]; //współczynników jest zawsze n+1, gdzie n = stopien
    cout << "Podaj argument: "; cin >> x;
    for(int i = 0; i<n+1; i++){
        cout << "Współczynnik przy potędze: " << n-i << ": ";
        cin >> tbwsp[i];  
        }
        
        cout << "Wartość wielomianu o postaci: "; 
        drukujw(n, tbwsp);
        cout << horner_it(n, x, tbwsp) << endl;
	return 0;
}

