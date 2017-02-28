#include <iostream>
#include "Spheres.h"
#include <cmath>
const float pi = 3.142;
using namespace std;

//  Sphere::Sphere(){
// //     // float iradius = radius;
// //     // float ivolume = volume;
//         cout<<"this is the constructor\n"<<endl;
//  }

void Sphere::getRadiusValues(){
    cout<<"Enter the value of radius: ";
    cin>>radius;
}

void Sphere::volumeOfSphere(){
    volume = (4/3)*(pi)*pow(radius,3);
    cout<<"The volume of the sphere is :\t"<< volume <<endl;
}

void Sphere::surfaceArea(){
}

// Sphere::~Sphere(){
//     cout<<"destructor called"<<endl;
// }