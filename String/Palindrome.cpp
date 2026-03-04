#include<iostream>
using namespace std;

int main()
{

    string currentstring;
    string newstring;

    cout<<"Enter a string to check if it is palindrome or not : ";
    cin>>currentstring;

    for(int i = currentstring.length() - 1; i >= 0; i--)
    {
        newstring += currentstring[i];
    }

    if(currentstring == newstring)
    {
        cout<<"The string is a palindrome."<<endl;
    }
    else
    {
        cout<<"The string is not a palindrome."<<endl;
    }

}