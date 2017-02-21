#include <iostream>
#include "Spheres.h"

Sphere::Sphere(){}
Sphere::~Sphere(){}

void Spheres::getRadiusValues(){
    cout<<"Enter the radius of the sphere: ";
    cin>>radius;
}

float Spheres::volumeOfSPhere(){
    volume = (4/3)*(pi)*pow(radius,3);

}