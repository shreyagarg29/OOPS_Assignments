//Check whether a string palindrome.
#include<iostream>
#include<cstring>
using namespace std;
bool checkPalindrome(char str[])
{
    int len = strlen(str);
    int start = 0, end = len - 1;
    while(start <= end)
    {
        if(str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char str[1000];
    cout << "Enter a string : ";
    cin.getline(str,1000);

    if(checkPalindrome(str))
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "the string is not a palindrome" << endl;
    }
    
}