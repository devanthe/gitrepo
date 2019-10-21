/*
 * cw2.cpp
 * 
 * Copyright 2019  <>
 * http://ecg.vot.pl/cpp-funkcje
 */


#include <iostream>
using namespace std;

void drukuj(int staz, int zarobek){
    if(staz == 1){
        cout << "Pracujesz: " << staz << " lat i zarabiasz " << zarobek << endl;}
    }

void awans(int &lata, int &staz, int &zarobek){
    int petla;
    for(petla = 1; petla <= lata; petla++){
        drukuj(staz, zarobek);
        }
    }

int main(int argc, char **argv)
{   
	int staz = 1;
    int zarobek = 1000;
    int lata = 0;
    cout << "Podaj przewidywany okres pracy w latach: " << endl;
    cin >> lata;
    drukuj(staz, zarobek);
    
	return 0;
}

