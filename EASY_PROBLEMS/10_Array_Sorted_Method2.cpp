/*
Check Whether Array Is Sorted Or Not Using Recursion
Method -2
Working From Right To Left
*/
#include<iostream>
using namespace std;
bool isSorted(int ar[],int n){
    if(n==0||n==1)
        return true;
    bool sorted=isSorted(ar+1,n-1);
    //Once Sorted Become False It Will Only Return False
    if(!sorted)
        return false;
    if(ar[0]>ar[1])
        return false;
    else
        return true;
    
}
int main(){
    int ar[]={5,8,11,15};
    int size=sizeof(ar)/sizeof(int);
    if(isSorted(ar,size))
        cout<<"Array Is Sorted";
    else
        cout<<"Array Is Unsorted";
    return 0;
}
