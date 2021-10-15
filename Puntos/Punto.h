//
// Created by Anel Vargas on 14/10/2021.
//

#ifndef PUNTO_PUNTO_H
#define PUNTO_PUNTO_H
#include <vector>

using namespace std;
class Punto2D {
public:
   Punto2D();
   void SetPosicion(float x, float y);
   void Trasladar(float x, float y);
   void RotarRespectoAlOrigen(float temp1);
   void Escalar(float temp1, float temp2);
    //Posicion final
    float GetX();
    float GetY();

private:
    float i,j,k;
};


#endif //PUNTO_PUNTO_H
