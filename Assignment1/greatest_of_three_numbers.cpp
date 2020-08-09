#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    int max = INT_MIN;
    if(num1 > max)
        max = num1;
    if (num2 > max)
        max = num2;
    if(num3 > max)
        max = num3;

    cout << "Largest of three numbers is " << max;
    return 0;
}