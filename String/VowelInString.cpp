#include<iostream>
using namespace std;

int main()
{
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"                 Vowels in String              "<<endl;
    cout<<"<<------------------------------------------->>"<<endl;

    string string;
    cout<<"Enter a string: ";
    cin>>string;
    bool hasVowel = false;

    for(int i = 0; i<= string.length(); i++)
    {
        if(string[i]== 'A' || string[i]== 'E' || string[i]== 'I' || string[i]== 'O' || string[i]== 'U' ||
		   string[i]== 'a' || string[i]== 'e' || string[i]== 'i' || string[i]== 'o' || string[i]== 'u'  )
		   {
                hasVowel = true; 
		   }
		   
    }
    if(hasVowel)
    {
        cout<<"The string contains vowels."<<endl;
    }
    else
    {
        cout<<"There are no vowels in this string."<<endl;
    }
    cout<<"<<------------------------------------------->>"<<endl;
    
}