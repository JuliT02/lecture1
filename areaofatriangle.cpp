#include <cmath>
#include <iostream>
//Esto calcula el area de un triangulo.
//Variables son asignado objetos que son concreto.
int main(){
    double s1 = 4;
    double s2 = 13;
    double s3 = 15;

    double s = (s1 + s2 + s3) / 2;

    double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    std::cout << "Area is: " << area;
}
