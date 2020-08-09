#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int temp = num, rev = 0;
    while (temp != 0)
    {
        int r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    if (num == rev)
    {
        cout << "The number " << num << " is a palindrome" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a palindrome" << endl;
    }
    
    
}