/*
A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an
additional $0.50 per hour for each hour or part thereof in excess of three hours. The maximum charge
for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time.
Write a program that calculates and prints the parking charges for each of three customers who parked
their cars in this garage yesterday. You should enter the hours parked for each customer. Your program
should print the results in a neat tabular format and should calculate and print the total of yesterday’s
receipts. The program should use the function calculateCharges to determine the charge for each
customer. 
*/
#include<iostream>
#include<math.h>
using namespace std;

float charges(float hours)
{
    float price = 2.00;
    if(hours > 3)
    {
        int cost = hours - 3;
        price += cost * 0.50;
        if(price > 10.00)
        {
            price = 10.00;
        }
    }
    return price;    
}
int main()
{   
    int n;
    cin >> n;
    float arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Car  Hours   Charge\n";
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << "    " << arr[i] << "       " << charges(arr[i]) << "\n";
    }
}