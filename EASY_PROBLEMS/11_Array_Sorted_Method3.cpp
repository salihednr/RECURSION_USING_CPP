/*
Check Whether Array Is Sorted Or Not Using Recursion
Method -3
Calling From Left To Right But Working From Right To Left
*/
#include<iostream>
using namespace std;
bool isSorted(int ar[],int n){
    if(n==0||n==1)
        return true;
    if(ar[n-1]<ar[n-2])
        return false;
    return isSorted(ar,n-1);
}
int main(){
    int ar[]={5,8,11,1,15};
    int size=sizeof(ar)/sizeof(int);
    if(isSorted(ar,size))
        cout<<"Array Is Sorted";
    else
        cout<<"Array Is Unsorted";
    return 0;
}
