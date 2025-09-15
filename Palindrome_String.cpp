#include<iostream>
#include<string>
using namespace std;

int main()
{
    string pal;
    cout<<"enter the sting:- ";
    cin>>pal;

    int start=0;
    int end=pal.length()-1;

    bool ispalindrome= true;

    while(start<end)
    {
        if(pal[start]!=pal[end])
        {
            ispalindrome= false;
            break;
        }
        start++;
        end--;
    }

    if(ispalindrome)
    {
        cout<<"the given string is palindrome";
    }
    else{
        cout<<"its not a palindrome";
    }
    return 0;
}