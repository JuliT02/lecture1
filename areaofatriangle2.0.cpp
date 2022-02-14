#include <cmath>
#include <iostream>
//La forma mas efectiva de hacer un algoritmo de el area de el triangulo es creando una FUNCION:
//Un function es un algorithm que puede ser llamado multiples veces, preveninendo repitiendo el codigo y acomodandolo de forma efectiva
using namespace std;

double computeTriangleArea(double s1, double s2, double s3){
    //Esta funcion calcula la area de un triangulo con el input de los 3 lados.
    //Este es el body de la funcion, aqui se coloca el agoritmo que se uso en areaofatriangle.cpp 
    double s = (s1 + s2 + s3) / 2;
    double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    return area;
}

int main(){
    //Calcula 3 areas diferentes con la funcion que ya definimos.
    cout << "Area #1 is: " << computeTriangleArea(4,13,15) << endl;
    cout << "Area #2 is: " << computeTriangleArea(10,10,10) << endl;
    cout << "Area #3 is: " << computeTriangleArea(20,20,20) << endl;
}