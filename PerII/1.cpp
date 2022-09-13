#include <iostream>
using namespace std;

string parImpar(int num);  //Prototipo de función

int main(){
    int numero;
    string cadena;
    cout << "Ingrese el numero: ";
    cin >> numero;
    cadena = parImpar(numero);
    cout << "El numero es: " << cadena;
    return 0;
}
