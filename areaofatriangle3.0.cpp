#include <cmath>
#include <iostream>
#include <string>
#include <cctype>
#include <Triangle.h>

using namespace std;

double computeTriangleArea(Triangle t){
    //Esta funcion calcula la area de un triangulo con el input de los 3 lados.
    //Este es el body de la funcion, aqui se coloca el agoritmo que se uso en areaofatriangle.cpp 
    double s = (t.side1 + t.side2 + t.side3) / 2;
    double area = sqrt(s * (s - t.side1) * (s - t.side2) * (s - t.side3));
    return area;
}

int main(){
    //Calcula 3 areas diferentes con la funcion que ya definimos.
    cout << "Area #1 is: " << computeTriangleArea(Triangle(4,13,15)) << endl;
    cout << "Area #2 is: " << computeTriangleArea(Triangle(10,10,10)) << endl;
    cout << "Area #3 is: " << computeTriangleArea(Triangle(20,20,20)) << endl;
}