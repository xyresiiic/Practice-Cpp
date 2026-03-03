#include<iostream>
using namespace std;

int factorial(int num)
{

    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1); // recursion

}

int main()
{
    int number;
    cout<<"Enter a number to find its factorial: ";
    cin>>number;

    cout<<"The factorial of "<<number<<" is : "<<factorial(number)<<endl;
}
