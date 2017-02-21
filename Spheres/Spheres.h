#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.1342;

class Spheres{
    private:
    float radius;
    float volume;

    public:
    float volumeOfSpeheres();
    void getRadiusValues();
    Spheres();
    ~Spheres();
}