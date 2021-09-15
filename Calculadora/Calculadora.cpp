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
      int answer = 0;

      char suma, resta, producto, division, modulo, operacion;
      string operation;

     cout << "Enter the first number" << endl;
     cin >> a; // read 1st number

     cout << "Enter the operation" << endl;
     cin >> operation; // read operation

     cout << "Enter the second number" << endl;
     cin >> b; // read 2nd number

    //indicamos las posibles opciones que puede introducir e imprimir

    if(operation == "+") {
        answer = a + b;
    }
    if(operation == "-") {
        answer = a - b;
    }
    if(operation == "*") {
        answer = a * b;
    }
    if(operation == "/") {
        answer = a / b;
    }
    if(operation == "%") {
        float f = a;
        float t = b;

        int a= static_cast<int>(f);
        int b = static_cast<int>(t);
        answer = a % b;
    }
        cout << " The answer is =  " << answer << endl;


    return 0;
}







