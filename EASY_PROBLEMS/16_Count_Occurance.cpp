/*
Count The Occurance Of The Element
{5,3,5,6,5} 
5 Occurs two Times So => 2
*/
#include<iostream>
using namespace std;
//Method 1 (Pass By Referance) (Global Variable Can Also Be Used)
void countOccurance(int ar[],int size,int e,int i,int &count){
    if(i==size)
        return;
    if(ar[i]==e)
        count++;
    countOccurance(ar,size,e,++i,count);
}
//Without Using Global Variable
int countOccurance2(int ar[],int n,int x,int i){
    if(i==n)
        return 0;
    if(ar[i]==x)
        return 1+countOccurance2(ar,n,x,i+1);
    else
        return countOccurance2(ar,n,x,i+1);
}
int main(){
    int a[]={5,3,5,6,5};
    int size=sizeof(a)/sizeof(int);
    int count=0;
    countOccurance(a,size,5,0,count);
    cout<<count<<endl;
    cout<<countOccurance2(a,size,5,0);
    return 0;
}
