/*
Print The Position Of Last Occuring Index
{5,5,6,5,2,7}
Position Of Last Occuring 5 Is => 3
*/
#include<iostream>
using namespace std;
//Using I
int lastIndex(int ar[],int n,int e,int i){
    if(i==-1)
        return -1;
    if(ar[i]==e)
        return i;
    return lastIndex(ar,n,e,--i);
}
//Using N
int lastIndex2(int ar[],int n,int e){
    if(n==0)
        return -1;
    if(ar[n-1]==e)
        return n-1;
    return lastIndex2(ar,n-1,e);
}
int main(){
    int a[]={5,5,6,5,2,7};
    int size=sizeof(a)/sizeof(int);
    cout<<lastIndex(a,size,5,size-1)<<endl;
    cout<<lastIndex2(a,size,5)<<endl;
    
    return 0;
}
