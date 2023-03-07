/*
Count Zeroes
10210 => 2 
1000=> 3
*/
#include<iostream>
using namespace std;
int zeroes(int n){
    if(n==0)
        return 0;
    if(n%10==0)
        return 1+zeroes(n/10);
    else
        return zeroes(n/10);
    
}
int main(){
    int n;
    cin>>n;
    cout<<zeroes(n);
    return 0;
}
