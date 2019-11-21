/*
 * fibo.cpp
 */


#include <iostream>
using namespace std;


int fibonacci_it(int n){
    int wynik = 0; int a = 1; int b = 1; //a Fn 1, b Fn-2 
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=2; i<n; i++){
        wynik = a + b; /*/1//2//3//5*/
        cout << "fibonacci_it(" << a << ", " << b << " ) = " << wynik << endl;
        b = a; /*/1//1//2/*/ a = wynik; /*/1//2//3*/ 
        }
    return wynik;
    }
    
int main(int argc, char **argv)
{
    //~int n;
    //~cout << "Podaj liczbę wykonań: " << endl;
    //~cin >> n;
    //~fibonacci_it(n);
	return 0;
}

