/*Write a complete program that prompts the user for the radius of a sphere, and calculates and prints
the volume of that sphere. Use an inline function sphereVolume that returns the result of the following
expression: (4.0 / 3.0 * 3.14159 * pow(radius, 3)). */
#include<iostream>
using namespace std;
#include <cmath>
    class Sphere{

float radius;
    public:
       inline void get() // use inline prefix
{
   cout << "Enter the length of the radius of your sphere: ";
   cin >> radius;
}

      inline float sphereVolume( const float r )
      {
            return 4.0 / 3.0 * 3.14159 * pow( radius, 3 );
    }

};

int main()
{
    float radius;
    Sphere s;
    s.get();
   cout << "Volume of sphere with radius "<<
           " is " << s.sphereVolume(radius) << endl;
}







