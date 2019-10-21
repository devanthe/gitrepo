/*
 * funkcje.cpp
 * 
 * typ argumentu można zmienić dynamicznie (rzutowanie, ang. casting) 
 * robi się to na przykład (dla float a, b by zmienić na int)
 * cout << "Iloczyn: " << (int)a*(int)b;
 */


#include <iostream>
using namespace std;

void sumuj(float a, float b){
    cout << "Suma: " << a + b << endl;   
    }
    
/* void odejmij(float a, float b){
    cout << "Różnica: " << a - b << endl;   
    } */
    
void odejmij(float a, float b){
    return a-b;   
    }
    
void pomnoz(float a, float b){
    cout << "Iloczyn: " << a*b << endl;   
    }
    
void podziel(float a, float b){
    if(b==0){
    cout << "Dzielenie przez 0!" << endl;}else{cout << "Iloraz: " << a/b << endl;}   
    }
    

int main(int argc, char **argv)
{
    float a, b;
    cout << "Podaj dwie liczby:" << endl;
	cin >> a >> b;
    cout << odejmij(a, b) << endl;
	return 0;
}

