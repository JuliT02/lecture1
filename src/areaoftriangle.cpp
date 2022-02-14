#include <iostream>
#include "include/Triangle.h"

using namespace std;

int main(){
    //Calcula 3 areas diferentes con la funcion que ya definimos.
    cout << "Area #1 is: " << Triangle(4,13,15).computeTriangleArea() << endl;
    cout << "Area #2 is: " << Triangle(10,10,10).computeTriangleArea() << endl;
    cout << "Area #3 is: " << Triangle(20,20,20).computeTriangleArea() << endl;
}