#include <iostream>

using std::cin;
using std::cout;

int main() {

    float base, altura;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;
    float area = (base * altura)/2;
    cout<<"El area del triangulo es: "<<area<<"\n";

}
