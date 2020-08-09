#include<iostream>
using namespace std;
class rectangle
{
    float width, length, area, perimeter;
public:
    rectangle()
    {
        width = 1;
        length = 1;
        area = 0;
    }
    void widthset()
    {
        repeat:
            cout << "Enter width : ";
            cin >> width;
            if(width <= 0 || width > 20)
            {
                cout << "Invalid input width can't be greater 20 and less than 0.\n" << endl;
                goto repeat;
            }
    }
    void lengthset()
    {
        repeat:
            cout << "Enter length : ";
            cin >> length;
            if( length <= 0 || length > 20)
            {
                cout << "Invalid input length can't be greater 20 and less than 0.\n" << endl;
                goto repeat;
            }
    }
    void calculate()
    {
        area = width * length;
        perimeter = 2 * (length + width);
    }
    void display()
    {
    cout << "Area of rectangle is " << area << endl;
    cout << "Perimeter of rectangle is " << perimeter << endl;
    }
};
int main()
{
    repeat:
        rectangle rec;
        rec.widthset();
        rec.lengthset();
        rec.calculate();
        rec.display();
}
