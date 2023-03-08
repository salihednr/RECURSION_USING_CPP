#include<iostream> 
using namespace std; 
//Method 1 Left To Right
int sumOfArray1(int ar[],int n)
{ 
    if(n==0) 
        return 0; 
    return ar[0]+sumOfArray(ar+1,n-1); 
} 
//Method 2 Right To Left
int sumOfArray2(int ar[],int n)
{ 
    if(n==0) 
        return 0; 
    return ar[n-1]+sumOfArray(ar,n-1); 
}
//Method 3 Using Another Variable I. Working Is From Left To Right
int sumOfArray3(int ar[],int n,int i=0)
{ 
    if(i==n) 
        return 0; 
    return ar[i]+sumOfArray3(ar,n,++i); 
}
//Method 4 Using Another Variable I. Working Is From Right To Left
int sumOfArray4(int ar[],int n,int i)
{ 
    if(i==-1) 
        return 0; 
    return ar[i]+sumOfArray4(ar,n,--i); 
}
int main()
{ 
    int ar[]={1,2,4,5,12,1,5}; 
    int size=sizeof(ar)/sizeof(int); 
    cout<<sumOfArray1(ar,size)<<endl;
    cout<<sumOfArray2(ar,size)<<endl;
    cout<<sumOfArray3(ar,size)<<endl;
    cout<<sumOfArray4(ar,size,size-1)<<endl;
    return 0; 
    
}
