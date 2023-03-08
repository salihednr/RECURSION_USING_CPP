/*
Find The Index Of First Position Of The Element
{1,2,3,2} 
Position Of 2 Is = 1 (Position 1 Occurs First )
*/
#include<iostream>
using namespace std;
//Using Varible i
int firstElement(int ar[],int n,int e,int i=0){
    if(i==n)
        return -1;
    if(ar[i]==e)
        return i;
    return firstElement(ar,n,e,++i);
}
int main(){
    int ar[]={1,2,3,4,5,1,4,2};
    int size=sizeof(ar)/sizeof(int);
    cout<<firstElement(ar,size,22);
    return 0;
}
