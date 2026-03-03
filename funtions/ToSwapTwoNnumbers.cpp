#include<iostream>
using namespace std;

void swapNumber(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1=10;
    int num2=20;

    swapNumber(num1, num2);
    cout<<"After swapping : "<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}