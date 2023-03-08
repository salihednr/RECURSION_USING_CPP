/*
Check Palindrome Using Recursion
*/
#include<iostream>
using namespace std;
bool checkPalindrome(int a[],int s,int e){
    if(s>e)
        return true;
    if(a[s]==a[e])
        return checkPalindrome(a,s+1,e-1);
    else
        return false;
}
int main()
{
    int ar[]={1,2,3,2,1};
    int size = sizeof(ar)/sizeof(int);
    cout<<checkPalindrome(ar,0,size-1);
    
}
