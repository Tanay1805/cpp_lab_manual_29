// Write a program to check if a given string, is a palindrome.

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str;
    int a = 0,n;

    cout << "Enter a string to check for Palindrome: ";
    cin >> str;
    n=str.length();

    for(int i=0; i<n/2 ;i++)
    {
        if(str[i] == str [n - (i+1) ] )
        {
            a++;
        }
    }

    if(a==n/2){
        cout<<"Palindrome.";
    }
    else{
        cout<<"Not a Palindrome.";
        }
    return 0;
}