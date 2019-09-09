#include <iostream>

/* c++ wymaga deklaracji typu zmiennych:
int - liczba całkowita eg 1
float - floating point number eg 1.0
* 
* ' ' pojedyńcza liczba
* 
* "" - ciąg znakw 
* 
* cin - strumień wyjścia

kompilacja w geany jest pod F8, zbuduj/compile
*
pliki cpp muszą być osobno kompilowane w zależności od systemu w którym będą używane

linkowanie w geany F9, zbuduj/build

F5 by wywołać
* 
* Preferencje/Narzędzia
* terminator -e "/bin/sh %c" - terminal e znaczy execute i ścieżka obv
* 
* g++ -Wall -o "%e.exe" "%f" - Wall wyświetlaj ostrzeżenia i błędy, o means output, %e.exe tworzy plik o rozszerzeniu .exe*/

using namespace std;


int main(int argc, char **argv)
{
  int liczba1;
	float liczba2;
	cout << "Podaj liczbę całkowitą: "; //operatow wyprowadzania <<
	cin >> liczba1; //operator wprowadzania/pobierania >>
	cout << "Podałeś: " << liczba1;
	return 0;
}
