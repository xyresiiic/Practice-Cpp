#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            // cout<<arr[i]<<" is even"<<endl; ---> use to check which number is even 
            even++;
        }
        else
        {
            // cout<<arr[i]<<" is odd"<<endl; ---> use to check which number is odd
            odd++;
        }
        
    }
    cout<<"Even numbers count : "<<even<<endl;
    cout<<"Odd numbers count  : "<<odd<<endl;
    
}