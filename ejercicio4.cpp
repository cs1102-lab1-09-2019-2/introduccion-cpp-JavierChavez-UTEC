#include <iostream>

using namespace std;

int main() {
    int i;
    int c;
    i = 1;

    c = i++;
    cout<<"Post-incremento ejemplo:\n";
    cout<<"El valor de c es: "<<c<<"\n";
    cout<<"El valor de i es: "<<i<<"\n";
    cout<<"\n";
    i = 1;

    c = ++i;

    cout<<"Pre-incremento ejemplo:\n";
    cout<<"El valor de c es: "<<c<<"\n";
    cout<<"El valor de i es: "<<i<<"\n";
    cout<<"\n";

    i--;
    cout<<"Decremento ejemplo: \n";
    cout<<"El valor de i es: "<<i<<"\n";

}
