#include <cmath>
#include "include/Triangle.h"

    double Triangle::computeTriangleArea(){
        //Esta funcion calcula la area de un triangulo con el input de los 3 lados.
        //Este es el body de la funcion, aqui se coloca el agoritmo que se uso en areaofatriangle.cpp 
        double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
        double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
        return area;
    }