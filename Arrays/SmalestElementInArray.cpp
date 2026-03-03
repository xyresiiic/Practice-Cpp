#include<iostream>
using namespace std;


int main()
{
    int arr[] = {10, 20, 300, 40, 50};
    int n=5;

    int min = arr[0];

    for (int i = 0; i < n; i++)
    {

        if(arr[i]< min)
        {
            min = arr[i];
        }
    }
    cout<<min;
    
}
