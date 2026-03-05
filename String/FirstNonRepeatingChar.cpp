#include <iostream>
using namespace std;

int main()
{
    string str;
    
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"                 Reverse String                "<<endl;
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"  Enter the string : ";
    cin >> str;

    int count[256] = {0};

    // Count frequency
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    // Find first character with frequency 1
    for(int i = 0; i < str.length(); i++)
    {
        if(count[str[i]] == 1) {
            cout << "  First non-repeating character = " << str[i]<<endl;;
            cout<<"<<------------------------------------------->>"<<endl;
            return 0;
        }
    }

    cout << "No non-repeating character found";
    cout<<"<<------------------------------------------->>"<<endl;

}