#include<iostream>
using namespace std;


int main()
{
    int Sum = 0;

    int arr[] = {10, 20, 30, 40, 50};
    int n=5;

    for (int i = 0; i < n; i++)
    {

        Sum += arr[i];
    
    }
    cout<<"sum is     : "<<Sum<<endl;
    cout<<"Average is : "<<Sum/n<<endl;
    
}
