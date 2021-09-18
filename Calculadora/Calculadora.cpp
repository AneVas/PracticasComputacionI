/*
* Author: Anel Vargas
* anelvargas399@gmail.com
* Sept 13, 2021
* */

#include <iostream>
using namespace std;

int main() {

      float a = 0;
      float b = 0;
      float Resultado = 0;

      char suma, resta, producto, division, modulo, operacion;
      string operation;

     cout << "Este programa permite hacer operaciones basicas entre dos numeros" << endl;
      
     cout << "Primer numero" << endl;
     cin >> a; // read 1st number

     cout << "Operacion" << endl;
     cin >> operation; // read operation

     cout << "Segundo numero" << endl;
     cin >> b; // read 2nd number

    //indicamos las posibles opciones que puede introducir e imprimir

    if(operation == "+") {
        cout << "Resultado:" << endl << a << " + " << b << " = " << a + b << endl;
    }
    if(operation == "-") {
        cout << "Resultado:" << endl << a << " - " << b << " = " << a - b << endl;
    }
    if(operation == "*") {
        cout << "Resultado:" << endl << a << " * " << b << " = " << a * b << endl;
    }
    if(operation == "/") {
        cout << "Resultado:" << endl << a << " / " << b << " = " << a / b << endl;
    }
    if(operation == "%") {
        float f = a;
        float t = b;

        int a= static_cast<int>(f);
        int b = static_cast<int>(t);
        cout << "Resultado:" << endl << a << " % " << b << " = " << a % b << endl;
    }
    return 0;
}







