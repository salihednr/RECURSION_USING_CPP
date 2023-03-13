/*
Return Reverse Of The Integer
log10(num) will return (number of digits - 1)
*/
#include<iostream>
#include<cmath>
using namespace std;
int reverseInteger(int num){
    if(num==1)
        return 0;
    return (num%10)*pow(10,(int)log10(num))+reverseInteger(num/10);
}
int main(){
    int n;
    cin>>n;
    cout<<reverseInteger(n)<<endl;
    return 0;
}
