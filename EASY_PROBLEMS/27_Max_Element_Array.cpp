/*
Maximum Element In An Array
*/
#include<climits>
#include<iostream>
using namespace std;
//Method -1
int arrayMax(int ar[],int size){
    if(size==0)
        return INT_MIN;
    int res=arrayMax(ar+1,size-1);
    return max(res,ar[0]);
}
//Method -2
int arrayMax2(int ar[],int size){
    if(size==0)
        return ar[0];
    int res=arrayMax2(ar,size-1);
    return max(res,ar[size-1]);
}
//Method -3
int arrayMax3(int ar[],int size,int i){
    if(i==size)
        return ar[i-1];
    int res=arrayMax3(ar,size,i+1);
    return max(res,ar[i]);
    
}
int main(){
    int ar[]={1,2,3,10,4,5};
    int size=sizeof(ar)/sizeof(int);
    cout<<arrayMax(ar,size)<<endl;
    cout<<arrayMax2(ar,size)<<endl;
    cout<<arrayMax3(ar,size,0)<<endl;
    return 0;
}
