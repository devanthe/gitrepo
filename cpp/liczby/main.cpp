#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Podaj długości boku a:" << endl;
    cin >> a;
    cout << "Podaj długości boku b:" << endl;
    cin >> b;
    cout << "Podaj długości boku c:" << endl;
    cin >> c;
    if(a==b==c){
        cout << "Wszystkie liczby są równe!" << endl;}
    else{
        if(a>b){
            if(b>c){cout << c << b << a << endl;}
            else{
                if(c>b){cout << b << c << a << endl;}
                else{cout << "B i C są równe! \n" << b << a << endl;}}}
        if(a>c){
            if(b>c){cout << b << c << a << endl;}
            else{
                if(c>b){cout << c << b << a << endl;}
                else{cout << "B i C są równe! \n" << c << a << endl;}}}
        if(c>b){
            if(b>a){cout << a << b << c << endl;}
            else{
                if(a>b){cout << b << a << c << endl;}
                else{cout << "A i B są równe! \n" << b << c << endl;}}}
    }

    cout << "Hello world!" << endl;
    return 0;
}
