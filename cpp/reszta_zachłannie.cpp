/*
 * reszta_zachłannie.cpp
 * dokończ w domu na ocenę celującą: wydaj resztę i sprawdź ile jest wszystkich dostępnych nominałów
 */

 
    //~for(int i = 0; i<lN; i++){
        //~if(i==0){
            //~cin >> nom[i];
            //~} else { do {
                //~cin >> nom[i];
                //~} while(nom[i] >= nom[i-1]);}
        //~}
        

#include <iostream>
using namespace std;

int nom[100]; //nominały
int lN; //liczba nominałów

void wczytajNominaly(){
    cout << "Podaj liczbę nominałów: "; cin >> lN;
    cout << "Podaj nominały w kolejności malejącej: " << endl;
    int i = 0;
    int nominal = 0;
    cin >> nominal;
    nom[i] = nominal;
    i++;
    while(i < lN){
        cin >> nominal;
        if(nominal > nom[i-1]){
            cout << "Podano niepoprawną wartość. Nominał większy od poprzedniego." << endl;
            continue;
            }
    nom[i] = nominal;
    i++;}
    for(int i = 0; i<lN; i++){cout << nom[i] << " | ";} cout << endl;
    }
    

int policzNominal(int n){
    int ile = 0;
    for(int i = 0; i > lN; i++){
        if(n > nom[i]) break;
        if(nom[i] == n){
            ile++;
            }
        }
    return ile;
    }
    
void zR(int reszta){ //znajdź resztę
    cout << "Wpłacone nominały: ";
    int aktNom = 0; //aktualny nominał
    while(reszta > 0 && aktNom < lN){
        cout << "Reszta = " << reszta << endl;
        while(reszta < nom[aktNom] && aktNom < lN){
            aktNom++;

            cout << "aktualny nominał: " << nom[aktNom];
            
            if(aktNom < lN && reszta >= nom[aktNom]){
                int lBank = reszta/nom[aktNom]; //liczbaBanknotów
                cout << "Dostępne nominały: " << policzNominal(nom[aktNom]) << endl;
                reszta = reszta - lBank * nom[aktNom];
                cout << lBank << " x " << nom[aktNom] << "zł" << endl; 
                }
            }}}

int main(int argc, char **argv)
{
	wczytajNominaly();
    int cena, wplata = 0;
    cout << "Podaj cenę: "; cin >> cena; 
    do{cout << "Podaj wpłatę: "; cin >> wplata;}while(wplata<cena);
    zR(wplata - cena);
	return 0;
}

