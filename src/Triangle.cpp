#include <cmath>
#include "include/Triangle.h"

double Triangle::getArea(){
    //Esta funcion calcula la area de un triangulo con el input de los 3 lados.
    //Este es el body de la funcion, aqui se coloca el agoritmo que se uso en areaofatriangle.cpp 
    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area; 
}

double Triangle::sumAreas(Triangle list[], int numTriangles){

    double sum = 0;
    for (int i = 0; i < numTriangles; i++){
        sum += list[i].getArea();
    }

    return sum;
}

int Triangle::compare(Triangle t){
    double diff = this->getArea() - t.getArea();
    if (diff < 0) return -1;
    if (diff > 0) return 1;
    return 0;

}