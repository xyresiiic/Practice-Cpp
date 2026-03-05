#include<iostream>
using namespace std;

int main()
{
    cout<<"<<------------------------------------------->>"<<endl;
    cout<<"               Vowels & Comsonent              "<<endl;
    cout<<"<<------------------------------------------->>"<<endl;

    string string;
    cout<<"Enter a string: ";
    getline(cin,string);
    
    int vowel = 0;
    int consonent = 0;
    int space = 0;

    for(int i = 0; i<= string.length(); i++)
    {
        char ch = tolower(string[i]);

        if(ch >= 'a' && ch <= 'z')
        {
        if(string[i]== 'a' || string[i]== 'e' || string[i]== 'i' || string[i]== 'o' || string[i]== 'u')
		   {
            vowel++; 
		   }
           else
           {
           consonent++;
           }
        }
        else if(ch == ' ')
        {
            space++;
        }
        
		   
    }
    
    cout<<"Number of conconents : "<<consonent<<endl;
    cout<<"Number of Vowels     : "<<vowel<<endl;
    cout<<"Number of Space     : "<<space<<endl;
    cout<<"<<------------------------------------------->>"<<endl;
    
}