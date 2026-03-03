#include<iostream>
using namespace std;

int main()
{


    cout<<"<----------------------------------------->"<<endl;
    cout<<"             Right Triangle Star            "<<endl;
    cout<<"<----------------------------------------->"<<endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<" ";
           cout<<"*";
        }
    cout<<endl;
    }


    cout<<"<----------------------------------------->"<<endl;
    cout<<"            Inverted Star Triangle           "<<endl;
    cout<<"<----------------------------------------->"<<endl;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<" ";
           cout<<"*";
        }
    cout<<endl;
    }


    cout<<"<----------------------------------------->"<<endl;
    cout<<"               Full pyramid               "<<endl;
    cout<<"<----------------------------------------->"<<endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}



