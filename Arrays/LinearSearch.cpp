#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int key = 30;
    bool found = false;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == key)
        {
           found = true;
           cout<<"Element found at index : "<<i<<endl;
           break;
        }
        
    }
    if (!found)
    {
        cout<<"Element not found in the array."<<endl;
    }

}