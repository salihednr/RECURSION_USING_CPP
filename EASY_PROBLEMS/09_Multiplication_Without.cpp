/*
Multiplication Without Using *
*/
#include<iostream>
using namespace std;
int multiply(int n,int m){
    if(m==0)
        return 0;
    return multiply(n,m-1)+n;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<multiply(n,m);
    return 0;
}
