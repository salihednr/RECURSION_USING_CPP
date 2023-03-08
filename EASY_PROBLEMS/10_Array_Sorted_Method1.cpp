/*
Check Whether Array Is Sorted Or Not Using Recursion
Method -1
Working From Left To Right
*/
#include<iostream>
using namespace std;
bool isSorted(int ar[],int n){
    if(n==0||n==1)
        return true;
    if(ar[0]>ar[1])
        return false;
    return isSorted(ar+1,n-1);
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
