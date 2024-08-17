#include<iostream>
using namespace std;

bool ispalindrome(int x)
{
    if (x<0)
    {
        cout<<"It Is Not A Palindrome Number ";
    }
    else{
    long rev=0;
    int digit;
    int temp=x;
    while (x!=0)
    {
        digit=x%10;
        rev = rev*10+digit;
        x=x/10;
    }
    if(rev == temp)
    {
        cout<<"It Is A Palindrome Number ";
    }
    else{
        cout<<"It Is Not A Palindrome Number ";
    }
    }
}

int main()
{
    ispalindrome(123);
    return 0;
}
