#include<iostream>
using namespace std;

float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float multi(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}

int main()
{
    float number1;
    float number2;
    int choice;

    cout<<"1. Add"<<endl;
    cout<<"2. Sub"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Enter the Choice (1-4) : ";
    cin>>choice;

    cout<<"Enter the first number : ";
    cin>>number1;
    cout<<"Enter the second number : ";
    cin>>number2;

    switch (choice)
    {
        case 1:
            cout<<"Result : "<<add(number1, number2)<<endl;
            break;
        case 2:
            cout<<"Result : "<<sub(number1, number2)<<endl;
            break;
        case 3:
            cout<<"Result : "<<multi(number1, number2)<<endl;
            break;
        case 4:
            if(number2 != 0)
            {
                cout<<"Result : "<<div(number1, number2)<<endl;
            }
            else
            {
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        default:
        cout<<"Invalid choice. Please select a number between 1 and 4."<<endl;

    }
    return 0;
}