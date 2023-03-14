#include <iostream>
using namespace std;
//Method -1
void reverseArray(int ar[],int s,int e){
    if(s>e)
        return;
    swap(ar[s],ar[e]);
    reverseArray(ar,s+1,e-1);
}
//Method -2 
void reverseArray2(int ar[],int size,int i){
    if(i>=(size/2))
        return;
    swap(ar[i],ar[size-i-1]);
    reverseArray2(ar,size,i+1);
}
int main()
{
    int ar[]={1,2,3,5,6,7,8};
    int size=sizeof(ar)/sizeof(int);
    for(int i=0;i<size;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    reverseArray(ar,0,size-1);
    for(int i=0;i<size;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    reverseArray2(ar,size,0);
    for(int i=0;i<size;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
