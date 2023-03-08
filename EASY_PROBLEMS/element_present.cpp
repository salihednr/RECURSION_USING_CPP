#include<iostream>
using namespace std;
//Working From Right To Left
bool elementPresent1(int ar[],int n,int ele){
    if(n==0)
        return false;
    if(ar[0]==ele)
        return true;
    return elementPresent1(ar+1,n-1,ele);
    
}
//Working From Left To Right
bool elementPresent2(int ar[],int n,int ele){
    if(n==0)
        return false;
    bool check=elementPresent1(ar+1,n-1,ele);
    if(check)
        return true;
    if(ar[0]==ele)
        return true;
    else
        return false;
    
}
//Calling Left To Right But Checking From Right To Left
bool elementPresent3(int ar[],int n,int ele){
    if(n==0)
        return false;
    if(ar[n-1]==ele)
        return true;
    return elementPresent1(ar,n-1,ele);
}
//Using Varible I Left To Right
bool elementPresent4(int ar[],int n,int ele,int i=0){
    if(i==n)
        return false;
    if(ar[i]==ele)
        return true;
    return elementPresent4(ar,n,ele,++i);
}
//Using Variable I Right To Left
bool elementPresent5(int ar[],int n,int ele,int i){
    if(i==-1)
        return false;
    if(ar[i]==ele)
        return true;
    return elementPresent5(ar,n,ele,--i);
}
int main(){
    int ar[]={1,4,5,0,7};
    int size=sizeof(ar)/sizeof(int);
    int ele=4;
    cout<<elementPresent1(ar,size,ele)<<endl;
    cout<<elementPresent2(ar,size,ele)<<endl;
    cout<<elementPresent3(ar,size,ele)<<endl;
    cout<<elementPresent4(ar,size,ele)<<endl;
    cout<<elementPresent4(ar,size,ele,size-1)<<endl;
    return 0;
}
