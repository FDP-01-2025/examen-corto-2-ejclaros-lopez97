#include <iostream>
using namespace std;
int main(){

   int edad, tipoCliente, tipoPlato, estudiante, adulto, todo;
   float precio;
   

cout << "Indique su edad" << endl;
cin >> edad;

if (edad < 12)
{
    cout << "Lo siento no cumples con la edad minima requerida. No puedes continuar con la compra" << endl;

    return 0;
} else
cout << "Indique que su tipo de cliente" << endl;
cout << " 1. Estudiante" << endl;
cout << " 2. Adulto Mayor" << endl;
cout << " 3. Ver Todo" << endl; 

switch (tipoCliente)
{
case 1:
    tipoCliente = estudiante; 
    break;

case 2:
    tipoCliente = adulto;
    break; 
case 3:
    tipoCliente = todo;

default:
    break;
}
cin >> tipoCliente;

cout << "Seleciona tu plato" << endl; 
   cout << "1. Combo Hamburguesa: $8" << endl;
   cout << "2. Combo Pizza Personal: $7" << endl;
   cout << "3. Almuerzo Ejecutivo: $10" << endl; 
cin >> tipoPlato;

switch (tipoPlato)
{
case 1:
    precio = 8; 
    if (tipoCliente = estudiante )
    {
        cout << "El precio de tu plato es de: $" << precio - (precio * 0.25);
    }
    break;
case 2:
precio = 7;
    if (tipoCliente = estudiante)
    {
        cout << "El precio de tu plato es de: $" << precio - (precio * 0.25) << endl;
    }
    break;
case 3:
precio = 10;
     if (tipoCliente = estudiante)
    {
        cout << "El precio de tu plato es de: $" << precio - (precio * 0.25) << endl;
    }
    break;
default: cout << "opcion invalida" << endl; 
    break;
}


    return 0;
}