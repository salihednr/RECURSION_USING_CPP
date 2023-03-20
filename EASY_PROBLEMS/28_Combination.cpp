/*
Find nCr Using Recursion
Based On Pascal's Triangle We Can Obtain That
nCr = (n-1)C(r) + (n-1)C(r-1)
Eg: nCr+nCr-1=n+1Cr From This We Can Obtain Above Equation
Note:
nC0 = 1
nCn = 1
nCr = nCn-r
*/
#include<iostream>
using namespace std;
int C(int n,int r){
    if(r==n||r==0)
        return 1;
    return C(n-1,r)+C(n-1,r-1);
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    cout<<"C("<<n<<","<<r<<") = "<<C(n,r)<<endl;
    return 0;
}
