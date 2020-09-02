/*
Write a complete program that prompts the user for the radius of a sphere, and calculates and prints
the volume of that sphere. Use an inline function sphereVolume that returns the result of the following
expression: (4.0 / 3.0 * 3.14159 * pow(radius, 3)). 
*/

#include<iostream>
#include<math.h>
using namespace std;

int sphereVolume(int r)
{
    return ((4.00/3.00)*3.14159*pow(r,3));
}

int main()
{   
    int radius; 
    cout << "Enter the radius of the sphere : " ;
    cin >> radius;
    cout << "Volume of the sphere is : " << sphereVolume(radius) << endl;
}