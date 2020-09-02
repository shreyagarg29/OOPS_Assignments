/*
A palindrome is a string that is spelled the same way forward and backward. Examples of palindromes
include “radar” and “able was i ere i saw elba.” Write a recursive function testPalindrome that returns true
if a string is a palindrome, and false otherwise. Note that like an array, the square brackets ([]) operator
can be used to iterate through the characters in a string. 
*/ 
#include<iostream>
#include<string.h>
using namespace std;

bool testPalindrome(string isPallandrome, int start , int last)
{
  if (start == last)
  {
    return true;
  }

  if ( isPallandrome[start] != isPallandrome[last])
  {
    return false;
  }
  if (start < last)
    testPalindrome(isPallandrome, start + 1, last - 1);

  return true;
}
int main() 
{
  string isPallandrome;
  getline(cin, isPallandrome);
  int last =  isPallandrome.size();
  int start = 0;
  cout << testPalindrome(isPallandrome, start, last - 1);
  return 0;
}