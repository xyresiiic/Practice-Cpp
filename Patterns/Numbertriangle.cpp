#include<iostream>
using namespace std;
int main()
{

    cout<<"<----------------------------------------->"<<endl;
    cout<<"           Pyramid same number            "<<endl;
    cout<<"<----------------------------------------->"<<endl;

    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
           cout<<" ";
           cout<<i;
        }
    cout<<endl;
    }

    cout<<"<----------------------------------------->"<<endl;
    cout<<"           Pyramid diff number            "<<endl;
    cout<<"<----------------------------------------->"<<endl;

    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
           cout<<" ";
           cout<<j;
        }
    cout<<endl;
    }

    cout<<"<----------------------------------------->"<<endl;
    cout<<"           Full number pyramid            "<<endl;
    cout<<"<----------------------------------------->"<<endl;
    
    int n = 4;

    for(int i = 1; i <= n; i++)
    {

        for(int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for(int j = 1; j <= 2*i - 1; j++)
        {
            cout << j;
        }

        cout << endl;
    }

}