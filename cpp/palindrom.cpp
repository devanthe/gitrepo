/*
 * palindrom.cpp
 * 
 * Copyright 2019  <>
 * 
 */


#include <iostream>
#include <cstring>
using namespace std;

bool czy_palindrom(char tekst[], int pr){
    int i;
    for(i = 0; i < pr/2; i++){
        if(tekst[i] == tekst[pr-1-i]){;} else {return false;}}
        return true;
}

void removeSpaces(char tekst[], char fixed[]){
    int pr = strlen(tekst);
    for(int i = 0; i < pr; i++){
        if(tekst[i] != ' '){
            fixed[i] = tekst[i];
            }}}

int main(int argc, char **argv)
{   
    int r = 20;
    char tekst[r];
    char fixed[r];
    cin.getline(tekst, r);
    int pr = strlen(tekst);
    removeSpaces(tekst, fixed);
    if (czy_palindrom(tekst, pr)){
        cout << "tak ";
        } else { cout << "nie";}
	return 0;
}

