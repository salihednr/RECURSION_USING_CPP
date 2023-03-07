/*
Find Nth Fibonacci Number
Fibonacci Series 0,1,1,2,3,5,8,13,21......
Position Is Starting From 0
0th Fibonacci Number Is 0
1st Fibonacci Number Is 1
Some Relations In Fibonacci Series
Fn = F(n-1)+F(n-2)
Fn = F(n+2)-F(n+1)
*/
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
