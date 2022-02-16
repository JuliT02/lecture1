#include <iostream>
#include "include/Triangle.h"

using namespace std;

int main(){
    //Calcula 3 areas diferentes con la funcion que ya definimos.
    cout << "Area #1 is: " << Triangle(4,13,15).getArea() << endl;
    cout << "Area #2 is: " << Triangle(10,10,10).getArea() << endl;
    cout << "Area #3 is: " << Triangle(20,20,20).getArea() << endl;

    //La suma de las areas 
    Triangle myList[3] { Triangle(4,13,15), Triangle(10,10,10), Triangle(20,20,20) };
    cout << "Sum of areas is: " << Triangle::sumAreas(myList, 3) << endl;

    //Compare triangles
    cout << "Triangle Comparisons: " << endl;
    cout << Triangle(10,10,10).compare(Triangle(20,20,20)) << endl;
    cout << Triangle(20,20,20).compare(Triangle(10,10,10)) << endl;
    cout << Triangle(20,20,20).compare(Triangle(20,20,20)) << endl;
    
    //Scale Triangles
    Triangle dummy(10,10,10);
    Triangle doubleDummy = dummy.scale(2.0);
    Triangle halfDummy = dummy.scale(0.5);
}