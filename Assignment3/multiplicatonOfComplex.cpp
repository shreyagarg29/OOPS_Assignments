//Overload the multiplication operator to enable multiplication of two complex numbers as in algebra. 
#include<iostream>
using namespace std;

class Complex
{
    public: 
    Complex(int r = 0 ,int i =0)
    {
       real = r;
       img = i;    
    }
    void print()
    {
       cout << real << " + i" << img << "\n";
    }
    Complex operator+ (Complex const &obj)
    {
       Complex result ;
       result.real = real + obj.real;
       result.img = img + obj.img;
       return result; 
    }
    void operator << (Complex const &obj) 
    {
        cout << real << " + i" << img << "\n";
    }
    
    void operator >> (Complex const &obj)
    {
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Img part: ";
        cin >> img;
    }
    
    Complex operator * (Complex const &obj)
    {
        Complex result;
        result.real =  ((real*obj.real) -  (img * obj.img));
        result.img = ((real*obj.img) + (img * obj.real));
        return result;
    }

    private: 
    int real ,img ;
};

int main()
{
    Complex c1(10,5), c2(2,4);
    Complex c3;
    c3 = c1 * c2;
    c3 << c3;
    Complex c4 ;
    c4 >> c4 ;
    cout << "The Number you have entered is ";
    c4 << c4;
}