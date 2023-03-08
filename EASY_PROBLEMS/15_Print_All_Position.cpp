/*
Print All The Position Of Particular Element
{5,5,6,5,2,7}
5 = > 0 1 3
*/
#include<iostream>
using namespace std;
void printAllIndex(int ar[],int size,int e,int i=0){
    if(i==size)
        return;
    if(ar[i]==e)
        cout<<i<<" ";
    printAllIndex(ar,size,e,++i);
}
int main(){
    int a[]={5,5,6,5,2,7};
    int size=sizeof(a)/sizeof(int);
    printAllIndex(a,size,5,0);
    return 0;
}
