// finding second maximum and minimum in array
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    cout << "Enter elements of array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    cout << "Second largest number in array is " << a[n - 2] << endl;
    cout << "Second smallest number in array is " << a[1] << endl;
    return 0;
}