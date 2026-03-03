#include<iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    int max = a;

    if(b>max)
    {
        max = b;
    }
    if(c>max)
    {
        max = c;
    }
    return max;
}


int main()
{
    int num1, num2, num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;

    cout<<"The largest number among "<<num1<<", "<<num2<<" and "<<num3<<" is : ";
    cout<< findMax(num1, num2, num3)<<endl;

}