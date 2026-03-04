#include<iostream>
using namespace std;

int main()
{
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"                 Reverse String              "<<endl;
    cout<<"<<------------------------------------------->>"<<endl;

    string currentstring;
    string reversedString;

    cout<<"Enter a string to reverse : ";
    cin>>currentstring;

    for(int i = currentstring.length() - 1; i >= 0; i--)
    {
        reversedString += currentstring[i];
    }

    cout<<"Reversed string is : "<<reversedString<<endl;
}