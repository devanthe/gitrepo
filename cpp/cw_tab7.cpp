/*
 * cw_tab4.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znak;
    cout << "Podaj znak dzia�ania: " << endl;
    cin >> znak;
    float a, b;
    cout << "Podaj pierwsz� liczb�: " << endl;
    cin >> a;
    cout << "Podaj drug� liczb�: " << endl;
    cin >> b;
    switch(znak){
        case '+':
            cout << "Wynikiem dodawania jest: " << a+b;
            break;
        case '-':
            cout << "Wynikiem odejmowania jest: " << a-b;
            break;
        case '/':
            cout << "Wynikiem dzielenia jest: " << a/b;
            break;
        case '*':
            cout << "Wynikiem mno�enia jest: " << a*b;
            break;

    }
	return 0;
}
