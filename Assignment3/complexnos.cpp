/*
Modify the Complex class program to enable input and output of complex numbers via overloaded 
>> and << operators, respectively. 
*/
#include <iostream>
using namespace std;
class Complex{
public:
    friend istream &operator >> ( istream &in, Complex &c);
    friend ostream &operator << ( ostream &out, Complex const &c);

    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }
private:
    int real, img;
};
istream &operator>> (istream &in, Complex &c){
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.img;
    return in;
}
ostream &operator << (ostream &out, Complex const &c){
    out << c.real;
    out << "+i" << c.img << endl;
    return out;
}
int main(){
    Complex c1, c2;
    cin >> c1;
    cout << "The complex 1 is: ";
    cout << c1;
    cin >> c2;
    cout << "The complex 2 is: ";
    cout << c2;
    return 0;

}
