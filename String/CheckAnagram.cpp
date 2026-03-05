#include<iostream>
using namespace std;

int main()
{
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"                  Check Angram                "<<endl;
    cout<<"<<------------------------------------------->>"<<endl;

    string s1;
    string s2;

    cout<<"Enter 1st string  : ";
    getline(cin,s1);
    cout<<"Enter 2nd string  : ";
    getline(cin,s2);

    if(s1.length() != s2.length()) 
    {
        cout << "Not Anagram";
    }

    int count[26] = {0};

    for(int i = 0; i < s1.length(); i++) 
    {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) 
    {
        if(count[i] != 0) 
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";


    
}