/*
 * petla2.cpp
 * 
 */
 
#include <iostream>
#include <iomanip>
using namespace std;

void tabliczka(int x, int y){
    int a, b;
    for(a = 1; a <= x; a++){
        for(b = 1; b <= y; b++){
            cout << setw(4) << a*b << " ";
            }
            cout << endl;}}

void prostokat(int x, int y){
    int a, b;
    for(a = 1; a <= x; a++){
        for(b = 1; b <= y; b++){
            cout << "#";}
            cout << endl;}}
            
void pustak(int x, int y){
    int a, b;
    for(a = 1; a <= x; a++){
        for(b = 1; b <= y; b++){
            if (a == 1 || a == x)
                cout << "#";
            else if (b == 1 || b == y)
                cout << "#";
            else
                cout << " ";}
                cout << endl;
            }
        }
            
void choinka(int y){
    int a;
    for(a = 1; a <= y; a++){
        cout << "*";}

int main(int argc, char **argv)
{
    int x, y;
    cout << "Podaj wysokość:";
    cin >> x;
    cout << "Podaj szerokość:";
    cin >> y;
    
    choinka(y);
    // dalej w pracy nie chce mi się lol pustak(x, y);
    // tabliczka(10, 40);
	return 0;
}

