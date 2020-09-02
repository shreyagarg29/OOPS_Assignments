/*
A right triangle can have sides that are all integers. A set of three integer values for the sides of a right
triangle is called a Pythagorean triple. These three sides must satisfy the relationship that the sum of
the squares of two of the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for
side1, side2 and hypotenuse all no larger than 500. Use a triple-nested for loop that tries all possibilities.
This is an example of brute force computing. You’ll learn in more advanced computer science courses
that there are many interesting problems for which there’s no known algorithmic approach other than
sheer brute force. 
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Pythagorean triple less than 500 are : " << endl;
    for (int i = 1; i < 500; i++)
    {
        for (int j = 1; j < 500; j++)
        {
            for (int k = 1; k < 500; k++)
            {
                int side1 = i * i;
                int side2 = j * j;
                int side3 = k * k;
                int temp = side2 + side3;
                if (side1 == temp)
                {
                    cout << i << ":" << j << ":" << k << endl;
                }
            }
        }
    }
}