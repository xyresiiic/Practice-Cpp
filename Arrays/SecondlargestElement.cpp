#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 50, 30, 40};
    int n = 4;

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second;
}