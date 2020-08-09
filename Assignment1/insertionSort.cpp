//INSERTION SORT
#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--)
        {
            if (curr < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = curr;
    } 
}
int main()
{
    int size;
    int arr[100];
    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter elements of array : ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr,size);
    cout << "Sorted array : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}