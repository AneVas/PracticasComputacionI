//
// Created by Anel Vargas on 14/10/2021.
//

#include <iostream>
#include <math.h>
#define PI 3.14159265
#include "Punto.h"

using namespace std;
Punto2D::Punto2D() {
   i = 0;
   j = 0;
   k = 0;
}
void Punto2D::SetPosicion(float x, float y) {
    i = x;
    j = y;
}
void Punto2D::Trasladar(float temp1, float temp2) {
    //en este unico caso i e j son como i e j primas, es decir diferentes de i e j
    i = i + temp1;
    j = j + temp2;
}
void Punto2D::RotarRespectoAlOrigen(float temp1){
    //Usando las formulas recordemos que:
    //x'= x*cos theta - y*sen theta

    k = i;
    i = k*cos(temp1*PI/180) - j* sin(temp1*PI/180);
    j = k* sin(temp1*PI/180) + j*cos(temp1*PI-180);
}
void Punto2D::Escalar(float temp1, float temp2) {
    i = i*temp1;
    j = j*temp2;
}
float Punto2D::GetX() {
    return i;
}
float Punto2D::GetY() {
    return j;
}