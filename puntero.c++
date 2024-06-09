#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    int cantidad = 0;
    int* apuntadorNumero = &numero;

    // Imprimir valor y dirección de 'numero'
    cout << "Valor de numero: " << numero << endl;
    cout << "Dirección de numero: " << &numero << endl;

    // Imprimir dirección y valor del puntero
    cout << "Dirección del apuntador Numero: " << &apuntadorNumero << endl;
    cout << "Valor del apuntador Numero (dirección de numero): " << apuntadorNumero << endl;

    // Entrada del usuario
    cout << "Ingrese una cantidad: ";
    cin >> cantidad;
    numero += cantidad;

    // Imprimir nuevo valor y dirección de 'numero' y 'cantidad'
    cout << "Nuevo valor de numero: " << numero << endl;
    cout << "Dirección de numero: " << &numero << endl;
    cout << "Valor del apuntador Numero (dirección de numero): " << apuntadorNumero << endl;
    cout << "Valor de cantidad: " << cantidad << endl;
    cout << "Dirección de cantidad: " << &cantidad << endl;

    return 0;
}